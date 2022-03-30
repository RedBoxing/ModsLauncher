#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreatingSwordd1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreatingSword>d__1"));
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
	template <typename T = uintptr_t> T& wait5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& multiCount5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& angle5__4() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& speed5__5() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& bulletInfo5__6() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& damageInfo5__7() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& dirSign5__8() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& i5__9() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreatingSwordd1*))(Il2CppBase() + 0x18CFBD0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreatingSwordd1*))(Il2CppBase() + 0x18CFBD4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreatingSwordd1*))(Il2CppBase() + 0x18D02E0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreatingSwordd1*))(Il2CppBase() + 0x18D02E8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreatingSwordd1*))(Il2CppBase() + 0x18D0350))(this);
	}

};

}
