#include "common.h"

void HAL_GPIO_WritePin(uint8_t *GPIOx, uint8_t GPIO_Pin, GPIO_PinState PinState)
{
    if(PinState == GPIO_PIN_SET)
    {
        *GPIOx |= 1 << GPIO_Pin;
    }
    else
    {
        *GPIOx &= ~(1 << GPIO_Pin);

    }


}

void f(uint8_t *a)
{
    (*a)++;
}

