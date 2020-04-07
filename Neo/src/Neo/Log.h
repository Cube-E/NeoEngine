#pragma once


#include "Core.h"
#include "spdlog\spdlog.h"
#include "spdlog\details\registry.h"

namespace Neo {

	class NEO_API Log 
	{
	private:
		inline static std::shared_ptr<spdlog::logger> s_CoreLogger;
		inline static std::shared_ptr<spdlog::logger> s_ClientLogger;
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }


	};
}

//Core log macros
#define NEO_CORE_TRACE(...)	      Neo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NEO_CORE_INFO(...)        Neo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NEO_CORE_WARN(...)        Neo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NEO_CORE_ERROR(...)       Neo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NEO_CORE_CRITICAL(...)    Neo::Log::GetCoreLogger()->critical(__VA_ARGS__)

//Client log macros
#define NEO_CLIENT_TRACE(...)     Neo::Log::GetClientLogger()->error(__VA_ARGS__)
#define NEO_CLIENT_INFO(...)      Neo::Log::GetClientLogger()->info(__VA_ARGS__)
#define NEO_CLIENT_WARN(...)      Neo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NEO_CLIENT_ERROR(...)     Neo::Log::GetClientLogger()->error(__VA_ARGS__)
#define NEO_CLIENT_CRITICAL(...)  Neo::Log::GetClientLogger()->critical(__VA_ARGS__)