
#include <proc/p32mx170f256b.h>
void init_ports(void)
{ 
    ANSELB = 0x0000;
   // ODCBbits.ODCB4 = 0;         // open drain control register for RB4 disabled
   // CNPUBbits.CNPUB4 = 0;
   // CNPDBbits.CNPDB4 = 0;
    CNENBbits.CNIEB4 = 0;
    CNSTATBbits.CNSTATB4 = 0;
    //RPB4R = 0b00000000;
    TRISBbits.TRISB4 = 0;       // pin 11 RB4 is an output pin 
    TRISBbits.TRISB12 = 0;      // PIN 23 rb12 IS AN OUTPUT PIN
    /****************************************************************************
     * Setting the Output Latch SFR(s)
     ***************************************************************************/
    LATA = 0x0000;
    LATB = 0x0000;

    /****************************************************************************
     * Setting the GPIO Direction SFR(s)
     ***************************************************************************/
    TRISA = 0x0000;
    TRISB = 0x0000;

    /****************************************************************************
     * Setting the Weak Pull Up and Weak Pull Down SFR(s)
     ***************************************************************************/
    CNPDA = 0x0000;
    CNPDB = 0x0000;
    CNPUA = 0x0000;
    CNPUB = 0x0000;

    /****************************************************************************
     * Setting the Open Drain SFR(s)
     ***************************************************************************/
    ODCA = 0x0000;
    ODCB = 0x0000;

}