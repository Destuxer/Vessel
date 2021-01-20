#pragma once

#include <memory>
#include <signal.h>
#define VSL_API __attribute((visibility("default")))

#ifdef VSL_ENABLE_ASSERTS
    #define VSL_ASSERT(x, ...) { if(!(x)) { VSL_ERROR("Assertion failed: {0}", __VA_ARGS__); raise(SIGTRAP); }}
    #define VSL_CORE_ASSERT(x, ...) { if(!(x)) { VSL_CORE_ERROR("Assertion failed: {0}", __VA_ARGS__); raise(SIGTRAP); }}
#else
    #define VSL_ASSERT(x,...)
    #define VSL_CORE_ASSERT(x,...)
#endif

#define BIT(x) (1 << x)

#define VSL_BIND_EVENT_FN(fn) std::bind(&fn,this,std::placeholders::_1)