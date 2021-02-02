#pragma once

#ifdef _WIN32

    #ifdef _WIN64
        #define VSL_PLATFORM_WIN64
    else
        #define VSL_PLATFORM_WIN32
    #endif
#elif defined (__APPLE__) || defined(__MACH__)
    #error "iOS/MAC is not yet supported! Stop!"
#elif defined(__linux__)
    #define VSL_PLATFORM_LINUX
#endif