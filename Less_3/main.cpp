#include <iostream>
#include "common.h"

#include "stdint.h"

using namespace std;


int main()
{
    uint8_t PORTB = 1;
    cout << "Hello world!" << endl;

    f(&PORTB);

//    HAL_GPIO_WritePin(&PORTB, 2, GPIO_PIN_SET);
    return 0;
}
