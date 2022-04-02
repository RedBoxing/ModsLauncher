#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlayDeepLinkDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlayDeepLinkDelegate"));
	}


	template <typename T = void> T Invoke(Il2CppString* linkScheme) {
		return ((T (*)(KTPlayDeepLinkDelegate*, Il2CppString*))(Il2CppBase() + 0x21B4094))(this, linkScheme);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* linkScheme, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KTPlayDeepLinkDelegate*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B50B0))(this, linkScheme, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KTPlayDeepLinkDelegate*, uintptr_t))(Il2CppBase() + 0x21B50D4))(this, result);
	}

};

}
