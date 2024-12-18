// FW3A config options for flui
// Copyright (C) 2018-2023 Selene ToyKeeper
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "lumintop/fw3a/hwdef.h"

#define RAMP_SIZE 150

// ../../bin/level_calc.py 1 65 7135 1 0.8 150
// ... mixed with this:
// ../../../bin/level_calc.py 3 150 7135 1 0.33 150 7135 1 1 850 FET 1 10 1500
#define PWM1_LEVELS 1,1,2,2,3,3,4,4,5,6,7,8,9,10,12,13,14,15,17,19,20,22,24,26,29,31,34,36,39,42,45,48,51,55,59,62,66,70,75,79,84,89,93,99,104,110,115,121,127,134,140,147,154,161,168,176,184,192,200,209,217,226,236,245,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM2_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,6,8,10,13,15,17,19,22,24,26,29,31,34,37,39,42,45,48,51,54,57,60,64,67,70,74,77,81,85,88,92,96,100,104,108,112,116,121,125,130,134,139,143,148,153,158,163,168,173,179,184,189,195,201,206,212,218,224,230,236,243,249,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM3_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,19,31,43,55,67,79,91,104,117,130,143,157,170,184,198,212,226,240,255

#define DEFAULT_LEVEL       50
#define MAX_1x7135          65
#define MAX_Nx7135          130
#define HALFSPEED_LEVEL     15
#define QUARTERSPEED_LEVEL  6

#define RAMP_SMOOTH_FLOOR  1
#define RAMP_SMOOTH_CEIL   MAX_Nx7135
// 10, 30, 50, [70], 90, 110, 130
#define RAMP_DISCRETE_FLOOR  10
#define RAMP_DISCRETE_CEIL   RAMP_SMOOTH_CEIL
#define RAMP_DISCRETE_STEPS  7

// safe limit ~20% power
// 20 40 60 80 100
#define SIMPLE_UI_FLOOR  20
#define SIMPLE_UI_CEIL   100
#define SIMPLE_UI_STEPS  5

// stop panicking at about 3A or ~1100 lm, this light is a hotrod
#define THERM_FASTER_LEVEL MAX_Nx7135

// don't blink during ramp
#define BLINK_AT_RAMP_CEIL
#undef BLINK_AT_RAMP_MIDDLE
#undef BLINK_AT_RAMP_FLOOR

// enable extra features
#define USE_SMOOTH_STEPS

// can't reset the normal way because power is connected before the button
#define USE_SOFT_FACTORY_RESET

// too big, turn off extra features
#undef USE_TACTICAL_MODE
#undef USE_SOS_MODE

