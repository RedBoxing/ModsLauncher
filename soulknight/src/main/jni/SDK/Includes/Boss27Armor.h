#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Boss27Armor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Boss27Armor"));
	}

	template <typename T = uintptr_t> T& bossAI25() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& maxArmor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& armor() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Start() {
		return ((T (*)(Boss27Armor*))(Il2CppBase() + 0x1B2D540))(this);
	}
	template <typename T = void> T ChangeArmor(int32_t armor) {
		return ((T (*)(Boss27Armor*, int32_t))(Il2CppBase() + 0x1B2D5A4))(this, armor);
	}

};

}
