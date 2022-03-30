#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillRoarModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillRoarModel"));
	}

	template <typename T = uintptr_t> T& roarClicp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& roarGO() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& roarEffect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& bossMouthPoint() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

}
