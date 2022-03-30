#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGGameSceneManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGGameSceneManager"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& temp_objects_parent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& net_controllers() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& pet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mercenaries() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& game_state() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& GSDelegate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& select_hero() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& FactorRewardPosYFixed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& battleStartTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mountsInGainMountFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T add_GSDelegate(uintptr_t value) {
		return ((T (*)(RGGameSceneManager*, uintptr_t))(Il2CppBase() + 0x1C48820))(this, value);
	}
	template <typename T = void> T remove_GSDelegate(uintptr_t value) {
		return ((T (*)(RGGameSceneManager*, uintptr_t))(Il2CppBase() + 0x1C4890C))(this, value);
	}
	template <typename T = bool> T get_isLevelMode() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C489F8))(this);
	}
	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C40708))(0);
	}
	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C42038))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C48A98))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C48F58))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C49084))(this);
	}
	template <typename T = void> T OnBattleStart(uintptr_t e) {
		return ((T (*)(RGGameSceneManager*, uintptr_t))(Il2CppBase() + 0x1C491B0))(this, e);
	}
	template <typename T = void> T OnBattleEnd(uintptr_t e) {
		return ((T (*)(RGGameSceneManager*, uintptr_t))(Il2CppBase() + 0x1C4922C))(this, e);
	}
	template <typename T = void> T SetupInstance() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C48C2C))(this);
	}
	template <typename T = void> T CreateTempRoot() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C49350))(this);
	}
	template <typename T = void> T LoadMapManager() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C494C4))(this);
	}
	template <typename T = void> T CreatePlayer() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C49644))(this);
	}
	template <typename T = void> T CreateMultiRoomPlayers() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4A4C4))(this);
	}
	template <typename T = void> T CreateMultiPlayer() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4A6FC))(this);
	}
	template <typename T = void> T SetUpJoyController() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4B604))(this);
	}
	template <typename T = void> T ShowTeamInfoPanel() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4B67C))(this);
	}
	template <typename T = void> static T CreateEffectShowUp(Il2CppVector3 effectPos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x1C4B6F4))(0, effectPos);
	}
	template <typename T = uintptr_t> static T CreateMountIfGainMountFactorValid(Il2CppVector3 mountPos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x1C4B8EC))(0, mountPos);
	}
	template <typename T = uintptr_t> static T CreateWeaponIfGainWeaponFactorValid(Il2CppVector3 weaponPos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x1C4B9F8))(0, weaponPos);
	}
	template <typename T = void> T CreateRewardIfFactorValid(Il2CppVector3 rewardPos) {
		return ((T (*)(RGGameSceneManager*, Il2CppVector3))(Il2CppBase() + 0x1C49F28))(this, rewardPos);
	}
	template <typename T = uintptr_t> T CreatePet(Il2CppString* path, Il2CppVector2 position) {
		return ((T (*)(RGGameSceneManager*, Il2CppString*, Il2CppVector2))(Il2CppBase() + 0x1C4BB04))(this, path, position);
	}
	template <typename T = void> T CreatePet_1() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4BF14))(this);
	}
	template <typename T = uintptr_t> T CreatePetMulti(float delay) {
		return ((T (*)(RGGameSceneManager*, float))(Il2CppBase() + 0x1C4B524))(this, delay);
	}
	template <typename T = uintptr_t> T GetLocalController() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4CABC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAnotherController() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4CB80))(this);
	}
	template <typename T = void> T ReadyGame() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4CC44))(this);
	}
	template <typename T = void> T StartGame() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4CCA0))(this);
	}
	template <typename T = void> T GameTimeOut() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4CCFC))(this);
	}
	template <typename T = void> T FinishGame() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4CD58))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t state) {
		return ((T (*)(RGGameSceneManager*, int32_t))(Il2CppBase() + 0x1C4CDB4))(this, state);
	}
	template <typename T = void> T OnAfterCreatePlayer() {
		return ((T (*)(RGGameSceneManager*))(Il2CppBase() + 0x1C4A0DC))(this);
	}

};

}
