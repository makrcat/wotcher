#include <avr/io.h>
#include <util/delay.h>

#define LED 0

int main() {
   
    // idk what this does imo
    CCP = CCP_SPM_gc;
    CLKCTRL.MCLKCTRLB = 0;

    PORTC.DIRSET = (1 << LED);

    while (1) {
        PORTC.OUTTGL = (1 << LED);
        _delay_ms(500);
    }

    return 0;
}
