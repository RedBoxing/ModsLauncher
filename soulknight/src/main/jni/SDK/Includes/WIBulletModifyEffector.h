#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIBulletModifyEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIBulletModifyEffector"));
	}

	template <typename T = uintptr_t> T& effectorObject() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T BulletMod(uintptr_t bullet) {
		return ((T (*)(WIBulletModifyEffector*, uintptr_t))(Il2CppBase() + 0x435F614))(this, bullet);
	}
	template <typename T = void> T iFixBaseProxy_BulletMod(uintptr_t P0) {
		return ((T (*)(WIBulletModifyEffector*, uintptr_t))(Il2CppBase() + 0x435F72C))(this, P0);
	}

};

}
