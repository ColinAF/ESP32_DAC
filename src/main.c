#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

#define PERIOD 500
#define BLINK_GPIO 2

void app_main()
{ 
    gpio_pad_select_gpio(BLINK_GPIO);
    /* Set the GPIO as a push/pull output */
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);

    while(1) 
    {
        /* Blink off (output low) */
        printf("Turning off the LED\n");
        gpio_set_level(BLINK_GPIO, 0);
        vTaskDelay(PERIOD / portTICK_PERIOD_MS);

        /* Blink on (output high) */
        printf("Turning on the LED\n");
            gpio_set_level(BLINK_GPIO, 1);
            vTaskDelay(PERIOD / portTICK_PERIOD_MS);
    }
}