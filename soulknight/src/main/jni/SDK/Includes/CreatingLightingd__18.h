#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreatingLightingd18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreatingLighting>d__18"));
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
	template <typename T = uintptr_t> T& proto5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& wait5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& distance5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& damage5__5() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& prevPosition5__6() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& size5__7() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreatingLightingd18*))(Il2CppBase() + 0x1F48088))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreatingLightingd18*))(Il2CppBase() + 0x1F4808C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreatingLightingd18*))(Il2CppBase() + 0x1F4858C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreatingLightingd18*))(Il2CppBase() + 0x1F48594))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreatingLightingd18*))(Il2CppBase() + 0x1F485FC))(this);
	}

};

}
