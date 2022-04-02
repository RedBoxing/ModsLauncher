#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateSubBulletd11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateSubBullet>d__11"));
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

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateSubBulletd11*))(Il2CppBase() + 0x1C1E534))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateSubBulletd11*))(Il2CppBase() + 0x1C1E538))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateSubBulletd11*))(Il2CppBase() + 0x1C1E93C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateSubBulletd11*))(Il2CppBase() + 0x1C1E944))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateSubBulletd11*))(Il2CppBase() + 0x1C1E9AC))(this);
	}

};

}
