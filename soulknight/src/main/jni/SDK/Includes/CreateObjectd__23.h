#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateObjectd23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateObject>d__23"));
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
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& prefab5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isWeapon5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateObjectd23*))(Il2CppBase() + 0x21A2810))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateObjectd23*))(Il2CppBase() + 0x21A2814))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateObjectd23*))(Il2CppBase() + 0x21A2DB4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateObjectd23*))(Il2CppBase() + 0x21A2DBC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateObjectd23*))(Il2CppBase() + 0x21A2E24))(this);
	}

};

}
