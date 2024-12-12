/* Copyright 2023 ~ 2024 @ Lemokey (https://www.lemokey.com)
 *
 * This program is free software : you can redistribute it and /or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.If not, see < http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

// clang-format off
#ifdef RGB_MATRIX_ENABLE
const snled27351_led_t g_snled27351_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to SNLED27351 manual for these locations
 *   driver
 *   |  R location
 *   |  |        G location
 *   |  |        |       B location
 *   |  |        |       | */
    {0, G_2,     I_2,    H_2},
    {0, G_3,     I_3,    H_3},
    {0, G_4,     I_4,    H_4},
    {0, G_5,     I_5,    H_5},
    {0, G_6,     I_6,    H_6},
    {0, G_7,     I_7,    H_7},
    {0, G_8,     I_8,    H_8},
    {0, G_9,     I_9,    H_9},
    {0, G_10,    I_10,   H_10},
    {0, G_11,    I_11,   H_11},
    {0, G_12,    I_12,   H_12},
    {0, G_13,    I_13,   H_13},
    {0, G_14,    I_14,   H_14},
    {0, G_15,    I_15,   H_15},
    {0, G_16,    I_16,   H_16},
    {1, A_4,     C_4,    B_4},

    {0, A_1,     C_1,    B_1},
    {0, A_2,     C_2,    B_2},
    {0, A_3,     C_3,    B_3},
    {0, A_4,     C_4,    B_4},
    {0, A_5,     C_5,    B_5},
    {0, A_6,     C_6,    B_6},
    {0, A_7,     C_7,    B_7},
    {0, A_8,     C_8,    B_8},
    {0, A_9,     C_9,    B_9},
    {0, A_10,    C_10,   B_10},
    {0, A_11,    C_11,   B_11},
    {0, A_12,    C_12,   B_12},
    {0, A_13,    C_13,   B_13},
    {0, A_14,    C_14,   B_14},
    {0, A_15,    C_15,   B_15},
    {0, A_16,    C_16,   B_16},
    {1, A_2,     C_2,    B_2},

    {1, D_13,    F_13,   E_13},
    {0, D_1,     F_1,    E_1},
    {0, D_2,     F_2,    E_2},
    {0, D_3,     F_3,    E_3},
    {0, D_4,     F_4,    E_4},
    {0, D_5,     F_5,    E_5},
    {0, D_6,     F_6,    E_6},
    {0, D_7,     F_7,    E_7},
    {0, D_8,     F_8,    E_8},
    {0, D_9,     F_9,    E_9},
    {0, D_10,    F_10,   E_10},
    {0, D_11,    F_11,   E_11},
    {0, D_12,    F_12,   E_12},
    {0, D_13,    F_13,   E_13},
    {0, D_14,    F_14,   E_14},
    {0, D_15,    F_15,   E_15},
    {0, D_16,    F_16,   E_16},
    {1, A_1,     C_1,    B_1},

    {1, D_12,    F_12,   E_12},
    {1, A_16,    C_16,   B_16},
    {1, A_15,    C_15,   B_15},
    {1, A_14,    C_14,   B_14},
    {1, A_13,    C_13,   B_13},
    {1, A_12,    C_12,   B_12},
    {1, A_11,    C_11,   B_11},
    {1, A_10,    C_10,   B_10},
    {1, A_9,     C_9,    B_9},
    {1, A_8,     C_8,    B_8},
    {1, A_7,     C_7,    B_7},
    {1, A_6,     C_6,    B_6},
    {1, A_5,     C_5,    B_5},
    {1, A_3,     C_3,    B_3},

    {1, D_11,    F_11,   E_11},
    {1, G_16,    I_16,   H_16},
    {1, G_15,    I_15,   H_15},
    {1, G_14,    I_14,   H_14},
    {1, G_13,    I_13,   H_13},
    {1, G_12,    I_12,   H_12},
    {1, G_11,    I_11,   H_11},
    {1, G_10,    I_10,   H_10},
    {1, G_9,     I_9,    H_9},
    {1, G_8,     I_8,    H_8},
    {1, G_7,     I_7,    H_7},
    {1, G_6,     I_6,    H_6},
    {1, G_5,     I_5,    H_5},
    {1, G_3,     I_3,    H_3},
    {1, G_1,     I_1,    H_1},

    {1, D_9,     F_9,    E_9},
    {1, D_16,    F_16,   E_16},
    {1, D_15,    F_15,   E_15},
    {1, D_14,    F_14,   E_14},
    {1, D_10,    F_10,   E_10},
    {1, D_6,     F_6,    E_6},
    {1, D_5,     F_5,    E_5},
    {1, D_4,     F_4,    E_4},
    {1, D_3,     F_3,    E_3},
    {1, D_2,     F_2,    E_2},
    {1, D_1,     F_1,    E_1},
    {1, G_2,     I_2,    H_2}
};

led_config_t g_led_config = {
    {
        { NO_LED, NO_LED, 0,      1,      2,      3,      4,      5,      6,      7,      8,      9,      10,     11,     12,     13,     14,     15,     },
        { NO_LED, 16,     17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     29,     30,     31,     32,     },
        { 33,     34,     35,     36,     37,     38,     39,     40,     41,     42,     43,     44,     45,     46,     47,     48,     49,     50,     },
        { 51,     52,     53,     54,     55,     56,     57,     58,     59,     60,     61,     62,     63,     NO_LED, 64,     NO_LED, NO_LED, NO_LED, },
        { 65,     66,     67,     68,     69,     70,     71,     72,     73,     74,     75,     76,     77,     NO_LED, 78,     NO_LED, 79,     NO_LED, },
        { 80,     81,     82,     83,     NO_LED, NO_LED, NO_LED, 84,     NO_LED, NO_LED, NO_LED, 85,     86,     87,     88,     89,     90,     91,     }
    },
    {
                         {21, 0}, {44, 0}, {56, 0}, {68, 0}, {79, 0}, { 97,  0}, {109,  0}, {120,  0}, {132,  0}, {150,  0}, {162,  0}, {173,  0}, {185,  0}, {200,  0}, {212,  0}, {224,  0},
                {21,15}, {32,15}, {44,15}, {56,15}, {68,15}, {79,15}, { 91, 15}, {103, 15}, {115, 15}, {126, 15}, {138, 15}, {150, 15}, {162, 15}, {179, 15}, {200, 15}, {212, 15}, {224, 15},
        {0,27}, {24,27}, {38,27}, {50,27}, {62,27}, {73,27}, {85,27}, { 97, 27}, {109, 27}, {121, 27}, {132, 27}, {144, 27}, {156, 27}, {168, 27}, {182, 27}, {200, 27}, {212, 27}, {224, 27},
        {0,39}, {25,39}, {41,39}, {53,39}, {65,39}, {76,39}, {88,39}, {100, 39}, {112, 39}, {123, 39}, {135, 39}, {147, 39}, {159, 39},            {178, 39},
        {0,51}, {22,51}, {35,51}, {47,51}, {59,51}, {71,51}, {82,51}, { 94, 51}, {106, 51}, {118, 51}, {129, 51}, {141, 51}, {153, 51},            {175, 51},            {212, 51},
        {0,64}, {22,64}, {37,64}, {51,64},                            { 96, 64},                                  {140, 64}, {154, 64}, {169, 64}, {184, 64}, {200, 64}, {212, 64}, {224, 64}
    },
    {
                  4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
             4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,        4,
        4,   4,   4,   4,                  4,                  4,   4,   4,   4,   4,   4,   4

    }
};
#endif
