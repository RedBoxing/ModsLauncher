#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TestTriggerRoutined19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TestTriggerRoutine>d__19"));
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
	template <typename T = uintptr_t> T& waitForSeconds5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(TestTriggerRoutined19*))(Il2CppBase() + 0x207A96C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(TestTriggerRoutined19*))(Il2CppBase() + 0x207A970))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(TestTriggerRoutined19*))(Il2CppBase() + 0x207AA80))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(TestTriggerRoutined19*))(Il2CppBase() + 0x207AA88))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(TestTriggerRoutined19*))(Il2CppBase() + 0x207AAF0))(this);
	}

};

}
