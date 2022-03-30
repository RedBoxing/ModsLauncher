#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WaitMoveForwardd29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitMoveForward>d__29"));
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
	template <typename T = float> T& pre_distance5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& temp_distance5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(WaitMoveForwardd29*))(Il2CppBase() + 0x26F4518))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitMoveForwardd29*))(Il2CppBase() + 0x26F451C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(WaitMoveForwardd29*))(Il2CppBase() + 0x26F47FC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(WaitMoveForwardd29*))(Il2CppBase() + 0x26F4804))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitMoveForwardd29*))(Il2CppBase() + 0x26F486C))(this);
	}

};

}
