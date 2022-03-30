#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MechUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MechUpdate"));
	}

	template <typename T = uintptr_t> T& updatedMountPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T UpdateMount() {
		return ((T (*)(MechUpdate*))(Il2CppBase() + 0x41E6E74))(this);
	}

};

}
