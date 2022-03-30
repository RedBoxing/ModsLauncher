#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MoveUpdated3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MoveUpdate>d__3"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(MoveUpdated3*))(Il2CppBase() + 0x238A0C8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(MoveUpdated3*))(Il2CppBase() + 0x238A0CC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(MoveUpdated3*))(Il2CppBase() + 0x238A0E4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(MoveUpdated3*))(Il2CppBase() + 0x238A0EC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(MoveUpdated3*))(Il2CppBase() + 0x238A154))(this);
	}

};

}
