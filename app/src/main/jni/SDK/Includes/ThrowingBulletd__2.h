#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ThrowingBulletd2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ThrowingBullet>d__2"));
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
	template <typename T = int32_t> T& i5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ThrowingBulletd2*))(Il2CppBase() + 0x18C4230))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ThrowingBulletd2*))(Il2CppBase() + 0x18C4234))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ThrowingBulletd2*))(Il2CppBase() + 0x18C4448))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ThrowingBulletd2*))(Il2CppBase() + 0x18C4450))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ThrowingBulletd2*))(Il2CppBase() + 0x18C44B8))(this);
	}

};

}
