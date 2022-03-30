#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIBulletAdditionalMulti
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIBulletAdditionalMulti"));
	}

	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = void> T AttackEffect() {
		return ((T (*)(WIBulletAdditionalMulti*))(Il2CppBase() + 0x435E70C))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackEffect() {
		return ((T (*)(WIBulletAdditionalMulti*))(Il2CppBase() + 0x435E88C))(this);
	}

};

}
