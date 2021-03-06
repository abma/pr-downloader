/* This file is part of the Springlobby (GPL v2 or later), see COPYING */

#include "platform.h"
#include <cassert>

namespace LSL {
namespace Util {


enum Platform GetPlatform()
{
#ifdef _WIN64
        return Platform::kWindows64;
#elif defined _WIN32
        return Platform::kWindows32;
#elif defined(__APPLE__)
        return Platform::kMacosx;
#elif defined(__x86_64__) || defined(__e2k__)
        return Platform::kLinux64;
#else
        return Platform::kLinux32;
#endif
}

const char* GetPlatformString(enum Platform platform)
{

	switch (platform) {
		case Platform::kLinux32:   return "linux32";
		case Platform::kLinux64:   return "linux64";
		case Platform::kMacosx:    return "osx";
		case Platform::kWindows32: return "windows32";
		case Platform::kWindows64: return "windows64";
		default:
			assert(false);
			return "";
	}
}

const char* GetCurrentPlatformString()
{
	return GetPlatformString(GetPlatform());
}

} // namespace Util
} // namespace LSL
