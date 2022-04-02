#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CaptureScreend3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CaptureScreen>d__3"));
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
	template <typename T = float> T& startTime5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CaptureScreend3*))(Il2CppBase() + 0x4384774))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CaptureScreend3*))(Il2CppBase() + 0x4384778))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CaptureScreend3*))(Il2CppBase() + 0x4384870))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CaptureScreend3*))(Il2CppBase() + 0x4384878))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CaptureScreend3*))(Il2CppBase() + 0x43848E0))(this);
	}

};

}
