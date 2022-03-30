#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MoveCameraToTargetd42
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MoveCameraToTarget>d__42"));
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
	template <typename T = float> T& initialCamPosH5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& initialCamPosV5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& t5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(MoveCameraToTargetd42*))(Il2CppBase() + 0x2C2F4DC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(MoveCameraToTargetd42*))(Il2CppBase() + 0x2C2F4E0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(MoveCameraToTargetd42*))(Il2CppBase() + 0x2C2F8AC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(MoveCameraToTargetd42*))(Il2CppBase() + 0x2C2F8B4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(MoveCameraToTargetd42*))(Il2CppBase() + 0x2C2F91C))(this);
	}

};

}
