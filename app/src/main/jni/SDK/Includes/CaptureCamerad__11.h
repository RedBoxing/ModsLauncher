#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CaptureCamerad11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CaptureCamera>d__11"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CaptureCamerad11*))(Il2CppBase() + 0x458B2F0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CaptureCamerad11*))(Il2CppBase() + 0x458B2F4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CaptureCamerad11*))(Il2CppBase() + 0x458B4C4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CaptureCamerad11*))(Il2CppBase() + 0x458B4CC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CaptureCamerad11*))(Il2CppBase() + 0x458B534))(this);
	}

};

}
