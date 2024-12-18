// Emisar D18 (FET+13+1) config options for flui
// Copyright (C) 2019-2023 Selene ToyKeeper
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "hank/emisar-d18/hwdef.h"
#include "hank/flui.h"

#define RAMP_SIZE 150

// level_calc.py seventh 3 150 7135 1 1.4 117.99 7135 6 1 1706.86 FET 3 10 13000
// (designed to make 1x hit at level 50, and Nx hit at level 100)
#define PWM1_LEVELS 1,1,2,2,3,4,4,5,6,7,8,9,10,11,15,16,18,20,22,24,26,28,30,33,36,39,43,47,51,56,61,66,72,78,85,92,99,107,116,125,135,145,156,168,180,194,208,222,238,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM2_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,10,11,13,14,16,18,19,21,23,26,28,30,33,35,38,41,44,47,51,54,58,62,66,70,75,79,84,90,95,101,106,112,119,126,133,140,147,155,164,172,181,190,200,210,221,232,243,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM3_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7,9,11,13,15,18,20,23,25,28,31,34,37,40,44,47,51,54,58,62,66,70,75,79,84,89,94,99,104,110,115,121,127,134,140,147,154,161,168,176,183,191,200,208,217,226,235,245,255

#define DEFAULT_LEVEL       50
#define MAX_1x7135          50
#define MAX_Nx7135          100
#define HALFSPEED_LEVEL     15
#define QUARTERSPEED_LEVEL  6

// start at ~2000 lm after battery change, not ~150 lm (at Emisar's request)
//#define DEFAULT_LEVEL MAX_Nx7135

// go up to ~4000 lm
#define RAMP_SMOOTH_FLOOR 1
#define RAMP_SMOOTH_CEIL  117
// 20 36 52 68 84 [100] 117
#define RAMP_DISCRETE_FLOOR 20
#define RAMP_DISCRETE_CEIL  RAMP_SMOOTH_CEIL
#define RAMP_DISCRETE_STEPS 7

// safe limit ~20% power / max regulated
// 20 40 60 80 100
#define SIMPLE_UI_FLOOR  20
#define SIMPLE_UI_CEIL   MAX_Nx7135
#define SIMPLE_UI_STEPS  5

// only blink at max regulated level and ceiling
//#define BLINK_AT_RAMP_MIDDLE
//#define BLINK_AT_RAMP_MIDDLE_1 MAX_Nx7135
#define BLINK_AT_RAMP_CEIL
#ifdef BLINK_AT_RAMP_MIDDLE
#undef BLINK_AT_RAMP_MIDDLE
#endif

// stop panicking at about ~40% power or ~5000 lm
#define THERM_FASTER_LEVEL 125

// enable extra features
#define USE_SMOOTH_STEPS

// for compatibility with other models
#define USE_SOFT_FACTORY_RESET

// too big, turn off extra features
#undef USE_TACTICAL_MODE
#undef USE_SOS_MODE

