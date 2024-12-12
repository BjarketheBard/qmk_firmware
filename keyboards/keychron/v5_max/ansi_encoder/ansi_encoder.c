/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

// clang-format off

#ifdef RGB_MATRIX_ENABLE
const snled27351_led_t g_snled27351_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to SNLED27351 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, G_1,    I_1,    H_1},
    {0, G_3,    I_3,    H_3},
    {0, G_4,    I_4,    H_4},
    {0, G_5,    I_5,    H_5},
    {0, G_6,    I_6,    H_6},
    {0, G_8,    I_8,    H_8},
    {0, G_9,    I_9,    H_9},
    {0, G_10,   I_10,   H_10},
    {0, G_11,   I_11,   H_11},
    {0, G_12,   I_12,   H_12},
    {0, G_13,   I_13,   H_13},
    {0, G_14,   I_14,   H_14},
    {0, G_15,   I_15,   H_15},
    {0, G_16,   I_16,   H_16},
    {0, J_16,   L_16,   K_16},
    {0, J_15,   L_15,   K_15},

    {0, A_1,    C_1,    B_1},
    {0, A_2,    C_2,    B_2},
    {0, A_3,    C_3,    B_3},
    {0, A_4,    C_4,    B_4},
    {0, A_5,    C_5,    B_5},
    {0, A_6,    C_6,    B_6},
    {0, A_7,    C_7,    B_7},
    {0, A_8,    C_8,    B_8},
    {0, A_9,    C_9,    B_9},
    {0, A_10,   C_10,   B_10},
    {0, A_11,   C_11,   B_11},
    {0, A_12,   C_12,   B_12},
    {0, A_13,   C_13,   B_13},
    {0, A_14,   C_14,   B_14},
    {0, A_16,   C_16,   B_16},
    {0, J_13,   L_13,   K_13},
    {0, J_12,   L_12,   K_12},
    {0, J_11,   L_11,   K_11},

    {0, D_1,    F_1,    E_1},
    {0, D_2,    F_2,    E_2},
    {0, D_3,    F_3,    E_3},
    {0, D_4,    F_4,    E_4},
    {0, D_5,    F_5,    E_5},
    {0, D_6,    F_6,    E_6},
    {0, D_7,    F_7,    E_7},
    {0, D_8,    F_8,    E_8},
    {0, D_9,    F_9,    E_9},
    {0, D_10,   F_10,   E_10},
    {0, D_11,   F_11,   E_11},
    {0, D_12,   F_12,   E_12},
    {0, D_13,   F_13,   E_13},
    {0, D_14,   F_14,   E_14},
    {0, D_16,   F_16,   E_16},
    {0, J_10,   L_10,   K_10},
    {0, J_9,    L_9,    K_9},

    {1, A_16,   C_16,   B_16},
    {1, A_15,   C_15,   B_15},
    {1, A_14,   C_14,   B_14},
    {1, A_13,   C_13,   B_13},
    {1, A_12,   C_12,   B_12},
    {1, A_11,   C_11,   B_11},
    {1, A_10,   C_10,   B_10},
    {1, A_9,    C_9,    B_9},
    {1, A_8,    C_8,    B_8},
    {1, A_7,    C_7,    B_7},
    {1, A_6,    C_6,    B_6},
    {1, A_5,    C_5,    B_5},
    {1, A_4,    C_4,    B_4},
    {1, A_1,    C_1,    B_1},
    {1, J_6,    L_6,    K_6},
    {1, J_7,    L_7,    K_7},
    {1, J_8,    L_8,    K_8},

    {1, G_16,   I_16,   H_16},
    {1, G_14,   I_14,   H_14},
    {1, G_13,   I_13,   H_13},
    {1, G_12,   I_12,   H_12},
    {1, G_11,   I_11,   H_11},
    {1, G_10,   I_10,   H_10},
    {1, G_9,    I_9,    H_9},
    {1, G_8,    I_8,    H_8},
    {1, G_7,    I_7,    H_7},
    {1, G_6,    I_6,    H_6},
    {1, G_5,    I_5,    H_5},
    {1, G_4,    I_4,    H_4},
    {1, G_2,    I_2,    H_2},
    {1, G_1,    I_1,    H_1},
    {1, J_3,    L_3,    K_3},
    {1, J_4,    L_4,    K_4},
    {1, J_5,    L_5,    K_5},

    {1, D_16,   F_16,   E_16},
    {1, D_15,   F_15,   E_15},
    {1, D_14,   F_14,   E_14},
    {1, D_10,   F_10,   E_10},
    {1, D_6,    F_6,    E_6},
    {1, D_5,    F_5,    E_5},
    {1, D_4,    F_4,    E_4},
    {1, D_3,    F_3,    E_3},
    {1, D_2,    F_2,    E_2},
    {1, D_1,    F_1,    E_1},
    {1, J_1,    L_1,    K_1},
    {1, J_2,    L_2,    K_2},
};

#define __ NO_LED

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {  0, __, 1,  2,  3,  4,  __, 5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, __ },
        { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, __, 30, 31, 32, 33 },
        { 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, __, 48, 49, 50, __ },
        { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, __, __, 64, 65, 66, 67 },
        { 68, __, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, __, 80, 81, 82, 83, 84 },
        { 85, 86, 87, __, __, __, 88, __, __, __, 89, 90, 91, 92, 93, 94, 95, 96, __ }
    },
    {
        // LED Index to Physical Position
        {0,0},           {24,0},  {36,0},  {48,0},  {60,0},           {78,0},  {90,0},   {102,0},  {106,0},  {133,0},  {145,0},  {157,0},  {169,0},  {185,0},  {195,0},  {207,0},
        {0,15}, {12,15}, {24,15}, {36,15}, {48,15}, {60,15}, {72,15}, {84,15}, {97,15},  {109,15}, {121,15}, {133,15}, {145,15}, {163,15},           {188,15}, {200,15}, {212,15}, {224,15},
        {3,26}, {18,26}, {30,26}, {42,26}, {54,26}, {66,26}, {78,26}, {91,26}, {103,26}, {115,26}, {127,26}, {139,26}, {151,26}, {166,26},           {188,26}, {200,26}, {212,26},
        {5,38}, {21,38}, {33,38}, {45,38}, {57,38}, {69,38}, {81,38}, {94,38}, {106,38}, {118,38}, {130,38}, {142,38},           {161,38},           {188,38}, {200,38}, {212,38}, {224,32},
        {8,49},          {27,49}, {39,49}, {51,49}, {63,49}, {75,49}, {88,49}, {100,49}, {112,49}, {124,49}, {136,49},           {152,49}, {172,52}, {188,49}, {200,49}, {212,49}, {224,55},
        {1,61}, {17,61}, {32,61},                            {77,61},                              {121,61}, {133,61}, {145,61}, {160,64}, {172,64}, {184,64}, {200,61}, {212,61},
    },
    {
        // RGB LED Index to Flag
        1,    1, 1, 1, 1,    1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    8, 4, 4, 4,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4, 4,
        8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,       4, 4, 4, 4,
        1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    1, 4, 4, 4, 4,
        1, 1, 1,          1,          1, 1, 1, 1, 1, 1, 1, 1
    }
};
#endif
