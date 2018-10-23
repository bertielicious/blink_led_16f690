
#include <proc/p32mx170f256b.h>

void init_clock(void)
{
    OSCCONbits.NOSC2 = 0;   // internal fast osc divided by 16
    OSCCONbits.NOSC1 = 1;
    OSCCONbits.NOSC0 = 0;
}