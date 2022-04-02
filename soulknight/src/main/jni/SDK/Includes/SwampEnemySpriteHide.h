#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampEnemySpriteHide
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampEnemySpriteHide"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& spriteAnimations() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& deadColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& deadPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& tentacleParent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& enemyController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _spriteColors() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& _originPosition() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SwampEnemySpriteHide*))(Il2CppBase() + 0x42AD0F0))(this);
	}
	template <typename T = void> T Awakeb__7_0(uintptr_t enemy) {
		return ((T (*)(SwampEnemySpriteHide*, uintptr_t))(Il2CppBase() + 0x42AD24C))(this, enemy);
	}
	template <typename T = void> T Awakeb__7_1(uintptr_t enemy) {
		return ((T (*)(SwampEnemySpriteHide*, uintptr_t))(Il2CppBase() + 0x42AD460))(this, enemy);
	}

};

}
