#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class ISkillStateUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "ISkillStateUpdate"));
	}


	template <typename T = void> T UpdateSkillState() {
		return ((T (*)(ISkillStateUpdate*))(Il2CppBase() + 0x0))(this);
	}

};

}
