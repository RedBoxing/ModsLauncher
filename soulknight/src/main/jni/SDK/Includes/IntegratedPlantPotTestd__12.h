#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IntegratedPlantPotTestd12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IntegratedPlantPotTest>d__12"));
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
	template <typename T = int32_t> T& i5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(IntegratedPlantPotTestd12*))(Il2CppBase() + 0x26E81DC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(IntegratedPlantPotTestd12*))(Il2CppBase() + 0x26E81E0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(IntegratedPlantPotTestd12*))(Il2CppBase() + 0x26E8604))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(IntegratedPlantPotTestd12*))(Il2CppBase() + 0x26E860C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(IntegratedPlantPotTestd12*))(Il2CppBase() + 0x26E8674))(this);
	}

};

}
