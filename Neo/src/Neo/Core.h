#pragma once

#ifdef NEO_PLATFORM_WINDOWS
	#ifdef NEO_BUILD_DLL
		#define NEO_API __declspec(dllexport)
	#else
		#define NEO_API __declspec(dllimport)
	#endif
#else
	#error Neo only supports Windows.

#endif

#ifdef NEO_ENABLE_ASSERTS
	#define NEO_ASSERTS(X, ...) { if(!(x)) { NEO_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define NEO_CORE_ASSERT(X, ...) { if(!(x)) { NEO_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define NEO_ASSERT(x, ...)
	#define NEO_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)