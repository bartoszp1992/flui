// Wurkkos config options for flui
// Copyright (C) 2023 Selene ToyKeeper
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

// allow Aux Config and Strobe Modes in Simple UI
#define USE_EXTENDED_SIMPLE_UI

// Allow 3C in Simple UI for switching between smooth and stepped ramping
#define USE_SIMPLE_UI_RAMPING_TOGGLE

// enable 2 click turbo (flashlight firmware 1 style)
#define DEFAULT_2C_STYLE 1

// enable SOS in the blinkies group
#define USE_SOS_MODE
#define USE_SOS_MODE_IN_BLINKY_GROUP

// enable factory reset on 13H without loosening tailcap
// only really needed on TS10, but doesn't hurt on other models
#define USE_SOFT_FACTORY_RESET

// higher temperature limit because attiny1616 is more accurate
#undef DEFAULT_THERM_CEIL
#define DEFAULT_THERM_CEIL 50

