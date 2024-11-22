// lockout-mode.h: Lockout mode for flui.
// Copyright (C) 2017-2023 Selene ToyKeeper
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

// soft lockout
uint8_t lockout_state(Event event, uint16_t arg);

#ifdef USE_AUTOLOCK
#ifndef DEFAULT_AUTOLOCK_TIME
#define DEFAULT_AUTOLOCK_TIME 0 // autolock time in minutes, 0 = disabled
#endif
uint8_t autolock_config_state(Event event, uint16_t arg);
#endif

