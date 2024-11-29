/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define R0_Pin GPIO_PIN_1
#define R0_GPIO_Port GPIOA
#define Y0_Pin GPIO_PIN_2
#define Y0_GPIO_Port GPIOA
#define GR0_Pin GPIO_PIN_3
#define GR0_GPIO_Port GPIOA
#define R1_Pin GPIO_PIN_4
#define R1_GPIO_Port GPIOA
#define Y1_Pin GPIO_PIN_5
#define Y1_GPIO_Port GPIOA
#define GR1_Pin GPIO_PIN_6
#define GR1_GPIO_Port GPIOA
#define A0_Pin GPIO_PIN_0
#define A0_GPIO_Port GPIOB
#define B0_Pin GPIO_PIN_1
#define B0_GPIO_Port GPIOB
#define C0_Pin GPIO_PIN_2
#define C0_GPIO_Port GPIOB
#define D1_Pin GPIO_PIN_10
#define D1_GPIO_Port GPIOB
#define E1_Pin GPIO_PIN_11
#define E1_GPIO_Port GPIOB
#define F1_Pin GPIO_PIN_12
#define F1_GPIO_Port GPIOB
#define G1_Pin GPIO_PIN_13
#define G1_GPIO_Port GPIOB
#define D0_Pin GPIO_PIN_3
#define D0_GPIO_Port GPIOB
#define E0_Pin GPIO_PIN_4
#define E0_GPIO_Port GPIOB
#define F0_Pin GPIO_PIN_5
#define F0_GPIO_Port GPIOB
#define G0_Pin GPIO_PIN_6
#define G0_GPIO_Port GPIOB
#define A1_Pin GPIO_PIN_7
#define A1_GPIO_Port GPIOB
#define B1_Pin GPIO_PIN_8
#define B1_GPIO_Port GPIOB
#define C1_Pin GPIO_PIN_9
#define C1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
