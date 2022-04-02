#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor {

class BattleFactorChecker1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor", "BattleFactorChecker`1"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<void*>*>*> T& HandlerDic() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<void*>*>*> T get_HandlerDic() {
		return ((T (*)(BattleFactorChecker1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T InitHandler(void* handlers) {
		return ((T (*)(BattleFactorChecker1*, void*))(Il2CppBase() + 0x0))(this, handlers);
	}
	template <typename T = void> T ProcessEvent(uintptr_t battleData, Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(BattleFactorChecker1*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, battleData, eventName, target);
	}
	template <typename T = void> T ProcessEvent_1(uintptr_t battleFactor, Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(BattleFactorChecker1*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, battleFactor, eventName, target);
	}

};

}
