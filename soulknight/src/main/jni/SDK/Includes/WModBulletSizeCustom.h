#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModBulletSizeCustom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModBulletSizeCustom"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& buffScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& damageType() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T BuffModify() {
		return ((T (*)(WModBulletSizeCustom*))(Il2CppBase() + 0x4363DB4))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffModify() {
		return ((T (*)(WModBulletSizeCustom*))(Il2CppBase() + 0x4363F4C))(this);
	}

};

}
