#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SaveLoadDataTestd7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SaveLoadDataTest>d__7"));
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
	template <typename T = uintptr_t> T& testScene5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& validate_char_list5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& validate_pet_list5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SaveLoadDataTestd7*))(Il2CppBase() + 0x26E3548))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SaveLoadDataTestd7*))(Il2CppBase() + 0x26E354C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SaveLoadDataTestd7*))(Il2CppBase() + 0x26E39DC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SaveLoadDataTestd7*))(Il2CppBase() + 0x26E39E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SaveLoadDataTestd7*))(Il2CppBase() + 0x26E3A4C))(this);
	}

};

}
