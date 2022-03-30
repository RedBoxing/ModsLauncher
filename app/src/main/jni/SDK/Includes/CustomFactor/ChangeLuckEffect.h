#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class ChangeLuckEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "ChangeLuckEffect"));
	}

	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> static T& LuckLevelParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& ParamConfigs() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_EffectName() {
		return ((T (*)(ChangeLuckEffect*))(Il2CppBase() + 0x427E7F8))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_ParamConfigs() {
		return ((T (*)(ChangeLuckEffect*))(Il2CppBase() + 0x427E800))(this);
	}
	template <typename T = void> T HandleEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* paramDic, uintptr_t target) {
		return ((T (*)(ChangeLuckEffect*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x427E808))(this, eventName, paramDic, target);
	}

};

}
