#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MockEventAdder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MockEventAdder"));
	}

	template <typename T = bool> T& createBullet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& afterBulletCreate() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& afterAttack() {
		return *(T*)((uintptr_t)this + 0x1A);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MockEventAdder*))(Il2CppBase() + 0x41F563C))(this);
	}
	template <typename T = void> T BulletCreate(uintptr_t bullet) {
		return ((T (*)(MockEventAdder*, uintptr_t))(Il2CppBase() + 0x41F57B8))(this, bullet);
	}
	template <typename T = void> T AfterBulletCreate() {
		return ((T (*)(MockEventAdder*))(Il2CppBase() + 0x41F5830))(this);
	}
	template <typename T = void> T AfterAttack() {
		return ((T (*)(MockEventAdder*))(Il2CppBase() + 0x41F5894))(this);
	}

};

}
