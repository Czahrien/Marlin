#pragma once

#include "../inc/MarlinConfigPre.h"
typedef struct {
    float photo_position[XYZ];
    bool park_enabled;
} photo_park_settings_t;

extern photo_park_settings_t pp_settings;