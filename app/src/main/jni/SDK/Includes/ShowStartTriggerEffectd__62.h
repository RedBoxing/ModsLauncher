#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowStartTriggerEffectd62
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowStartTriggerEffect>d__62"));
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
	template <typename T = uintptr_t> T& rune() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& runeIndex5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShowStartTriggerEffectd62*))(Il2CppBase() + 0x42BE31C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowStartTriggerEffectd62*))(Il2CppBase() + 0x42BE320))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShowStartTriggerEffectd62*))(Il2CppBase() + 0x42BE434))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShowStartTriggerEffectd62*))(Il2CppBase() + 0x42BE43C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowStartTriggerEffectd62*))(Il2CppBase() + 0x42BE4A4))(this);
	}

};

}
