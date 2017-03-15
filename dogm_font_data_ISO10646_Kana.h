/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
  Fontname: ISO10646_Kana
  Copyright: A. Hardtung, public domain
  Capital A Height: 7, '1' Height: 7
  Calculated Max Values w= 5 h= 8 x= 2 y= 5 dx= 6 dy= 0 ascent= 8 len= 8
  Font Bounding box     w= 6 h= 9 x= 0 y=-2
  Calculated Min Values           x= 0 y=-1 dx= 0 dy= 0
  Pure Font   ascent = 7 descent=-1
  X Font      ascent = 7 descent=-1
  Max Font    ascent = 8 descent=-1
*/
    #include "U8glib.h"
const u8g_fntpgm_uint8_t ISO10646_Kana_5x7[2482] U8G_SECTION(".progmem.ISO10646_Kana_5x7") = {
  0, 6, 9, 0, 254, 7, 1, 145, 3, 32, 32, 255, 255, 8, 255, 7,
  255, 0, 0, 0, 6, 0, 0, 1, 7, 7, 6, 2, 0, 128, 128, 128,
  128, 128, 0, 128, 3, 2, 2, 6, 1, 5, 160, 160, 5, 7, 7, 6,
  0, 0, 80, 80, 248, 80, 248, 80, 80, 5, 7, 7, 6, 0, 0, 32,
  120, 160, 112, 40, 240, 32, 5, 7, 7, 6, 0, 0, 192, 200, 16, 32,
  64, 152, 24, 5, 7, 7, 6, 0, 0, 96, 144, 160, 64, 168, 144, 104,
  2, 3, 3, 6, 1, 4, 192, 64, 128, 3, 7, 7, 6, 1, 0, 32,
  64, 128, 128, 128, 64, 32, 3, 7, 7, 6, 1, 0, 128, 64, 32, 32,
  32, 64, 128, 5, 5, 5, 6, 0, 1, 32, 168, 112, 168, 32, 5, 5,
  5, 6, 0, 1, 32, 32, 248, 32, 32, 2, 3, 3, 6, 2, 255, 192,
  64, 128, 5, 1, 1, 6, 0, 3, 248, 2, 2, 2, 6, 2, 0, 192,
  192, 5, 5, 5, 6, 0, 1, 8, 16, 32, 64, 128, 5, 7, 7, 6,
  0, 0, 112, 136, 152, 168, 200, 136, 112, 3, 7, 7, 6, 1, 0, 64,
  192, 64, 64, 64, 64, 224, 5, 7, 7, 6, 0, 0, 112, 136, 8, 112,
  128, 128, 248, 5, 7, 7, 6, 0, 0, 248, 16, 32, 16, 8, 8, 240,
  5, 7, 7, 6, 0, 0, 16, 48, 80, 144, 248, 16, 16, 5, 7, 7,
  6, 0, 0, 248, 128, 240, 8, 8, 136, 112, 5, 7, 7, 6, 0, 0,
  48, 64, 128, 240, 136, 136, 112, 5, 7, 7, 6, 0, 0, 248, 8, 16,
  32, 32, 32, 32, 5, 7, 7, 6, 0, 0, 112, 136, 136, 112, 136, 136,
  112, 5, 7, 7, 6, 0, 0, 112, 136, 136, 120, 8, 16, 96, 2, 5,
  5, 6, 2, 0, 192, 192, 0, 192, 192, 2, 6, 6, 6, 2, 255, 192,
  192, 0, 192, 64, 128, 4, 7, 7, 6, 0, 0, 16, 32, 64, 128, 64,
  32, 16, 5, 3, 3, 6, 0, 2, 248, 0, 248, 4, 7, 7, 6, 1,
  0, 128, 64, 32, 16, 32, 64, 128, 5, 7, 7, 6, 0, 0, 112, 136,
  8, 16, 32, 0, 32, 5, 6, 6, 6, 0, 0, 112, 136, 8, 104, 168,
  112, 5, 7, 7, 6, 0, 0, 112, 136, 136, 248, 136, 136, 136, 5, 7,
  7, 6, 0, 0, 240, 136, 136, 240, 136, 136, 240, 5, 7, 7, 6, 0,
  0, 112, 136, 128, 128, 128, 136, 112, 5, 7, 7, 6, 0, 0, 224, 144,
  136, 136, 136, 144, 224, 5, 7, 7, 6, 0, 0, 248, 128, 128, 240, 128,
  128, 248, 5, 7, 7, 6, 0, 0, 248, 128, 128, 240, 128, 128, 128, 5,
  7, 7, 6, 0, 0, 112, 136, 128, 184, 136, 136, 112, 5, 7, 7, 6,
  0, 0, 136, 136, 136, 248, 136, 136, 136, 1, 7, 7, 6, 2, 0, 128,
  128, 128, 128, 128, 128, 128, 5, 7, 7, 6, 0, 0, 56, 16, 16, 16,
  16, 144, 96, 5, 7, 7, 6, 0, 0, 136, 144, 160, 192, 160, 144, 136,
  5, 7, 7, 6, 0, 0, 128, 128, 128, 128, 128, 128, 248, 5, 7, 7,
  6, 0, 0, 136, 216, 168, 136, 136, 136, 136, 5, 7, 7, 6, 0, 0,
  136, 136, 200, 168, 152, 136, 136, 5, 7, 7, 6, 0, 0, 112, 136, 136,
  136, 136, 136, 112, 5, 7, 7, 6, 0, 0, 240, 136, 136, 240, 128, 128,
  128, 5, 7, 7, 6, 0, 0, 112, 136, 136, 136, 168, 144, 104, 5, 7,
  7, 6, 0, 0, 240, 136, 136, 240, 160, 144, 136, 5, 7, 7, 6, 0,
  0, 120, 128, 128, 112, 8, 8, 240, 5, 7, 7, 6, 0, 0, 248, 32,
  32, 32, 32, 32, 32, 5, 7, 7, 6, 0, 0, 136, 136, 136, 136, 136,
  136, 112, 5, 7, 7, 6, 0, 0, 136, 136, 136, 136, 136, 80, 32, 5,
  7, 7, 6, 0, 0, 136, 136, 136, 136, 136, 168, 80, 5, 7, 7, 6,
  0, 0, 136, 136, 80, 32, 80, 136, 136, 5, 7, 7, 6, 0, 0, 136,
  136, 136, 80, 32, 32, 32, 5, 7, 7, 6, 0, 0, 248, 8, 16, 32,
  64, 128, 248, 3, 7, 7, 6, 1, 0, 224, 128, 128, 128, 128, 128, 224,
  5, 5, 5, 6, 0, 1, 128, 64, 32, 16, 8, 3, 7, 7, 6, 1,
  0, 224, 32, 32, 32, 32, 32, 224, 5, 3, 3, 6, 0, 4, 32, 80,
  136, 5, 1, 1, 6, 0, 0, 248, 2, 2, 2, 6, 2, 5, 128, 64,
  5, 5, 5, 6, 0, 0, 112, 8, 120, 136, 120, 5, 7, 7, 6, 0,
  0, 128, 128, 176, 200, 136, 136, 240, 5, 5, 5, 6, 0, 0, 112, 128,
  128, 136, 112, 5, 7, 7, 6, 0, 0, 8, 8, 104, 152, 136, 136, 120,
  5, 5, 5, 6, 0, 0, 112, 136, 248, 128, 112, 5, 7, 7, 6, 0,
  0, 48, 72, 224, 64, 64, 64, 64, 5, 6, 6, 6, 0, 255, 112, 136,
  136, 120, 8, 112, 5, 7, 7, 6, 0, 0, 128, 128, 176, 200, 136, 136,
  136, 1, 7, 7, 6, 2, 0, 128, 0, 128, 128, 128, 128, 128, 3, 8,
  8, 6, 1, 255, 32, 0, 32, 32, 32, 32, 160, 64, 4, 7, 7, 6,
  0, 0, 128, 128, 144, 160, 192, 160, 144, 3, 7, 7, 6, 1, 0, 192,
  64, 64, 64, 64, 64, 224, 5, 5, 5, 6, 0, 0, 208, 168, 168, 168,
  168, 5, 5, 5, 6, 0, 0, 176, 200, 136, 136, 136, 5, 5, 5, 6,
  0, 0, 112, 136, 136, 136, 112, 5, 6, 6, 6, 0, 255, 240, 136, 136,
  240, 128, 128, 5, 6, 6, 6, 0, 255, 120, 136, 136, 120, 8, 8, 5,
  5, 5, 6, 0, 0, 176, 200, 128, 128, 128, 5, 5, 5, 6, 0, 0,
  112, 128, 112, 8, 240, 5, 7, 7, 6, 0, 0, 64, 64, 224, 64, 64,
  72, 48, 5, 5, 5, 6, 0, 0, 136, 136, 136, 152, 104, 5, 5, 5,
  6, 0, 0, 136, 136, 136, 80, 32, 5, 5, 5, 6, 0, 0, 136, 136,
  168, 168, 80, 5, 5, 5, 6, 0, 0, 136, 80, 32, 80, 136, 5, 6,
  6, 6, 0, 255, 136, 136, 136, 120, 8, 112, 5, 5, 5, 6, 0, 0,
  248, 16, 32, 64, 248, 3, 7, 7, 6, 1, 0, 32, 64, 64, 128, 64,
  64, 32, 1, 7, 7, 6, 2, 0, 128, 128, 128, 128, 128, 128, 128, 3,
  7, 7, 6, 1, 0, 128, 64, 64, 32, 64, 64, 128, 5, 2, 2, 6,
  0, 3, 104, 144, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0,
  0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6,
  0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
  0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0,
  0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6,
  0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
  0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0,
  0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6,
  0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
  0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0,
  0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6,
  0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
  0, 6, 0, 0, 0, 0, 0, 6, 0, 0, 5, 3, 3, 6, 0, 1,
  248, 0, 248, 4, 4, 4, 6, 0, 0, 240, 16, 96, 64, 5, 6, 6,
  6, 0, 0, 248, 8, 40, 48, 32, 64, 3, 4, 4, 6, 1, 0, 32,
  64, 192, 64, 4, 6, 6, 6, 0, 0, 16, 32, 96, 160, 32, 32, 4,
  4, 4, 6, 0, 0, 32, 240, 144, 32, 5, 6, 6, 6, 0, 0, 32,
  248, 136, 8, 16, 32, 3, 4, 4, 6, 1, 0, 224, 64, 64, 224, 5,
  5, 5, 6, 0, 0, 248, 32, 32, 32, 248, 4, 4, 4, 6, 0, 0,
  32, 240, 96, 160, 5, 6, 6, 6, 0, 0, 16, 248, 48, 80, 144, 16,
  5, 6, 6, 6, 0, 0, 64, 248, 72, 72, 72, 144, 5, 8, 8, 6,
  0, 0, 40, 0, 64, 248, 72, 72, 72, 144, 5, 6, 6, 6, 0, 0,
  32, 248, 32, 248, 32, 32, 5, 8, 8, 6, 0, 0, 40, 0, 32, 248,
  32, 248, 32, 32, 4, 5, 5, 6, 0, 0, 112, 144, 16, 32, 192, 5,
  7, 7, 6, 0, 0, 40, 0, 112, 144, 16, 32, 192, 5, 6, 6, 6,
  0, 0, 64, 120, 144, 16, 16, 32, 5, 8, 8, 6, 0, 0, 40, 0,
  64, 120, 144, 16, 16, 32, 5, 5, 5, 6, 0, 0, 248, 8, 8, 8,
  248, 5, 7, 7, 6, 0, 0, 40, 0, 248, 8, 8, 8, 248, 5, 6,
  6, 6, 0, 0, 80, 248, 80, 16, 32, 64, 5, 8, 8, 6, 0, 0,
  40, 0, 80, 248, 80, 16, 32, 64, 5, 5, 5, 6, 0, 0, 192, 8,
  200, 16, 224, 5, 7, 7, 6, 0, 0, 40, 0, 192, 8, 200, 16, 224,
  5, 5, 5, 6, 0, 0, 248, 16, 32, 80, 136, 5, 7, 7, 6, 0,
  0, 40, 0, 248, 16, 32, 80, 136, 5, 6, 6, 6, 0, 0, 64, 248,
  72, 80, 64, 56, 5, 8, 8, 6, 0, 0, 40, 0, 64, 248, 72, 80,
  64, 56, 5, 5, 5, 6, 0, 0, 136, 136, 72, 16, 96, 5, 7, 7,
  6, 0, 0, 40, 0, 136, 136, 72, 16, 96, 5, 5, 5, 6, 0, 0,
  120, 72, 168, 16, 96, 5, 7, 7, 6, 0, 0, 40, 0, 120, 72, 168,
  16, 96, 5, 6, 6, 6, 0, 0, 16, 224, 32, 248, 32, 64, 5, 8,
  8, 6, 0, 0, 40, 0, 16, 224, 32, 248, 32, 64, 5, 4, 4, 6,
  0, 0, 168, 168, 8, 48, 5, 5, 5, 6, 0, 0, 168, 168, 8, 16,
  32, 5, 7, 7, 6, 0, 0, 40, 0, 168, 168, 8, 16, 32, 5, 6,
  6, 6, 0, 0, 112, 0, 248, 32, 32, 64, 5, 8, 8, 6, 0, 0,
  40, 0, 112, 0, 248, 32, 32, 64, 3, 6, 6, 6, 1, 0, 128, 128,
  192, 160, 128, 128, 4, 8, 8, 6, 1, 0, 80, 0, 128, 128, 192, 160,
  128, 128, 5, 6, 6, 6, 0, 0, 32, 248, 32, 32, 64, 128, 5, 5,
  5, 6, 0, 0, 112, 0, 0, 0, 248, 5, 5, 5, 6, 0, 0, 248,
  8, 80, 32, 208, 5, 6, 6, 6, 0, 0, 32, 248, 16, 32, 112, 168,
  3, 6, 6, 6, 1, 0, 32, 32, 32, 32, 64, 128, 5, 5, 5, 6,
  0, 0, 16, 136, 136, 136, 136, 5, 7, 7, 6, 0, 0, 40, 0, 16,
  136, 136, 136, 136, 5, 8, 8, 6, 0, 0, 24, 24, 0, 16, 136, 136,
  136, 136, 5, 6, 6, 6, 0, 0, 128, 128, 248, 128, 128, 120, 5, 7,
  7, 6, 0, 0, 40, 128, 128, 248, 128, 128, 120, 5, 7, 7, 6, 0,
  0, 24, 152, 128, 248, 128, 128, 120, 5, 5, 5, 6, 0, 0, 248, 8,
  8, 16, 96, 5, 7, 7, 6, 0, 0, 40, 0, 248, 8, 8, 16, 96,
  5, 8, 8, 6, 0, 0, 24, 24, 0, 248, 8, 8, 16, 96, 5, 4,
  4, 6, 0, 1, 64, 160, 16, 8, 5, 6, 6, 6, 0, 1, 40, 0,
  64, 160, 16, 8, 5, 6, 6, 6, 0, 1, 24, 24, 64, 160, 16, 8,
  5, 6, 6, 6, 0, 0, 32, 248, 32, 168, 168, 32, 5, 8, 8, 6,
  0, 0, 40, 0, 32, 248, 32, 168, 168, 32, 5, 8, 8, 6, 0, 0,
  24, 24, 32, 248, 32, 168, 168, 32, 5, 5, 5, 6, 0, 0, 248, 8,
  80, 32, 16, 4, 5, 5, 6, 1, 0, 224, 0, 224, 0, 240, 5, 5,
  5, 6, 0, 0, 32, 64, 136, 248, 8, 5, 5, 5, 6, 0, 0, 8,
  40, 16, 40, 192, 5, 5, 5, 6, 0, 0, 248, 64, 248, 64, 56, 5,
  4, 4, 6, 0, 0, 64, 248, 80, 64, 5, 6, 6, 6, 0, 0, 64,
  248, 72, 80, 64, 64, 4, 4, 4, 6, 0, 0, 96, 32, 32, 240, 5,
  5, 5, 6, 0, 0, 112, 16, 16, 16, 248, 4, 5, 5, 6, 0, 0,
  240, 16, 240, 16, 240, 5, 5, 5, 6, 0, 0, 248, 8, 248, 8, 248,
  5, 6, 6, 6, 0, 0, 112, 0, 248, 8, 16, 32, 4, 6, 6, 6,
  0, 0, 144, 144, 144, 144, 16, 32, 5, 5, 5, 6, 0, 0, 32, 160,
  168, 168, 176, 4, 5, 5, 6, 0, 0, 128, 128, 144, 160, 192, 5, 5,
  5, 6, 0, 0, 248, 136, 136, 136, 248, 4, 4, 4, 6, 0, 0, 240,
  144, 16, 32, 5, 5, 5, 6, 0, 0, 248, 136, 8, 16, 32, 5, 6,
  6, 6, 0, 0, 16, 248, 80, 80, 248, 16, 5, 5, 5, 6, 0, 0,
  248, 8, 48, 32, 248, 5, 5, 5, 6, 0, 0, 248, 8, 248, 8, 48,
  5, 5, 5, 6, 0, 0, 192, 8, 8, 16, 224, 5, 8, 8, 6, 0,
  0, 40, 0, 32, 248, 136, 8, 16, 32, 4, 4, 4, 6, 0, 0, 64,
  240, 80, 160, 4, 4, 4, 6, 0, 0, 64, 240, 32, 64, 5, 7, 7,
  6, 0, 0, 40, 0, 248, 136, 8, 16, 96, 5, 8, 8, 6, 0, 0,
  40, 0, 16, 248, 80, 80, 248, 16, 5, 7, 7, 6, 0, 0, 40, 0,
  248, 8, 48, 32, 248, 5, 7, 7, 6, 0, 0, 40, 0, 248, 8, 248,
  8, 48, 2, 2, 2, 6, 2, 2, 192, 192, 5, 1, 1, 6, 0, 2,
  248, 5, 4, 4, 6, 0, 1, 128, 96, 16, 8, 5, 5, 5, 6, 0,
  1, 40, 128, 96, 16, 8, 5, 6, 6, 6, 0, 0, 248, 8, 8, 8,
  8, 8
};
