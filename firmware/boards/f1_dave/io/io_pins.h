#pragma once

#define LED_BLUE_PORT GPIOB
#define LED_BLUE_PIN 13

#define LED_GREEN_PORT GPIOA
#define LED_GREEN_PIN 8

#define NERNST_ESR_DRIVER_PORT GPIOB
#define NERNST_ESR_DRIVER_PIN 12

// PC13 on rev 0.1
// exploring jumper wire from PB6 DISP3 to HEATER
// PB6 TIM4_CH1
#define HEATER_PWM_DEVICE PWMD4
#define HEATER_PWM_CHANNEL 0

#define HEATER_PORT GPIOB
#define HEATER_PIN 6

// PA1 TIM2_CH2
#define PUMP_DAC_PWM_DEVICE PWMD2
#define PUMP_DAC_PWM_CHANNEL 1

#define ID_SEL1_PORT GPIOB
#define ID_SEL1_PIN 0

#define ID_SEL2_PORT GPIOB
#define ID_SEL2_PIN 1