#pragma once

#ifdef LE_PLATFORM_WINDOWS
	#ifdef LE_BUILD_DLL
		#define LE_API _declspec(dllexport)
	#else
		#define LE_API _declspec(dllimport)
	#endif // LE_BUILD_DLL
#else
	#error LiEngine only supports Windows!
#endif // LE_PLATFORM_WINDOWS

