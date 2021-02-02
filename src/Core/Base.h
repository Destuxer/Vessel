#pragma once
#include "Platform.h"
#include <memory>
#include <signal.h>

#ifdef VSL_SHARED_LIB
    #ifdef VSL_PLATFORM_LINUX
        #define VSL_API __attribute((visibility("default")))
    #endif
#elif defined(VSL_DYLINK_LIB)
    #ifdef  VSL_PLATFORM_WIN64 || VSL_PLATFORM_WIN32
        #define VSL_API __declspec(dllexport)
    #elif defined(VSL_PLATFORM_WIN64 || VSL_PLATFORM_WIN32)
        #define VSL_API __declspec(dllimport)
    #else
        #error "DLLs are only supported on Windows platforms!"
    #endif
#else
    #define VSL_API
#endif

#ifdef VSL_ENABLE_ASSERTS
    #define VSL_ASSERT(x, ...) { if(!(x)) { VSL_ERROR("Assertion failed: {0}", __VA_ARGS__); raise(SIGTRAP); }}
    #define VSL_CORE_ASSERT(x, ...) { if(!(x)) { VSL_CORE_ERROR("Assertion failed: {0}", __VA_ARGS__); raise(SIGTRAP); }}
#else
    #define VSL_ASSERT(x,...)
    #define VSL_CORE_ASSERT(x,...)
#endif

#define BIT(x) (1 << x)

#define VSL_BIND_EVENT_FN(fn) std::bind(&fn,this,std::placeholders::_1)