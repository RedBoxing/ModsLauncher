#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor {

class AbstractBattleFactorHandler1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor", "AbstractBattleFactorHandler`1"));
	}


	template <typename T = void> T MakeEffect(Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(AbstractBattleFactorHandler1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, eventName, target);
	}
	template <typename T = uintptr_t> T get_Factor() {
		return ((T (*)(AbstractBattleFactorHandler1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T get_EventNames() {
		return ((T (*)(AbstractBattleFactorHandler1*))(Il2CppBase() + 0x0))(this);
	}

};

}
