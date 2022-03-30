#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HiddenLevelBuff {

class HiddenLevelDamageListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HiddenLevelBuff", "HiddenLevelDamageListener"));
	}

	template <typename T = Il2CppString*> T& getHurtKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& rebornKey() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& troopDeadKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_GetHurtDropDownList() {
		return ((T (*)(HiddenLevelDamageListener*))(Il2CppBase() + 0x1A35FD4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RebornDropDownList() {
		return ((T (*)(HiddenLevelDamageListener*))(Il2CppBase() + 0x1A36080))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TroopDeadDopDownList() {
		return ((T (*)(HiddenLevelDamageListener*))(Il2CppBase() + 0x1A3612C))(this);
	}
	template <typename T = bool> static T get_IsSingleGameOrServer() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A361D8))(0);
	}
	template <typename T = bool> static T get_IsMultiGameServer() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A362AC))(0);
	}
	template <typename T = int32_t> static T get_RoundIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A36380))(0);
	}
	template <typename T = bool> T get_IsTroopMode() {
		return ((T (*)(HiddenLevelDamageListener*))(Il2CppBase() + 0x1A36408))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HiddenLevelDamageListener*))(Il2CppBase() + 0x1A36480))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HiddenLevelDamageListener*))(Il2CppBase() + 0x1A36660))(this);
	}
	template <typename T = void> T OnHurtHp(uintptr_t e) {
		return ((T (*)(HiddenLevelDamageListener*, uintptr_t))(Il2CppBase() + 0x1A36840))(this, e);
	}
	template <typename T = void> T OnReborn(uintptr_t e) {
		return ((T (*)(HiddenLevelDamageListener*, uintptr_t))(Il2CppBase() + 0x1A36978))(this, e);
	}
	template <typename T = void> T OnUpdateHp(uintptr_t e) {
		return ((T (*)(HiddenLevelDamageListener*, uintptr_t))(Il2CppBase() + 0x1A36AB0))(this, e);
	}
	template <typename T = void> T OnTroopDead(uintptr_t e) {
		return ((T (*)(HiddenLevelDamageListener*, uintptr_t))(Il2CppBase() + 0x1A36BF8))(this, e);
	}

};

}
