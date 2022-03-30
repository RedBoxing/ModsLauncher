#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateCharactord28
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateCharactor>d__28"));
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
	template <typename T = uintptr_t> T& hero5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& skinIndex5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& pet5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateCharactord28*))(Il2CppBase() + 0x186C7DC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateCharactord28*))(Il2CppBase() + 0x186C7E0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateCharactord28*))(Il2CppBase() + 0x186D2D4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateCharactord28*))(Il2CppBase() + 0x186D2DC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateCharactord28*))(Il2CppBase() + 0x186D344))(this);
	}

};

}
