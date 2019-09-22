#include "../inc/MarlinConfig.h"
#include "camera_park.h"

#if ENABLED(PHOTO_GCODE) && defined(PHOTO_POSITION)
    photo_park_settings_t pp_settings = {
        .photo_position = PHOTO_POSITION,
        .park_enabled = true
    };
#endif