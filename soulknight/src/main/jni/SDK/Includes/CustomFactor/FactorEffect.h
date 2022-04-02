#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class FactorEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "FactorEffect"));
	}


	template <typename T = void> T HandleEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* paramDic, uintptr_t target) {
		return ((T (*)(FactorEffect*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x0))(this, eventName, paramDic, target);
	}
	template <typename T = Il2CppString*> T get_EffectName() {
		return ((T (*)(FactorEffect*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_ParamConfigs() {
		return ((T (*)(FactorEffect*))(Il2CppBase() + 0x0))(this);
	}

};

}
