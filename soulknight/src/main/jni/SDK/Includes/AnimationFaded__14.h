#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AnimationFaded14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AnimationFade>d__14"));
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
	template <typename T = float> T& time5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& initSaturatorBase5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& initSaturatorRange5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(AnimationFaded14*))(Il2CppBase() + 0x4528588))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(AnimationFaded14*))(Il2CppBase() + 0x452858C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(AnimationFaded14*))(Il2CppBase() + 0x4528860))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(AnimationFaded14*))(Il2CppBase() + 0x4528868))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AnimationFaded14*))(Il2CppBase() + 0x45288D0))(this);
	}

};

}
