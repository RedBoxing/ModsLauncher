#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuyPlantpotTestd14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BuyPlantpotTest>d__14"));
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
	template <typename T = uintptr_t> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& plantpot_index5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(BuyPlantpotTestd14*))(Il2CppBase() + 0x4563850))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BuyPlantpotTestd14*))(Il2CppBase() + 0x456393C))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(BuyPlantpotTestd14*))(Il2CppBase() + 0x456387C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(BuyPlantpotTestd14*))(Il2CppBase() + 0x456401C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(BuyPlantpotTestd14*))(Il2CppBase() + 0x4564024))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BuyPlantpotTestd14*))(Il2CppBase() + 0x456408C))(this);
	}

};

}
