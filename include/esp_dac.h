#ifndef ESP_DAC_H
#define ESP_DAC_H

#include <stdint.h> 
#include "driver/gpio.h"

// Take in a vlotage and write it to the DAC 
void write_dac(float voltage)
{
    // Stub 
    /*
        if: within max voltage (12 bits)
            convert_to_int()
            gpio_out()
        else: 
            throw an error or do nothing? 
    */

    return; 
}



#endif 