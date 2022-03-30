#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossBasicTestd23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BossBasicTest>d__23"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& boss_checker() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& test_scene5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& loaded_bundle5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& boss_scene5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(BossBasicTestd23*))(Il2CppBase() + 0x26F5DE8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BossBasicTestd23*))(Il2CppBase() + 0x26F5DEC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(BossBasicTestd23*))(Il2CppBase() + 0x26F64A0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(BossBasicTestd23*))(Il2CppBase() + 0x26F64A8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BossBasicTestd23*))(Il2CppBase() + 0x26F6510))(this);
	}

};

}
