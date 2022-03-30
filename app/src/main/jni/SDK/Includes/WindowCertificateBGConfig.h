#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WindowCertificateBGConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WindowCertificateBGConfig"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& backgrounds() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& defaultBackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& colorWithSprite() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T ProcessImage(Il2CppString* version, uintptr_t image) {
		return ((T (*)(WindowCertificateBGConfig*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4602E30))(this, version, image);
	}

};

}
