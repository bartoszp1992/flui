// Noctigon KR4 2-channel config options for flui
// Copyright (C) 2021-2023 Selene ToyKeeper
// Modified by bartoszp1992 in 2024: changed project name to flui(flashlight UI)
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

// (basically the same as Emisar generic 2-channel build,
// but switch on a different pin, and no lighted button)
#include "hank/noctigon-kr4/2ch/hwdef.h"
#include "hank/emisar-2ch/flui.h"

// the button doesn't light up
#undef USE_BUTTON_LED

