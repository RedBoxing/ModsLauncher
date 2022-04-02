#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CharacterHpBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterHpBar"));
	}

	template <typename T = float> T& autoHideDelay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& barObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& hpSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CharacterHpBar*))(Il2CppBase() + 0x18775B8))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(CharacterHpBar*))(Il2CppBase() + 0x1877790))(this);
	}
	template <typename T = void> T OnUpdate(uintptr_t e) {
		return ((T (*)(CharacterHpBar*, uintptr_t))(Il2CppBase() + 0x1877808))(this, e);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CharacterHpBar*))(Il2CppBase() + 0x1877964))(this);
	}

};

}
