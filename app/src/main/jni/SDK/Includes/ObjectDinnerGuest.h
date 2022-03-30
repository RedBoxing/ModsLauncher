#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectDinnerGuest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectDinnerGuest"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& animators() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectDinnerGuest*))(Il2CppBase() + 0x1D547E4))(this);
	}
	template <typename T = void> T ChangeSkin() {
		return ((T (*)(ObjectDinnerGuest*))(Il2CppBase() + 0x1D54840))(this);
	}

};

}
