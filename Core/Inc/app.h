#ifndef APP_H
#define APP_H

#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif

extern I2C_HandleTypeDef hi2c1;

void App_Init(void);
void App_Run(void);

#ifdef __cplusplus
}
#endif

#endif
