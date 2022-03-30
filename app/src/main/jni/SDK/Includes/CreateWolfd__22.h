#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateWolfd22
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateWolf>d__22"));
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
	template <typename T = Il2CppVector3> T& tmp_create_pos15__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& tmp_create_pos25__3() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateWolfd22*))(Il2CppBase() + 0x1F30B40))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateWolfd22*))(Il2CppBase() + 0x1F30B44))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateWolfd22*))(Il2CppBase() + 0x1F315E8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateWolfd22*))(Il2CppBase() + 0x1F315F0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateWolfd22*))(Il2CppBase() + 0x1F31658))(this);
	}

};

}
