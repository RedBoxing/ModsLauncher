#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LoadSceneAddictived9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadSceneAddictive>d__9"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& loaded_scene() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& test_bundle5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LoadSceneAddictived9*))(Il2CppBase() + 0x45660A4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadSceneAddictived9*))(Il2CppBase() + 0x45660A8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LoadSceneAddictived9*))(Il2CppBase() + 0x4566180))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LoadSceneAddictived9*))(Il2CppBase() + 0x4566188))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadSceneAddictived9*))(Il2CppBase() + 0x45661F0))(this);
	}

};

}
