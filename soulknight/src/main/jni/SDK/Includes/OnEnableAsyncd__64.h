#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnEnableAsyncd64
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnEnableAsync>d__64"));
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
		return ((T (*)(OnEnableAsyncd64*))(Il2CppBase() + 0x1BE5528))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(OnEnableAsyncd64*))(Il2CppBase() + 0x1BE552C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(OnEnableAsyncd64*))(Il2CppBase() + 0x1BE570C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(OnEnableAsyncd64*))(Il2CppBase() + 0x1BE5714))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(OnEnableAsyncd64*))(Il2CppBase() + 0x1BE577C))(this);
	}

};

}
