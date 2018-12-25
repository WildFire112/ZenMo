#pragma once

#ifdef ZM_PLATFORM_WINDOWS
	#ifdef ZM_BUILD_DLL
		#define ZENMO_API _declspec(dllexport)
	#else
		#define ZENMO_API _declspec(dllimport)
	#endif
#else
	#error ZenMo only support Windows!
#endif