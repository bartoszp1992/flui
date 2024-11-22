// Emisar D1S config options for flui
// Copyright (C) 2018-2023 Selene ToyKeeper
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

// same as Emisar D4, mostly
#include "hank/emisar-d4/hwdef.h"
#include "hank/emisar-d4/flui.h"

// safe limit ~50% power
#undef SIMPLE_UI_CEIL
#define SIMPLE_UI_CEIL 120

// stop panicking at ~90% power or ~1200 lm (D1S has a good power-to-thermal-mass ratio)
#ifdef THERM_FASTER_LEVEL
#undef THERM_FASTER_LEVEL
#endif
#define THERM_FASTER_LEVEL 144  // throttle back faster when high

// too big, turn off extra features
//#undef USE_TACTICAL_MODE
