#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class EquipWeaponEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "EquipWeaponEffect"));
	}

	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> static T& WeaponNameParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& ParamConfigs() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_EffectName() {
		return ((T (*)(EquipWeaponEffect*))(Il2CppBase() + 0x4280E08))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_ParamConfigs() {
		return ((T (*)(EquipWeaponEffect*))(Il2CppBase() + 0x4280E10))(this);
	}
	template <typename T = void> T HandleEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* paramDic, uintptr_t target) {
		return ((T (*)(EquipWeaponEffect*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x4280E18))(this, eventName, paramDic, target);
	}

};

}
