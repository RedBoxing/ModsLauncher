#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreatingBulletd10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreatingBullet>d__10"));
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
	template <typename T = int32_t> T& totalCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& waitDelay5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& i5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreatingBulletd10*))(Il2CppBase() + 0x21672C8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreatingBulletd10*))(Il2CppBase() + 0x21672CC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreatingBulletd10*))(Il2CppBase() + 0x2167490))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreatingBulletd10*))(Il2CppBase() + 0x2167498))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreatingBulletd10*))(Il2CppBase() + 0x2167500))(this);
	}

};

}
