#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LaserReleased16
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LaserRelease>d__16"));
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
	template <typename T = int32_t> T& laserIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& targetTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& startTime5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& laserTime5__3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& initAngleQuaternion5__4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppQuaternion> T& targetAngleQuaternion5__5() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& bulletInstance5__6() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LaserReleased16*))(Il2CppBase() + 0x1A39E2C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LaserReleased16*))(Il2CppBase() + 0x1A39E30))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LaserReleased16*))(Il2CppBase() + 0x1A3A518))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LaserReleased16*))(Il2CppBase() + 0x1A3A520))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LaserReleased16*))(Il2CppBase() + 0x1A3A588))(this);
	}

};

}
