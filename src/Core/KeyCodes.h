#pragma once

#include "Platform.h"
//Taken from glfw3.h

#ifdef VSL_PLATFORM_LINUX
    #define VSL_KEY_SPACE              32
    #define VSL_KEY_APOSTROPHE         39  /* ' */
    #define VSL_KEY_COMMA              44  /* , */
    #define VSL_KEY_MINUS              45  /* - */
    #define VSL_KEY_DASH               45  // For those who don't see "-" as a minus
    #define VSL_KEY_PERIOD             46  /* . */
    #define VSL_KEY_SLASH              47  /* / */
    #define VSL_KEY_0                  48
    #define VSL_KEY_1                  49
    #define VSL_KEY_2                  50
    #define VSL_KEY_3                  51
    #define VSL_KEY_4                  52
    #define VSL_KEY_5                  53
    #define VSL_KEY_6                  54
    #define VSL_KEY_7                  55
    #define VSL_KEY_8                  56
    #define VSL_KEY_9                  57
    #define VSL_KEY_SEMICOLON          59  /* ; */
    #define VSL_KEY_EQUAL              61  /* = */
    #define VSL_KEY_A                  65
    #define VSL_KEY_B                  66
    #define VSL_KEY_C                  67
    #define VSL_KEY_D                  68
    #define VSL_KEY_E                  69
    #define VSL_KEY_F                  70
    #define VSL_KEY_G                  71
    #define VSL_KEY_H                  72
    #define VSL_KEY_I                  73
    #define VSL_KEY_J                  74
    #define VSL_KEY_K                  75
    #define VSL_KEY_L                  76
    #define VSL_KEY_M                  77
    #define VSL_KEY_N                  78
    #define VSL_KEY_O                  79
    #define VSL_KEY_P                  80
    #define VSL_KEY_Q                  81
    #define VSL_KEY_R                  82
    #define VSL_KEY_S                  83
    #define VSL_KEY_T                  84
    #define VSL_KEY_U                  85
    #define VSL_KEY_V                  86
    #define VSL_KEY_W                  87
    #define VSL_KEY_X                  88
    #define VSL_KEY_Y                  89
    #define VSL_KEY_Z                  90
    #define VSL_KEY_LEFT_BRACKET       91  /* [ */
    #define VSL_KEY_BACKSLASH          92  /* \ */
    #define VSL_KEY_RIGHT_BRACKET      93  /* ] */
    #define VSL_KEY_GRAVE_ACCENT       96  /* ` */
    #define VSL_KEY_WORLD_1            161 /* non-US #1 */
    #define VSL_KEY_WORLD_2            162 /* non-US #2 */

/* Function keys */
    #define VSL_KEY_ESCAPE             256
    #define VSL_KEY_ENTER              257
    #define VSL_KEY_TAB                258
    #define VSL_KEY_BACKSPACE          259
    #define VSL_KEY_INSERT             260
    #define VSL_KEY_DELETE             261
    #define VSL_KEY_RIGHT              262
    #define VSL_KEY_LEFT               263
    #define VSL_KEY_DOWN               264
    #define VSL_KEY_UP                 265
    #define VSL_KEY_PAGE_UP            266
    #define VSL_KEY_PAGE_DOWN          267
    #define VSL_KEY_HOME               268
    #define VSL_KEY_END                269
    #define VSL_KEY_CAPS_LOCK          280
    #define VSL_KEY_SCROLL_LOCK        281
    #define VSL_KEY_NUM_LOCK           282
    #define VSL_KEY_PRINT_SCREEN       283
    #define VSL_KEY_PAUSE              284
    #define VSL_KEY_F1                 290
    #define VSL_KEY_F2                 291
    #define VSL_KEY_F3                 292
    #define VSL_KEY_F4                 293
    #define VSL_KEY_F5                 294
    #define VSL_KEY_F6                 295
    #define VSL_KEY_F7                 296
    #define VSL_KEY_F8                 297
    #define VSL_KEY_F9                 298
    #define VSL_KEY_F10                299
    #define VSL_KEY_F11                300
    #define VSL_KEY_F12                301
    #define VSL_KEY_F13                302
    #define VSL_KEY_F14                303
    #define VSL_KEY_F15                304
    #define VSL_KEY_F16                305
    #define VSL_KEY_F17                306
    #define VSL_KEY_F18                307
    #define VSL_KEY_F19                308
    #define VSL_KEY_F20                309
    #define VSL_KEY_F21                310
    #define VSL_KEY_F22                311
    #define VSL_KEY_F23                312
    #define VSL_KEY_F24                313
    #define VSL_KEY_F25                314
    #define VSL_KEY_KP_0               320
    #define VSL_KEY_KP_1               321
    #define VSL_KEY_KP_2               322
    #define VSL_KEY_KP_3               323
    #define VSL_KEY_KP_4               324
    #define VSL_KEY_KP_5               325
    #define VSL_KEY_KP_6               326
    #define VSL_KEY_KP_7               327
    #define VSL_KEY_KP_8               328
    #define VSL_KEY_KP_9               329
    #define VSL_KEY_KP_DECIMAL         330
    #define VSL_KEY_KP_DIVIDE          331
    #define VSL_KEY_KP_MULTIPLY        332
    #define VSL_KEY_KP_SUBTRACT        333
    #define VSL_KEY_KP_ADD             334
    #define VSL_KEY_KP_ENTER           335
    #define VSL_KEY_KP_EQUAL           336
    #define VSL_KEY_LEFT_SHIFT         340
    #define VSL_KEY_LEFT_CONTROL       341
    #define VSL_KEY_LEFT_ALT           342
    #define VSL_KEY_LEFT_SUPER         343
    #define VSL_KEY_RIGHT_SHIFT        344
    #define VSL_KEY_RIGHT_CONTROL      345
    #define VSL_KEY_RIGHT_ALT          346
    #define VSL_KEY_RIGHT_SUPER        347
    #define VSL_KEY_MENU               348
#endif