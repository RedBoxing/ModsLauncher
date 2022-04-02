#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RefreshStateSized63
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshStateSize>d__63"));
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
	template <typename T = bool> T& unlocked() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& parentRect5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& image5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& offset5__4() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(RefreshStateSized63*))(Il2CppBase() + 0x45BD204))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RefreshStateSized63*))(Il2CppBase() + 0x45BD208))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(RefreshStateSized63*))(Il2CppBase() + 0x45BD444))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(RefreshStateSized63*))(Il2CppBase() + 0x45BD44C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RefreshStateSized63*))(Il2CppBase() + 0x45BD4B4))(this);
	}

};

}
