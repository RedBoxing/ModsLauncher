#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gatheringd24
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Gathering>d__24"));
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
	template <typename T = bool> T& gather() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& time5__2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& wait5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Gatheringd24*))(Il2CppBase() + 0x4414758))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Gatheringd24*))(Il2CppBase() + 0x441475C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Gatheringd24*))(Il2CppBase() + 0x4414C34))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Gatheringd24*))(Il2CppBase() + 0x4414C3C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Gatheringd24*))(Il2CppBase() + 0x4414CA4))(this);
	}

};

}
