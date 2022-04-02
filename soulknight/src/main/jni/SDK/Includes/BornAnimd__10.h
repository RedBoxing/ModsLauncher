#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BornAnimd10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BornAnim>d__10"));
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
	template <typename T = Il2CppVector3> T& initPosition5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& bornPosition5__3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& animStartTime5__4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& progress5__5() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(BornAnimd10*))(Il2CppBase() + 0x4384F6C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BornAnimd10*))(Il2CppBase() + 0x4384F70))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(BornAnimd10*))(Il2CppBase() + 0x43853D4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(BornAnimd10*))(Il2CppBase() + 0x43853DC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BornAnimd10*))(Il2CppBase() + 0x4385444))(this);
	}

};

}
