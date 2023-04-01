#include "MM32_MDS_PinMap.h"

MM32_MDS_Pin MDS_IN1_PA7    = {.periBase = 0, .port = GPIOA, .pin = P07, .af = AF15};
MM32_MDS_Pin MDS_OUT2_PA13  = {.periBase = 0, .port = GPIOA, .pin = P13, .af = AF15};
MM32_MDS_Pin MDS_IN3_PA14   = {.periBase = 0, .port = GPIOA, .pin = P14, .af = AF15};

MM32_MDS_Pin MDS_OUT3_PB7   = {.periBase = 0, .port = GPIOB, .pin = P07, .af = AF15};
MM32_MDS_Pin MDS_OUT1_PB11  = {.periBase = 0, .port = GPIOB, .pin = P11, .af = AF15};
MM32_MDS_Pin MDS_IN2_PB14   = {.periBase = 0, .port = GPIOB, .pin = P14, .af = AF15};

MM32_MDS_Pin MDS_IN0_PC13   = {.periBase = 0, .port = GPIOC, .pin = P13, .af = AF15};

MM32_MDS_Pin MDS_OUT0_PI0   = {.periBase = 0, .port = GPIOI, .pin = P00, .af = AF15};