#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FlyingAwayd8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FlyingAway>d__8"));
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
		return ((T (*)(FlyingAwayd8*))(Il2CppBase() + 0x4576D40))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FlyingAwayd8*))(Il2CppBase() + 0x4576D44))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(FlyingAwayd8*))(Il2CppBase() + 0x457700C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(FlyingAwayd8*))(Il2CppBase() + 0x4577014))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FlyingAwayd8*))(Il2CppBase() + 0x457707C))(this);
	}

};

}
