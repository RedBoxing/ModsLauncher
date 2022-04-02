#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ICustomBulletModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICustomBulletModifier"));
	}


	template <typename T = void> T Modify(int32_t damage, int32_t critic, float size) {
		return ((T (*)(ICustomBulletModifier*, int32_t, int32_t, float))(Il2CppBase() + 0x0))(this, damage, critic, size);
	}
	template <typename T = bool> T get_largable() {
		return ((T (*)(ICustomBulletModifier*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(ICustomBulletModifier*))(Il2CppBase() + 0x0))(this);
	}

};

}
