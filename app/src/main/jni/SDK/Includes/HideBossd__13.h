#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HideBossd13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<HideBoss>d__13"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& bossInstance() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(HideBossd13*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(HideBossd13*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(HideBossd13*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(HideBossd13*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(HideBossd13*))(Il2CppBase() + 0x0))(this);
	}

};

}
