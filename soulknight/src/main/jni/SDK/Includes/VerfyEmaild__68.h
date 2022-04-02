#pragma once
#include "Il2Cpp/Il2Cpp.h"

class VerfyEmaild68
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<VerfyEmail>d__68"));
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
	template <typename T = Il2CppString*> T& email() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& request5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(VerfyEmaild68*))(Il2CppBase() + 0x42FC30C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(VerfyEmaild68*))(Il2CppBase() + 0x42FC3E8))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(VerfyEmaild68*))(Il2CppBase() + 0x42FC328))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(VerfyEmaild68*))(Il2CppBase() + 0x42FC8FC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(VerfyEmaild68*))(Il2CppBase() + 0x42FC904))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(VerfyEmaild68*))(Il2CppBase() + 0x42FC96C))(this);
	}

};

}
