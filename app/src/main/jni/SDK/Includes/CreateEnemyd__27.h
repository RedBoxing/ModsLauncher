#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateEnemyd27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateEnemy>d__27"));
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
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateEnemyd27*))(Il2CppBase() + 0x186D34C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateEnemyd27*))(Il2CppBase() + 0x186D474))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(CreateEnemyd27*))(Il2CppBase() + 0x186D41C))(this);
	}
	template <typename T = void> T m__Finally2() {
		return ((T (*)(CreateEnemyd27*))(Il2CppBase() + 0x186D3C4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateEnemyd27*))(Il2CppBase() + 0x186D9E8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateEnemyd27*))(Il2CppBase() + 0x186D9F0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateEnemyd27*))(Il2CppBase() + 0x186DA58))(this);
	}

};

}
