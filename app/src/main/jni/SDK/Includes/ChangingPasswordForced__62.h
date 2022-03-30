#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangingPasswordForced62
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangingPasswordForce>d__62"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& account() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& newpassword() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& smdCode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& request5__2() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ChangingPasswordForced62*))(Il2CppBase() + 0x42F706C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ChangingPasswordForced62*))(Il2CppBase() + 0x42F7148))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(ChangingPasswordForced62*))(Il2CppBase() + 0x42F7088))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ChangingPasswordForced62*))(Il2CppBase() + 0x42F77F4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ChangingPasswordForced62*))(Il2CppBase() + 0x42F77FC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ChangingPasswordForced62*))(Il2CppBase() + 0x42F7864))(this);
	}

};

}
