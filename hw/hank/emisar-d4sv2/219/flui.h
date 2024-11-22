// Emisar D4Sv2-219 config options for flui
// Copyright (C) 2019-2023 Selene ToyKeeper
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "hank/emisar-d4sv2/flui.h"

// don't turn off first channel at turbo level
#undef PWM1_LEVELS
#undef PWM2_LEVELS
#define PWM1_LEVELS 1,1,2,2,3,3,4,5,5,6,7,8,9,10,11,12,13,17,18,19,20,21,22,24,26,28,30,33,35,38,41,44,47,50,54,57,61,65,69,74,79,84,89,94,100,106,113,119,126,134,142,150,158,167,176,186,196,207,218,230,242,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
#define PWM2_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,16,21,25,30,35,41,46,52,58,64,71,77,84,92,99,107,115,124,133,142,151,161,172,182,193,205,217,229,242,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
// 65% FET power
#undef PWM3_LEVELS
#define PWM3_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,4,6,7,8,10,11,12,13,15,17,18,20,21,23,25,27,29,31,33,35,38,39,42,44,47,49,52,54,57,60,63,66,69,73,76,79,83,86,90,94,98,102,106,110,115,119,124,129,134,139,144,149,155,160,166
