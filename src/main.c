#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

// #define PERIOD 500
// #define BLINK_GPIO 2

#define DAC0 6 
#define DAC1 7
#define DAC2 8
#define DAC3 0 
#define DAC4 15
#define DAC5 2
#define DAC6 4
#define DAC7 16

void app_main()
{ 
    // gpio_pad_select_gpio(BLINK_GPIO);
    // /* Set the GPIO as a push/pull output */
    // gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);

    // while(1) 
    // {
    //     /* Blink off (output low) */
    //     printf("Turning off the LED\n");
    //     gpio_set_level(BLINK_GPIO, 0);
    //     vTaskDelay(PERIOD / portTICK_PERIOD_MS);

    //     /* Blink on (output high) */
    //     printf("Turning on the LED\n");
    //         gpio_set_level(BLINK_GPIO, 1);
    //         vTaskDelay(PERIOD / portTICK_PERIOD_MS);
    // }


    gpio_set_direction(DAC0, GPIO_MODE_OUTPUT);
    gpio_set_level(DAC0, 1);

    gpio_set_direction(DAC1, GPIO_MODE_OUTPUT);
    gpio_set_level(DAC1, 1);

    gpio_set_direction(DAC2, GPIO_MODE_OUTPUT);
    gpio_set_level(DAC2, 1);

    gpio_set_direction(DAC3, GPIO_MODE_OUTPUT);
    gpio_set_level(DAC3, 1);

    gpio_set_direction(DAC4, GPIO_MODE_OUTPUT);
    gpio_set_level(DAC4, 1);

    gpio_set_direction(DAC5, GPIO_MODE_OUTPUT);
    gpio_set_level(DAC5, 1);

    gpio_set_direction(DAC6, GPIO_MODE_OUTPUT);
    gpio_set_level(DAC6, 1);

    gpio_set_direction(DAC7, GPIO_MODE_OUTPUT);
    gpio_set_level(DAC7, 1);

}