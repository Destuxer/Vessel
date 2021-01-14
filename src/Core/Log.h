#pragma once

#include "Base.h"

#pragma warning(push, 0)
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#pragma warning(pop)

namespace Vessel {
    class Log
	{
	public:
		static void Init();

		static Ref<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		static Ref<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static Ref<spdlog::logger> s_CoreLogger;
		static Ref<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define VSL_CORE_TRACE(...)    ::Vessel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define VSL_CORE_INFO(...)     ::Vessel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define VSL_CORE_WARN(...)     ::Vessel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define VSL_CORE_ERROR(...)    ::Vessel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define VSL_CORE_CRITICAL(...) ::Vessel::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define VSL_TRACE(...)         ::Vessel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define VSL_INFO(...)          ::Vessel::Log::GetClientLogger()->info(__VA_ARGS__)
#define VSL_WARN(...)          ::Vessel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define VSL_ERROR(...)         ::Vessel::Log::GetClientLogger()->error(__VA_ARGS__)
#define VSL_CRITICAL(...)      ::Vessel::Log::GetClientLogger()->critical(__VA_ARGS__)