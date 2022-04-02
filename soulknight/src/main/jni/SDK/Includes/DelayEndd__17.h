#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayEndd17
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayEnd>d__17"));
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
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& time5__2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& wait5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DelayEndd17*))(Il2CppBase() + 0x1814008))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayEndd17*))(Il2CppBase() + 0x181400C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DelayEndd17*))(Il2CppBase() + 0x18141E8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DelayEndd17*))(Il2CppBase() + 0x18141F0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayEndd17*))(Il2CppBase() + 0x1814258))(this);
	}

};

}
