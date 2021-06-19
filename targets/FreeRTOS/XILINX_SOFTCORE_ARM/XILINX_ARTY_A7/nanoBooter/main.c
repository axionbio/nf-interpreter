//
// Copyright (c) .NET Foundation and Contributors
// See LICENSE file in the project root for full license information.
//
#include "FreeRTOS.h"
#include "task.h"

#include <WireProtocol_ReceiverThread.h>


// configure heap memory
__attribute__((section(".noinit.$SRAM_OC.ucHeap"))) uint8_t ucHeap[configTOTAL_HEAP_SIZE];

#define LED_GPIO     GPIO1
#define LED_GPIO_PIN (9U)

static void blink_task(void *pvParameters)
{
    (void)pvParameters;

    /* Define the init structure for the output LED pin*/
    gpio_pin_config_t led_config = {kGPIO_DigitalOutput, 0, kGPIO_NoIntmode};

    /* Init output LED GPIO. */
    GPIO_PinInit(LED_GPIO, LED_GPIO_PIN, &led_config);

    for (;;)
    {
        vTaskDelay(100);
        GPIO_PortToggle(LED_GPIO, 1u << LED_GPIO_PIN);
        vTaskDelay(500);
        GPIO_PortToggle(LED_GPIO, 1u << LED_GPIO_PIN);
    }
}



int main(void)
{
    // init boot clipboard
    InitBootClipboard();

    // report successfull nanoBooter execution
    ReportSuccessfullNanoBooter();

    xTaskCreate(blink_task, "blink_task", configMINIMAL_STACK_SIZE + 10, NULL, configMAX_PRIORITIES - 1, NULL);
    xTaskCreate(ReceiverThread, "ReceiverThread", 2048, NULL, configMAX_PRIORITIES - 1, NULL);
    vTaskStartScheduler();

    for (;;)
        ;
    return 0;
}