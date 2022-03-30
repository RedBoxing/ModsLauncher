#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CurrentBundleVersion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrentBundleVersion"));
	}

	template <typename T = Il2CppString*> T& version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& bundleVersionCode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _currentBundleVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& defaultBundleVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T get_currentBundleVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x4276748))(0);
	}

};

}
