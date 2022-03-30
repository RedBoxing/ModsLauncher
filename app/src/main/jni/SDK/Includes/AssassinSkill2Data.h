#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AssassinSkill2Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssassinSkill2Data"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& anim_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& use_normal_color() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& show_effects() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& delay_create_phantom() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
