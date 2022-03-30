#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateBulletContinuousd28
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateBulletContinuous>d__28"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& bullet_speed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& i5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateBulletContinuousd28*))(Il2CppBase() + 0x248EF30))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateBulletContinuousd28*))(Il2CppBase() + 0x248EF34))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateBulletContinuousd28*))(Il2CppBase() + 0x248F044))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateBulletContinuousd28*))(Il2CppBase() + 0x248F04C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateBulletContinuousd28*))(Il2CppBase() + 0x248F0B4))(this);
	}

};

}
