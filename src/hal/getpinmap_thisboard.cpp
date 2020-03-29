/*

Module:  getconfig_thisboard.cpp

Function:
        Return a suitable LMIC config for this board.

Copyright & License:
        See accompanying LICENSE file.

Author:
        Terry Moore, MCCI       November 2018

*/

#include "../arduino_lmic_hal_boards.h"

namespace Arduino_LMIC {

const HalPinmap_t *GetPinmap_ThisBoard(void)
        {
/*
|| Adafruit BSPs are not consistent -- m0 express defs ARDUINO_SAMD_FEATHER_M0,
|| m0 defs ADAFRUIT_FEATHER_M0
*/
#if defined(ARDUINO_SAMD_FEATHER_M0) || defined(ADAFRUIT_FEATHER_M0)
do
#else
        #pragma message("Board not supported -- use an explicit pinmap")
        return nullptr;
#endif
        }

}; // namespace Arduino_LMIC

