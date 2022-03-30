#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Weapon {

class OneShotBulletCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Weapon", "OneShotBulletCreator"));
	}

	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(OneShotBulletCreator*))(Il2CppBase() + 0x4368528))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(OneShotBulletCreator*))(Il2CppBase() + 0x43685C0))(this);
	}

};

}
