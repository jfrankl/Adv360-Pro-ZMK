// config/mouse_speed.h
#pragma once
#include <dt-bindings/zmk/pointing.h>

// ---------- Custom Mouse Speed Macros ----------
#define MOVE_LEFT_SLOW      MOVE_X(-20)
#define MOVE_RIGHT_SLOW     MOVE_X(20)
#define MOVE_UP_SLOW        MOVE_Y(-20)
#define MOVE_DOWN_SLOW      MOVE_Y(20)

#define MOVE_LEFT_FAST      MOVE_X(-200)
#define MOVE_RIGHT_FAST     MOVE_X(200)
#define MOVE_UP_FAST        MOVE_Y(-200)
#define MOVE_DOWN_FAST      MOVE_Y(200)
// ----------------------------------------------
