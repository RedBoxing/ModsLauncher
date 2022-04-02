#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangingAtkSpeedd81
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangingAtkSpeed>d__81"));
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
	template <typename T = int32_t> T& change_val() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ChangingAtkSpeedd81*))(Il2CppBase() + 0x1BF10B4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ChangingAtkSpeedd81*))(Il2CppBase() + 0x1BF10B8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ChangingAtkSpeedd81*))(Il2CppBase() + 0x1BF11A4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ChangingAtkSpeedd81*))(Il2CppBase() + 0x1BF11AC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ChangingAtkSpeedd81*))(Il2CppBase() + 0x1BF1214))(this);
	}

};

}
