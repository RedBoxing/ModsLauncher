#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Broadcastd9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Broadcast>d__9"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& subIp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& msg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& len() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& i5__2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Broadcastd9*))(Il2CppBase() + 0x4628CF4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Broadcastd9*))(Il2CppBase() + 0x4628CF8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Broadcastd9*))(Il2CppBase() + 0x46291DC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Broadcastd9*))(Il2CppBase() + 0x46291E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Broadcastd9*))(Il2CppBase() + 0x462924C))(this);
	}

};

}
