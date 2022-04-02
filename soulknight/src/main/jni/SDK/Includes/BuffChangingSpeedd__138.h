#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffChangingSpeedd138
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BuffChangingSpeed>d__138"));
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
	template <typename T = float> T& speedFactor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(BuffChangingSpeedd138*))(Il2CppBase() + 0x44D3978))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BuffChangingSpeedd138*))(Il2CppBase() + 0x44D397C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(BuffChangingSpeedd138*))(Il2CppBase() + 0x44D3A8C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(BuffChangingSpeedd138*))(Il2CppBase() + 0x44D3A94))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BuffChangingSpeedd138*))(Il2CppBase() + 0x44D3AFC))(this);
	}

};

}
