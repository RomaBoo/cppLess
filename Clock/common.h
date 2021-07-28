#ifndef COMMON_H
#define COMMON_H

#include <avr/io.h>
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

typedef enum
{
  GPIO_PIN_IN = 0,
  GPIO_PIN_OUT
} GPIO_PinDirect;

#define GPIO_PIN_0                 ((uint8_t)0x0001)  /* Pin 0 selected    */
#define GPIO_PIN_1                 ((uint8_t)0x0002)  /* Pin 1 selected    */
#define GPIO_PIN_2                 ((uint8_t)0x0004)  /* Pin 2 selected    */
#define GPIO_PIN_3                 ((uint8_t)0x0008)  /* Pin 3 selected    */
#define GPIO_PIN_4                 ((uint8_t)0x0010)  /* Pin 4 selected    */
#define GPIO_PIN_5                 ((uint8_t)0x0020)  /* Pin 5 selected    */
#define GPIO_PIN_6                 ((uint8_t)0x0040)  /* Pin 6 selected    */
#define GPIO_PIN_7                 ((uint8_t)0x0080)  /* Pin 7 selected    */


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
void HAL_GPIO_Direct(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin, GPIO_PinDirect PinDir);

void GPIO_Init();

void f(GPIO_TypeDef *GPIOx);


#ifdef __cplusplus
}
#endif

#endif // COMMON_H
