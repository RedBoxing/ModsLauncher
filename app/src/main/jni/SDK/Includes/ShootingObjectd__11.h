#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShootingObjectd11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShootingObject>d__11"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& obj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& velocity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& speedY5__2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& totalAngle5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& totalTime5__4() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& gravity5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& time5__6() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShootingObjectd11*))(Il2CppBase() + 0x1DA43CC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShootingObjectd11*))(Il2CppBase() + 0x1DA43D0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShootingObjectd11*))(Il2CppBase() + 0x1DA47BC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShootingObjectd11*))(Il2CppBase() + 0x1DA47C4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShootingObjectd11*))(Il2CppBase() + 0x1DA482C))(this);
	}

};

}
