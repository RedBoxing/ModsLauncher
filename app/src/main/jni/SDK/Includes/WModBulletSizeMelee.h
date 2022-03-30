#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModBulletSizeMelee
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModBulletSizeMelee"));
	}

	template <typename T = float> T& buffScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T BuffModify() {
		return ((T (*)(WModBulletSizeMelee*))(Il2CppBase() + 0x4364128))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffModify() {
		return ((T (*)(WModBulletSizeMelee*))(Il2CppBase() + 0x4364240))(this);
	}

};

}
