#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Wavingd31
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Waving>d__31"));
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
	template <typename T = float> T& maxY5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& minY5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& offset5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& speed5__5() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& up5__6() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Wavingd31*))(Il2CppBase() + 0x1CD24F0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Wavingd31*))(Il2CppBase() + 0x1CD24F4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Wavingd31*))(Il2CppBase() + 0x1CD2748))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Wavingd31*))(Il2CppBase() + 0x1CD2750))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Wavingd31*))(Il2CppBase() + 0x1CD27B8))(this);
	}

};

}
