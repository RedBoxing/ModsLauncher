#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateWolfd2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateWolf>d__2"));
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
	template <typename T = Il2CppVector3> T& tmpCreatePos15__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& tmpCreatePos25__3() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateWolfd2*))(Il2CppBase() + 0x18C6038))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateWolfd2*))(Il2CppBase() + 0x18C603C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateWolfd2*))(Il2CppBase() + 0x18C6A90))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateWolfd2*))(Il2CppBase() + 0x18C6A98))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateWolfd2*))(Il2CppBase() + 0x18C6B00))(this);
	}

};

}
