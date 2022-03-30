#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBattleTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBattleTrigger"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& battleEndTargetCondition() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& conditionParam() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _conditionChecker() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = bool> T get_isBattleEnd() {
		return ((T (*)(ArtifactBattleTrigger*))(Il2CppBase() + 0x1C98854))(this);
	}
	template <typename T = bool> T get_hasConditionParam() {
		return ((T (*)(ArtifactBattleTrigger*))(Il2CppBase() + 0x1C988BC))(this);
	}
	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactBattleTrigger*, uintptr_t))(Il2CppBase() + 0x1C98924))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactBattleTrigger*))(Il2CppBase() + 0x1C98C20))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t data) {
		return ((T (*)(ArtifactBattleTrigger*, uintptr_t))(Il2CppBase() + 0x1C98C90))(this, data);
	}
	template <typename T = void> T CreateConditionChecker() {
		return ((T (*)(ArtifactBattleTrigger*))(Il2CppBase() + 0x1C98AD8))(this);
	}
	template <typename T = void> T DestroyConditionChecker() {
		return ((T (*)(ArtifactBattleTrigger*))(Il2CppBase() + 0x1C98D58))(this);
	}
	template <typename T = void> T OnEquipb__10_0() {
		return ((T (*)(ArtifactBattleTrigger*))(Il2CppBase() + 0x1C98DD8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactBattleTrigger*, uintptr_t))(Il2CppBase() + 0x1C98EEC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactBattleTrigger*))(Il2CppBase() + 0x1C98EF4))(this);
	}

};

}
