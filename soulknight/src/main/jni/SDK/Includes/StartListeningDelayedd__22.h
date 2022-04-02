#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StartListeningDelayedd22
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartListeningDelayed>d__22"));
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
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& keyboardMap() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& actionElementMapToReplaceId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mouseMap() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(StartListeningDelayedd22*))(Il2CppBase() + 0x2682E98))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(StartListeningDelayedd22*))(Il2CppBase() + 0x2682E9C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(StartListeningDelayedd22*))(Il2CppBase() + 0x26832D0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(StartListeningDelayedd22*))(Il2CppBase() + 0x26832D8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StartListeningDelayedd22*))(Il2CppBase() + 0x2683340))(this);
	}

};

}
