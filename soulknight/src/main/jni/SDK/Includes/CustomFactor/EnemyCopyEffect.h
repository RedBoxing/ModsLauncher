#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class EnemyCopyEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "EnemyCopyEffect"));
	}

	template <typename T = Il2CppString*> static T& ProbabilityParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MaxCopyTimesParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ShowDelayParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& ParamConfigs() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_EffectName() {
		return ((T (*)(EnemyCopyEffect*))(Il2CppBase() + 0x427FB74))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_ParamConfigs() {
		return ((T (*)(EnemyCopyEffect*))(Il2CppBase() + 0x427FB7C))(this);
	}
	template <typename T = void> T HandleEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* paramDic, uintptr_t target) {
		return ((T (*)(EnemyCopyEffect*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x427FB84))(this, eventName, paramDic, target);
	}
	template <typename T = uintptr_t> static T InstantiateNewEnemy(uintptr_t target, uintptr_t parentTag, uintptr_t originEnemy) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4280094))(0, target, parentTag, originEnemy);
	}
	template <typename T = void> T NewEnemyDelayShow(uintptr_t newEnemy, uintptr_t originEnemy, Il2CppDictionary<Il2CppString*, Il2CppString*>* paramDic) {
		return ((T (*)(EnemyCopyEffect*, uintptr_t, uintptr_t, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x428056C))(this, newEnemy, originEnemy, paramDic);
	}
	template <typename T = bool> T CanCopyEnemy(uintptr_t enemy, int32_t maxCopyTimes, uintptr_t* copyTag) {
		return ((T (*)(EnemyCopyEffect*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x427FE48))(this, enemy, maxCopyTimes, copyTag);
	}
	template <typename T = bool> T CanCopyEnemyCustom(uintptr_t enemy) {
		return ((T (*)(EnemyCopyEffect*, uintptr_t))(Il2CppBase() + 0x427FF78))(this, enemy);
	}

};

}
