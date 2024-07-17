#include <dev/keys.h>
#include <dev/gpio_keypad.h>

#define ARRAY_SIZE(x) (sizeof(x)/sizeof((x)[0]))

static unsigned int htcleo_col_gpios[] = { 90, 94, 41, 42 };


#define KEYMAP_INDEX(col) (col)

static const unsigned short htcleo_keymap[ARRAY_SIZE(htcleo_col_gpios)] = {
    [KEYMAP_INDEX(0)] = KEY_SEND,    // Volume Up
    [KEYMAP_INDEX(1)] = KEY_VOLUMEUP,  // Volume Down
    [KEYMAP_INDEX(2)] = KEY_VOLUMEDOWN,       // Windows Button
    [KEYMAP_INDEX(3)] = KEY_CLEAR,        // Dial Button
};

static struct gpio_keypad_info htcleo_keypad_info = {
	.keymap		= htcleo_keymap,
	.output_gpios	= NULL,
	.input_gpios	= htcleo_col_gpios,
	.noutputs	= 0,
	.ninputs	= ARRAY_SIZE(htcleo_col_gpios),
	.settle_time	= 40 /* msec */,
	.poll_time	= 20 /* msec */,
	.flags		= GPIOKPF_DRIVE_INACTIVE,
};

void keypad_init(void)
{
	gpio_keypad_init(&htcleo_keypad_info);
}
