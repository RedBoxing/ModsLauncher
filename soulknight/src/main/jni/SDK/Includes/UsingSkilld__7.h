#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UsingSkilld7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UsingSkill>d__7"));
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
	template <typename T = int32_t> T& castTimes() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& j5__2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(UsingSkilld7*))(Il2CppBase() + 0x45A2B84))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UsingSkilld7*))(Il2CppBase() + 0x45A2B88))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(UsingSkilld7*))(Il2CppBase() + 0x45A31AC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(UsingSkilld7*))(Il2CppBase() + 0x45A31B4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UsingSkilld7*))(Il2CppBase() + 0x45A321C))(this);
	}

};

}
