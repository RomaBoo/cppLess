#ifndef COMMON_H
#define COMMON_H
#include "stdint.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
	FALSE=0,
	TRUE=1
} BOOL;

typedef enum
{
  GPIO_PIN_RESET = 0,
  GPIO_PIN_SET
} GPIO_PinState;

typedef struct
{
    volatile uint8_t *DDRR;
    volatile uint8_t *PORTR;
    volatile uint8_t *PINR;
} GPIO_TypeDef;

extern GPIO_TypeDef GPIOB;
extern GPIO_TypeDef GPIOC;
extern GPIO_TypeDef GPIOD;


void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin, GPIO_PinState PinState);

void f(GPIO_TypeDef *GPIOx);


#ifdef __cplusplus
}
#endif

#endif // COMMON_H
