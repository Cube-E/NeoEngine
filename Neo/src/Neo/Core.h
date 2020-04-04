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