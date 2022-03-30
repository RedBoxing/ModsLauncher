#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TurnOffPreviousTriggerd38
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TurnOffPreviousTrigger>d__38"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(TurnOffPreviousTriggerd38*))(Il2CppBase() + 0x2C2FE30))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(TurnOffPreviousTriggerd38*))(Il2CppBase() + 0x2C2FE34))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(TurnOffPreviousTriggerd38*))(Il2CppBase() + 0x2C2FEE0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(TurnOffPreviousTriggerd38*))(Il2CppBase() + 0x2C2FEE8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(TurnOffPreviousTriggerd38*))(Il2CppBase() + 0x2C2FF50))(this);
	}

};

}
