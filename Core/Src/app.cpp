#include "app.h"
#include "main.h"

uint16_t adress = 0;

void App_Init(void)
{
    for (int i = 1; i < 255; i++)
    {
        if (HAL_I2C_IsDeviceReady(&hi2c1, i , 1, 100) == HAL_OK)
        {
            adress = i;
        }
    }
}

void App_Run(void)
{
}
