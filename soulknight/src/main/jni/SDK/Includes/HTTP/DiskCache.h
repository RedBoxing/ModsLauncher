#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HTTP {

class DiskCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTTP", "DiskCache"));
	}

	template <typename T = Il2CppString*> T& cachePath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A27314))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DiskCache*))(Il2CppBase() + 0x1A2756C))(this);
	}
	template <typename T = uintptr_t> T Fetch(uintptr_t request) {
		return ((T (*)(DiskCache*, uintptr_t))(Il2CppBase() + 0x1A2765C))(this, request);
	}
	template <typename T = uintptr_t> T DownloadAndSave(uintptr_t request, Il2CppString* filename, uintptr_t handle) {
		return ((T (*)(DiskCache*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1A27C30))(this, request, filename, handle);
	}

};

}
