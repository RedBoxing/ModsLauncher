#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DetectingContactd2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DetectingContact>d__2"));
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
	template <typename T = uintptr_t> T& wait5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DetectingContactd2*))(Il2CppBase() + 0x20A355C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DetectingContactd2*))(Il2CppBase() + 0x20A3560))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DetectingContactd2*))(Il2CppBase() + 0x20A38A4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DetectingContactd2*))(Il2CppBase() + 0x20A38AC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DetectingContactd2*))(Il2CppBase() + 0x20A3914))(this);
	}

};

}
