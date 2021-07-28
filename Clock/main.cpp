/*
 */

#include <avr/io.h>

#include "common.h"


int main(void)
{
    HAL_GPIO_WritePin(&GPIOB, 2, GPIO_PIN_SET);
    f(&GPIOB);
//    f(&PORTB);


    // Insert code

    while(1)
    ;

    return 0;
}
