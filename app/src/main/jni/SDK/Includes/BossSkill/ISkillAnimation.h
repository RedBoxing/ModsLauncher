#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class ISkillAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "ISkillAnimation"));
	}


	template <typename T = void> T SkillStart() {
		return ((T (*)(ISkillAnimation*))(Il2CppBase() + 0x0))(this);
	}

};

}
