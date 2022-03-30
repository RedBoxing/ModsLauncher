#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class AbstractFactorEffect1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "AbstractFactorEffect`1"));
	}


	template <typename T = void> T HandleEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* paramDic, uintptr_t target) {
		return ((T (*)(AbstractFactorEffect1*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x0))(this, eventName, paramDic, target);
	}
	template <typename T = void> T HandleEvent_1(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* paramDic, uintptr_t target) {
		return ((T (*)(AbstractFactorEffect1*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x0))(this, eventName, paramDic, target);
	}

};

}
