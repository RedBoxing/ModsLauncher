#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateLaserd14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateLaser>d__14"));
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
	template <typename T = float> T& duration5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& angle5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& tempAngle5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& damageInfo5__5() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& i5__6() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateLaserd14*))(Il2CppBase() + 0x425A1B0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateLaserd14*))(Il2CppBase() + 0x425A1B4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateLaserd14*))(Il2CppBase() + 0x425A67C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateLaserd14*))(Il2CppBase() + 0x425A684))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateLaserd14*))(Il2CppBase() + 0x425A6EC))(this);
	}

};

}
