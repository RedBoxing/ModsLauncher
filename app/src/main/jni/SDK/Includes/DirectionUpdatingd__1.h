#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DirectionUpdatingd1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DirectionUpdating>d__1"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DirectionUpdatingd1*))(Il2CppBase() + 0x45A61A4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DirectionUpdatingd1*))(Il2CppBase() + 0x45A61A8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DirectionUpdatingd1*))(Il2CppBase() + 0x45A61E4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DirectionUpdatingd1*))(Il2CppBase() + 0x45A61EC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DirectionUpdatingd1*))(Il2CppBase() + 0x45A6254))(this);
	}

};

}
