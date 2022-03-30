#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PeakingWeapond78
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PeakingWeapon>d__78"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& target_weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(PeakingWeapond78*))(Il2CppBase() + 0x4532B90))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PeakingWeapond78*))(Il2CppBase() + 0x4532B94))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(PeakingWeapond78*))(Il2CppBase() + 0x4532E2C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(PeakingWeapond78*))(Il2CppBase() + 0x4532E34))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PeakingWeapond78*))(Il2CppBase() + 0x4532E9C))(this);
	}

};

}
