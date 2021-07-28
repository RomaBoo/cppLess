#include "common.h"
#include <avr/io.h>



GPIO_TypeDef GPIOB;
GPIO_TypeDef GPIOC;
GPIO_TypeDef GPIOD;

void GPIO_Init()
{
    GPIOB.PORTR = &PORTB;
    GPIOB.PINR = &PINB;
    GPIOB.DDRR = &DDRB;

    GPIOD.PORTR = &PORTD;
    GPIOD.PINR = &PIND;
    GPIOD.DDRR = &DDRD;

    GPIOC.PORTR = &PORTC;
    GPIOC.PINR = &PINC;
    GPIOC.DDRR = &DDRC;
}

void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin, GPIO_PinState PinState)
{
    if(PinState == GPIO_PIN_SET)
        *GPIOx->PORTR |= 1 << GPIO_Pin;
    else
        *GPIOx->PORTR &= ~(1 << GPIO_Pin);
}

void f(GPIO_TypeDef *GPIOx)
{
    (*GPIOx->PORTR)++;
}

