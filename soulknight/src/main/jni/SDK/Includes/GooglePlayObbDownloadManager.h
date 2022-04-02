#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GooglePlayObbDownloadManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GooglePlayObbDownloadManager"));
	}

	template <typename T = uintptr_t> static T& m_AndroidOSBuildClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T GetGooglePlayObbDownloader() {
		return ((T (*)(void *))(Il2CppBase() + 0x461C67C))(0);
	}
	template <typename T = bool> static T IsDownloaderAvailable() {
		return ((T (*)(void *))(Il2CppBase() + 0x461C7B0))(0);
	}

};

}
