#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreatingSwordd14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreatingSword>d__14"));
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
	template <typename T = int32_t> T& skinIndex5__6() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& bulletInfo5__7() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& damageInfo5__8() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& dirSign5__9() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& i5__10() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreatingSwordd14*))(Il2CppBase() + 0x1F48604))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreatingSwordd14*))(Il2CppBase() + 0x1F48608))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreatingSwordd14*))(Il2CppBase() + 0x1F490A8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreatingSwordd14*))(Il2CppBase() + 0x1F490B0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreatingSwordd14*))(Il2CppBase() + 0x1F49118))(this);
	}

};

}
