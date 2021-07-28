#ifndef COMMON_H
#define COMMON_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stdint.h"



typedef enum {
	FALSE=0,
	TRUE=1
} BOOL;

typedef enum
{
  GPIO_PIN_RESET = 0,
  GPIO_PIN_SET
} GPIO_PinState;

void HAL_GPIO_WritePin(uint8_t *GPIOx, uint8_t GPIO_Pin, GPIO_PinState PinState);

void f(uint8_t *a);


#ifdef __cplusplus
}
#endif
#endif // COMMON_H
