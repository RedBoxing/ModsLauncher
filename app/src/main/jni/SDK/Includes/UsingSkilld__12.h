#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UsingSkilld12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UsingSkill>d__12"));
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
	template <typename T = uintptr_t> T& controller5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& j5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(UsingSkilld12*))(Il2CppBase() + 0x45A07F8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UsingSkilld12*))(Il2CppBase() + 0x45A07FC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(UsingSkilld12*))(Il2CppBase() + 0x45A1180))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(UsingSkilld12*))(Il2CppBase() + 0x45A1188))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UsingSkilld12*))(Il2CppBase() + 0x45A11F0))(this);
	}

};

}
