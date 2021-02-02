#pragma once
#include "Platform.h"
// Taken from glfw3.h

#ifdef VSL_PLATFORM_LINUX
    #define VSL_MOUSE_BUTTON_1         0
    #define VSL_MOUSE_BUTTON_2         1
    #define VSL_MOUSE_BUTTON_3         2
    #define VSL_MOUSE_BUTTON_4         3
    #define VSL_MOUSE_BUTTON_5         4
    #define VSL_MOUSE_BUTTON_6         5
    #define VSL_MOUSE_BUTTON_7         6
    #define VSL_MOUSE_BUTTON_8         7
    #define VSL_MOUSE_BUTTON_LAST      VSL_MOUSE_BUTTON_8
    #define VSL_MOUSE_BUTTON_LEFT      VSL_MOUSE_BUTTON_1
    #define VSL_MOUSE_BUTTON_RIGHT     VSL_MOUSE_BUTTON_2
    #define VSL_MOUSE_BUTTON_MIDDLE    VSL_MOUSE_BUTTON_3
#endif