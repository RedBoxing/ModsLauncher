#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RestoreArmor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RestoreArmor"));
	}

	template <typename T = uintptr_t> T& _counter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _hasReleased() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(RestoreArmor*))(Il2CppBase() + 0x1B94D30))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RestoreArmor*))(Il2CppBase() + 0x1B94E78))(this);
	}

};

}
