#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelaySpeciald24
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelaySpecial>d__24"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& handIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isDown() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& hand5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DelaySpeciald24*))(Il2CppBase() + 0x1DFB560))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelaySpeciald24*))(Il2CppBase() + 0x1DFB564))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DelaySpeciald24*))(Il2CppBase() + 0x1DFB788))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DelaySpeciald24*))(Il2CppBase() + 0x1DFB790))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelaySpeciald24*))(Il2CppBase() + 0x1DFB7F8))(this);
	}

};

}
