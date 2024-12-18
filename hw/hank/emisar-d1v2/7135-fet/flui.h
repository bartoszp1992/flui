// Emisar D1v2 (7135+FET) config options for flui
// Copyright (C) 2020-2023 Selene ToyKeeper
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

// same as Emisar D4v2, mostly
// (was only made for a short time, not many people have one)
#include "hank/emisar-d4v2/flui.h"

// some models use a simple button LED, others use RGB...
// ... so include support for both
#define USE_BUTTON_LED
// the aux LEDs are in the button, so use them while main LEDs are on
// (early short run had no button LEDs at all, later run uses linear+FET instead,
//  so it's unlikely that anyone needs this, but it doesn't hurt anything)
#define USE_AUX_RGB_LEDS
#define USE_AUX_RGB_LEDS_WHILE_ON  25
#define USE_INDICATOR_LED_WHILE_RAMPING

// safe limit ~50% power
#undef SIMPLE_UI_CEIL
#define SIMPLE_UI_CEIL 120

// stop panicking at ~75% power or ~1000 lm (D1 has a decent power-to-thermal-mass ratio)
#ifdef THERM_FASTER_LEVEL
#undef THERM_FASTER_LEVEL
#endif
#define THERM_FASTER_LEVEL (RAMP_SIZE*9/10)  // throttle back faster when high

