/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

#define FLOW_COUNT 30
#define FLOW_LAYERS_COUNT 1

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 44

#ifdef RGB_MATRIX_DEFAULT_VAL
    #undef RGB_MATRIX_DEFAULT_VAL
#endif
#define RGB_MATRIX_DEFAULT_VAL 10

#ifdef TAPPING_TERM
    #undef TAPPING_TERM
#endif
#define TAPPING_TERM 200