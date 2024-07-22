#include <dev/keys.h>
#include <kernel/event.h>
#include <kernel/timer.h>
#include <dev/gpio.h>

#define ARRAY_SIZE(x) (sizeof(x)/sizeof((x)[0]))

event_t keyEvent;

enum SchubertButtons {
    VOLUMEDOWN,
    VOLUMEUP,
    CAMERA,
    POWER
};

struct KeyStruct {
    enum SchubertButtons buttonname; // Enum for the button name
    unsigned keycode;                // Key code
    unsigned gpio;                   // Corresponding GPIO key
};

struct KeyStruct htcschubert_keymap[4] = {
    {CAMERA, KEY_SEND, 90},
    {VOLUMEUP, KEY_VOLUMEUP, 94},
    {VOLUMEDOWN, KEY_VOLUMEDOWN, 41},
    {POWER, KEY_CLEAR, 42}
};

// Static array to store previous states of keys
static int previous_states[4] = {1, 1, 1, 1}; // Initialize to 1 (keys not pressed)

// Function to check the state of the keys and post events
void check_keys(void) {
    for (int i = 0; i < 4; i++) {
        int gpio_state = gpio_get(htcschubert_keymap[i].gpio);

        // Adjust for pull-down configuration:
        // 0 indicates a key press
        // 1 indicates a key release
        int key_pressed = (gpio_state == 0);

        // Only post an event if the state has changed
        if (key_pressed != previous_states[i]) {
            keys_post_event(htcschubert_keymap[i].keycode, key_pressed);
            previous_states[i] = key_pressed; // Update the previous state
        }
    }
}

static enum handler_return gpio_keypad_timer_func(struct timer *timer, time_t now, void *arg) {
    // Check the keys using the global htcschubert_keymap array
    check_keys();

    // Reschedule the timer
    event_signal(&keyEvent, false);
    timer_set_oneshot(timer, 100, gpio_keypad_timer_func, NULL);

    return INT_RESCHEDULE;
}

void gpio_keys_init(void) {
    static timer_t keypad_timer;
    event_init(&keyEvent, false, EVENT_FLAG_AUTOUNSIGNAL);
    timer_initialize(&keypad_timer);
    timer_set_oneshot(&keypad_timer, 100, gpio_keypad_timer_func, NULL);
    event_wait(&keyEvent);
}

void keypad_init(void) {
    gpio_keys_init();
}
