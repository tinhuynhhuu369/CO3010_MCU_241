/*
 * 7seg.c
 *
 *  Created on: Nov 28, 2024
 *      Author: admin
 */
#include "7seg.h"

static uint8_t LED7_SEG[10] = { 0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8,
		0x80, 0x90 };

void display7SEG_Mode(int num) {
	HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, ((LED7_SEG[num] >> 0) & 0x01));
	HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, ((LED7_SEG[num] >> 1) & 0x01));
	HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, ((LED7_SEG[num] >> 2) & 0x01));
	HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, ((LED7_SEG[num] >> 3) & 0x01));
	HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, ((LED7_SEG[num] >> 4) & 0x01));
	HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, ((LED7_SEG[num] >> 5) & 0x01));
	HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, ((LED7_SEG[num] >> 6) & 0x01));
}

void display7SEG_Value(int num) {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, ((LED7_SEG[num] >> 0) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, ((LED7_SEG[num] >> 1) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, ((LED7_SEG[num] >> 2) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, ((LED7_SEG[num] >> 3) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, ((LED7_SEG[num] >> 4) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, ((LED7_SEG[num] >> 5) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, ((LED7_SEG[num] >> 6) & 0x01));
}

void update7SEG(int position, int mode_data, int value_data) {
	switch (position) {
		case 0:
			HAL_GPIO_WritePin(EN_MODE_0_GPIO_Port, EN_MODE_0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN_MODE_1_GPIO_Port, EN_MODE_1_Pin, GPIO_PIN_SET);
			display7SEG_Mode(modeData / 10);
			HAL_GPIO_WritePin(EN_VAL_0_GPIO_Port, EN_VAL_0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(EN_VAL_1_GPIO_Port, EN_VAL_1_Pin, GPIO_PIN_SET);
			display7SEG_Value(valueData / 10);
			break;
		case 1:
			HAL_GPIO_WritePin(EN_MODE_0_GPIO_Port, EN_MODE_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(EN_MODE_1_GPIO_Port, EN_MODE_1_Pin, GPIO_PIN_RESET);
			display7SEG_Mode(modeData % 10);
			HAL_GPIO_WritePin(EN_VAL_0_GPIO_Port, EN_VAL_0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(EN_VAL_1_GPIO_Port, EN_VAL_1_Pin, GPIO_PIN_RESET);
			display7SEG_Value(valueData % 10);
			break;
		default:
			break;
	}
}
