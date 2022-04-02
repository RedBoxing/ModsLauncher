#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateNpcd31
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateNpc>d__31"));
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
	template <typename T = int32_t> T& i5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateNpcd31*))(Il2CppBase() + 0x186DEFC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateNpcd31*))(Il2CppBase() + 0x186DF00))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateNpcd31*))(Il2CppBase() + 0x186E0B8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateNpcd31*))(Il2CppBase() + 0x186E0C0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateNpcd31*))(Il2CppBase() + 0x186E128))(this);
	}

};

}
