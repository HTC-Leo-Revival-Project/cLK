#define MDPBASE 0xAA290008
#define FBSIZE 0x000C0000

#define REG32(addr) ((volatile uint32_t *)(addr))

#define writel(v, a) (*REG32(a) = (v))
#define readl(a) (*REG32(a))

typedef unsigned int       uint32_t;

void main(void){
//get addr here
char fbAddr = readl(MDPBASE);
int bytesWritten = 0;

while (bytesWritten <= FBSIZE){
    writel(0x07E0,fbAddr+bytesWritten);
    bytesWritten++;
}

for (;;);

}