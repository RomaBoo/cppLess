/*
 */

#include <avr/io.h>

#include "common.h"


int main(void)
{
    GPIO_Init();

    HAL_GPIO_Direct(&GPIOB, GPIO_PIN_5, GPIO_PIN_OUT);
    HAL_GPIO_Direct(&GPIOD, GPIO_PIN_4|GPIO_PIN_5, GPIO_PIN_OUT);
//    HAL_GPIO_Direct(&GPIOD, GPIO_PIN_4, GPIO_PIN_OUT);

//    HAL_GPIO_WritePin(&GPIOB, 0, GPIO_PIN_RESET);
//    HAL_GPIO_WritePin(&GPIOB, 3, GPIO_PIN_RESET);
//    HAL_GPIO_WritePin(&GPIOB, 4, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(&GPIOB, GPIO_PIN_5, GPIO_PIN_RESET);

    HAL_GPIO_WritePin(&GPIOD, GPIO_PIN_4, GPIO_PIN_SET);
    HAL_GPIO_WritePin(&GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);
//    f(&GPIOB);
//    f(&PORTB);


    // Insert code

    while(1)
    ;

    return 0;
}
