#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EndJustAttackd7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EndJustAttack>d__7"));
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
		return ((T (*)(EndJustAttackd7*))(Il2CppBase() + 0x2589074))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(EndJustAttackd7*))(Il2CppBase() + 0x2589078))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(EndJustAttackd7*))(Il2CppBase() + 0x258912C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(EndJustAttackd7*))(Il2CppBase() + 0x2589134))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(EndJustAttackd7*))(Il2CppBase() + 0x258919C))(this);
	}

};

}
