#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CommonBulletRebound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommonBulletRebound"));
	}

	template <typename T = bool> T& rebound() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& fromCamp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_camp() {
		return ((T (*)(CommonBulletRebound*))(Il2CppBase() + 0x4273AE0))(this);
	}
	template <typename T = bool> T CanRebound(uintptr_t bullet) {
		return ((T (*)(CommonBulletRebound*, uintptr_t))(Il2CppBase() + 0x4273B40))(this, bullet);
	}
	template <typename T = void> T OnRebound(uintptr_t bullet) {
		return ((T (*)(CommonBulletRebound*, uintptr_t))(Il2CppBase() + 0x4273C4C))(this, bullet);
	}
	template <typename T = bool> T CanEliminate(uintptr_t bullet) {
		return ((T (*)(CommonBulletRebound*, uintptr_t))(Il2CppBase() + 0x4273CBC))(this, bullet);
	}
	template <typename T = void> T OnEliminate(uintptr_t bullet) {
		return ((T (*)(CommonBulletRebound*, uintptr_t))(Il2CppBase() + 0x4273D60))(this, bullet);
	}

};

}
