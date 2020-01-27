/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y      8
#define STATUS_LOGO_WIDTH 40

const unsigned char status_logo_bmp[] PROGMEM = {
  B11111111,B11110000,B01111111,B11111000,B00000000,
  B11111111,B11111000,B11111111,B11111110,B00000000,
  B11111111,B11111000,B11111111,B11111111,B00000000,
  B11111111,B11111101,B11111111,B10011111,B00000000,
  B00000000,B11111111,B11110111,B10001111,B10000000,
  B00000000,B11111111,B11110111,B10001111,B10000000,
  B00000000,B11111111,B11110111,B10001111,B00000000,
  B00000000,B11111111,B11110111,B10011111,B00000000,
  B00000000,B11110110,B11110111,B11111111,B11111111,
  B00000000,B11110110,B11110111,B11111111,B11111111,
  B00000000,B11110110,B11110111,B11111111,B11111111
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
