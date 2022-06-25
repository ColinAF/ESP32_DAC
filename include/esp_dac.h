#ifndef ESP_DAC_H
#define ESP_DAC_H

#include <stdint.h> 
#include "driver/gpio.h"

// Take in a vlotage and write it to the DAC 
void write_dac(float voltage)
{
    // STUB
    /*
        if: within max voltage (12 bits)
            convert_to_int()
            gpio_out()
        else: 
            throw an error or do nothing? 
    */
    return; 
}

// Convert a float to int that can be output to the DAC 
static uint16_t volt_to_int()
{

    return 0; 
}

// Output the value to the DAC 
static void gpio_out()
{

    return; 
}

#endif 