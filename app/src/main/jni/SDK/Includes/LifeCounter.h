#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LifeCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LifeCounter"));
	}

	template <typename T = float> T& totalTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& slideBar() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LifeCounter*))(Il2CppBase() + 0x425C29C))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(LifeCounter*))(Il2CppBase() + 0x425C374))(this);
	}
	template <typename T = void> T SetLifeTime(float time) {
		return ((T (*)(LifeCounter*, float))(Il2CppBase() + 0x425C3D8))(this, time);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(LifeCounter*))(Il2CppBase() + 0x425C44C))(this);
	}
	template <typename T = void> T DestroyTarget() {
		return ((T (*)(LifeCounter*))(Il2CppBase() + 0x425C56C))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(LifeCounter*))(Il2CppBase() + 0x425C7A4))(this);
	}
	template <typename T = uintptr_t> static T SetLifeTime_1(uintptr_t target, Il2CppVector2 offset, float lifeTime) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, float))(Il2CppBase() + 0x425C9CC))(0, target, offset, lifeTime);
	}

};

}
