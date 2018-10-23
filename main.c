/* ************************************************************************** */
/** Blink an LED to prove tool chain

  @Company
 Hifi Gear

  @File Name
    main.c

  @Summary
 Makes LED blink via PORTA 

  @Description
 To prove configuration bits and tool chain are good
 */
#include <xc.h>
#include "main.h"
#include "config.h"
#include "init_clock.h"
#include "init_ports.h"
//void init_clock(void);
//void init_ports(void);
void init_clock();
void init_ports();
void main (void)
{
    while(1)
    {
    PORTBbits.RB4 = 1;
    PORTBbits.RB12 = 1;
  //  __delay_ms(1000);
    //PORTBbits.RB4 = 0;
   // LATBbits.LATB12 = 1;
  //  LATBbits.LATB4 = 1;
    }
    
}