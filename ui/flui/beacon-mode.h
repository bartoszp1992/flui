// beacon-mode.h: Beacon mode for flui.
// Copyright (C) 2017-2023 Selene ToyKeeper
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

// beacon mode
uint8_t beacon_state(Event event, uint16_t arg);
inline void beacon_mode_iter();

