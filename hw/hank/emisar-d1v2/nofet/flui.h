// Emisar D1v2 (linear only, no DDFET) config options for flui
// (2022 re-issue / update of old D1)
// Copyright (C) 2022-2023 Selene ToyKeeper
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

// similar to a Noctigon KR4, sort of
#include "hank/noctigon-kr4/nofet/flui.h"

// some models use a simple button LED, others use RGB...
// ... so include support for both
#define USE_BUTTON_LED
// the aux LEDs are in the button, so use them while main LEDs are on
#define USE_AUX_RGB_LEDS
#define USE_AUX_RGB_LEDS_WHILE_ON  25
#define USE_INDICATOR_LED_WHILE_RAMPING

// safe limit: same as regular ramp
#undef SIMPLE_UI_CEIL
#define SIMPLE_UI_CEIL RAMP_SMOOTH_CEIL

