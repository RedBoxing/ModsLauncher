#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreatePetMultid39
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreatePetMulti>d__39"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& center5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& index5__3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& totalCount5__4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& pet5__5() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& idx5__6() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreatePetMultid39*))(Il2CppBase() + 0x1C4DC50))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreatePetMultid39*))(Il2CppBase() + 0x1C4DC54))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreatePetMultid39*))(Il2CppBase() + 0x1C4E924))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreatePetMultid39*))(Il2CppBase() + 0x1C4E92C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreatePetMultid39*))(Il2CppBase() + 0x1C4E994))(this);
	}

};

}
