// Sofirn SC21 Pro - same setup as a Wurkkos TS10, but with the aux indicator on while ramping
// Copyright (C) 2022-2023 (FIXME)
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "wurkkos/ts10/flui.h"

// turn on the aux LED while main LED is on
#ifndef USE_INDICATOR_LED_WHILE_RAMPING
#define USE_INDICATOR_LED_WHILE_RAMPING
#endif
