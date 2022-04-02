#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreatingArrowRaind30
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreatingArrowRain>d__30"));
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
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& wait5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& radius5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& centerPosition5__4() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& proto5__5() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& i5__6() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreatingArrowRaind30*))(Il2CppBase() + 0x1EF75F4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreatingArrowRaind30*))(Il2CppBase() + 0x1EF75F8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreatingArrowRaind30*))(Il2CppBase() + 0x1EF7ED0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreatingArrowRaind30*))(Il2CppBase() + 0x1EF7ED8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreatingArrowRaind30*))(Il2CppBase() + 0x1EF7F40))(this);
	}

};

}
