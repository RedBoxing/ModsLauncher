#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor.Level {

class LevelBattleFactorConst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor.Level", "LevelBattleFactorConst"));
	}

	template <typename T = Il2CppString*> static T& GameToNextLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MakeBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
