#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemsRotateAnimd47
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ItemsRotateAnim>d__47"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& to() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& from() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& startTime5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& deltaAngle5__3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ItemsRotateAnimd47*))(Il2CppBase() + 0x1E6AED4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ItemsRotateAnimd47*))(Il2CppBase() + 0x1E6AED8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ItemsRotateAnimd47*))(Il2CppBase() + 0x1E6B27C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ItemsRotateAnimd47*))(Il2CppBase() + 0x1E6B284))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ItemsRotateAnimd47*))(Il2CppBase() + 0x1E6B2EC))(this);
	}

};

}
