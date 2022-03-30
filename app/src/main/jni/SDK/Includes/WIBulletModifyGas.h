#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIBulletModifyGas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIBulletModifyGas"));
	}

	template <typename T = uintptr_t> T& effectorObject() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& bullet_color() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T BulletMod(uintptr_t bullet) {
		return ((T (*)(WIBulletModifyGas*, uintptr_t))(Il2CppBase() + 0x435F730))(this, bullet);
	}
	template <typename T = void> T iFixBaseProxy_BulletMod(uintptr_t P0) {
		return ((T (*)(WIBulletModifyGas*, uintptr_t))(Il2CppBase() + 0x435FA28))(this, P0);
	}

};

}
