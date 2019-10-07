#ifndef SIMULATOR

#include "stm32f7xx_hal.h"

#include "gui/model/Hal.hpp"

void Hal::init()
{
    GPIO_InitTypeDef input;
    input.Pin = GPIO_PIN_11;
    input.Mode = GPIO_MODE_INPUT;
    input.Pull = GPIO_PULLUP;
    input.Speed = GPIO_SPEED_HIGH;
    HAL_GPIO_Init(GPIOI, &input);

    GPIO_InitTypeDef output;
    output.Pin = GPIO_PIN_6;
    output.Mode = GPIO_MODE_OUTPUT_PP;
    output.Pull = GPIO_NOPULL;
    output.Speed = GPIO_SPEED_HIGH;
    HAL_GPIO_Init(GPIOG, &output);
}

void Hal::setLed(bool on)
{
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6,
        on ? GPIO_PIN_SET : GPIO_PIN_RESET);
}

bool Hal::getButton()
{
    return HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_11) == GPIO_PIN_RESET;
}

#endif