#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SyncCurrentd29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SyncCurrent>d__29"));
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

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SyncCurrentd29*))(Il2CppBase() + 0x462C26C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SyncCurrentd29*))(Il2CppBase() + 0x462C270))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SyncCurrentd29*))(Il2CppBase() + 0x462C9AC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SyncCurrentd29*))(Il2CppBase() + 0x462C9B4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SyncCurrentd29*))(Il2CppBase() + 0x462CA1C))(this);
	}

};

}
