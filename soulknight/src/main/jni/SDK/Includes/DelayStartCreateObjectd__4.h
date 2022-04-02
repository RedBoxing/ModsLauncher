#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayStartCreateObjectd4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayStartCreateObject>d__4"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& onCreate() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DelayStartCreateObjectd4*))(Il2CppBase() + 0x42E857C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayStartCreateObjectd4*))(Il2CppBase() + 0x42E8580))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DelayStartCreateObjectd4*))(Il2CppBase() + 0x42E8968))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DelayStartCreateObjectd4*))(Il2CppBase() + 0x42E8970))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayStartCreateObjectd4*))(Il2CppBase() + 0x42E89D8))(this);
	}

};

}
