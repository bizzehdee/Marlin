/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
constexpr temp_entry_t temptable_1[] PROGMEM = {
{  267 ,  350 },
{  281 ,  345 },
{  296 ,  340 },
{  313 ,  335 },
{  330 ,  330 },
{  349 ,  325 },
{  369 ,  320 },
{  391 ,  315 },
{  415 ,  310 },
{  440 ,  305 },
{  467 ,  300 },
{  496 ,  295 },
{  528 ,  290 },
{  563 ,  285 },
{  600 ,  280 },
{  640 ,  275 },
{  684 ,  270 },
{  731 ,  265 },
{  782 ,  260 },
{  838 ,  255 },
{  899 ,  250 },
{  965 ,  245 },
{  1038 ,  240 },
{  1117 ,  235 },
{  1203 ,  230 },
{  1297 ,  225 },
{  1400 ,  220 },
{  1513 ,  215 },
{  1636 ,  210 },
{  1771 ,  205 },
{  1919 ,  200 },
{  2081 ,  195 },
{  2259 ,  190 },
{  2453 ,  185 },
{  2666 ,  180 },
{  2899 ,  175 },
{  3153 ,  170 },
{  3430 ,  165 },
{  3731 ,  160 },
{  4058 ,  155 },
{  4413 ,  150 },
{  4795 ,  145 },
{  5206 ,  140 },
{  5646 ,  135 },
{  6114 ,  130 },
{  6610 ,  125 },
{  7131 ,  120 },
{  7674 ,  115 },
{  8237 ,  110 },
{  8813 ,  105 },
{  9399 ,  100 },
{  9987 ,  95 },
{  10572 ,  90 },
{  11147 ,  85 },
{  11704 ,  80 },
{  12239 ,  75 },
{  12745 ,  70 },
{  13218 ,  65 },
{  13654 ,  60 },
{  14052 ,  55 },
{  14410 ,  50 },
{  14728 ,  45 },
{  15007 ,  40 },
{  15249 ,  35 },
{  15457 ,  30 },
{  15633 ,  25 },
{  15781 ,  20 },
{  15904 ,  15 },
{  16004 ,  10 },
{  16086 ,  5 },
{  16152 ,  0 }
};
