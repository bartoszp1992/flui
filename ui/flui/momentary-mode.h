// momentary-mode.h: Momentary mode for flui
// Copyright (C) 2017-2023 Selene ToyKeeper
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

// momentary / signalling mode
uint8_t momentary_state(Event event, uint16_t arg);
uint8_t momentary_mode = 0;  // 0 = ramping, 1 = strobe
uint8_t momentary_active = 0;  // boolean, true if active *right now*

