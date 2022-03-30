#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayDestoryd7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayDestory>d__7"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& seconds() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DelayDestoryd7*))(Il2CppBase() + 0x43EB424))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayDestoryd7*))(Il2CppBase() + 0x43EB428))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DelayDestoryd7*))(Il2CppBase() + 0x43EB504))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DelayDestoryd7*))(Il2CppBase() + 0x43EB50C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayDestoryd7*))(Il2CppBase() + 0x43EB574))(this);
	}

};

}
