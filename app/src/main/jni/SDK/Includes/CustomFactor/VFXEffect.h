#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class VFXEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "VFXEffect"));
	}

	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& ParamConfigs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& FxNameParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_EffectName() {
		return ((T (*)(VFXEffect*))(Il2CppBase() + 0x42841B8))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_ParamConfigs() {
		return ((T (*)(VFXEffect*))(Il2CppBase() + 0x42841C0))(this);
	}
	template <typename T = void> T HandleEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* paramDic, uintptr_t target) {
		return ((T (*)(VFXEffect*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x42841C8))(this, eventName, paramDic, target);
	}

};

}
