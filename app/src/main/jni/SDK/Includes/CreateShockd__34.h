#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateShockd34
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateShock>d__34"));
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
	template <typename T = uintptr_t> T& shock_info() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& delayWait5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& loop_pos5__3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& i5__4() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateShockd34*))(Il2CppBase() + 0x257DCCC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateShockd34*))(Il2CppBase() + 0x257DCD0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateShockd34*))(Il2CppBase() + 0x257E3C0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateShockd34*))(Il2CppBase() + 0x257E3C8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateShockd34*))(Il2CppBase() + 0x257E430))(this);
	}

};

}
