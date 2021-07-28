#include <stdio.h>
#include <stdlib.h>

#include "common.h"

int main()
{
    uint8_t PORTB = 1;

    printf("Hello world!\n");
    HAL_GPIO_WritePin(&PORTB, 2, GPIO_PIN_SET);

    HAL_GPIO_WritePin(&PORTB, 2, GPIO_PIN_RESET);

    return 0;
}
