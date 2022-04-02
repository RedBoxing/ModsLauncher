#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerTriggerVacantWalld6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayerTriggerVacantWall>d__6"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& triggerCollider() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& aisle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(PlayerTriggerVacantWalld6*))(Il2CppBase() + 0x4357F54))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PlayerTriggerVacantWalld6*))(Il2CppBase() + 0x4357F58))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(PlayerTriggerVacantWalld6*))(Il2CppBase() + 0x4358034))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(PlayerTriggerVacantWalld6*))(Il2CppBase() + 0x435803C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PlayerTriggerVacantWalld6*))(Il2CppBase() + 0x43580A4))(this);
	}

};

}
