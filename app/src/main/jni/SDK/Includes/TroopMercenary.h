#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopMercenary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopMercenary"));
	}

	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& master() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uintptr_t> T& troopAttribute() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = uintptr_t> T& heroType() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uintptr_t> T& clip_hit() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& weapon_talk() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& troopBar() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uintptr_t> T& troopSkill() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = uintptr_t> T& onShoot() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = uintptr_t> T& equipmentRoot() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = bool> T& isEx() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = uintptr_t> T& exMercenary() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& shadowLockColors() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = bool> T& customMoving() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = bool> T& isGathering() {
		return *(T*)((uintptr_t)this + 0x2C1);
	}
	template <typename T = bool> T& canHurt() {
		return *(T*)((uintptr_t)this + 0x2C2);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& oneshot_shields() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = bool> T& reborning() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& mount() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& trigeminyEquips() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}

	template <typename T = int32_t> T get_weaponLevel() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x440D388))(this);
	}
	template <typename T = bool> T get_needScout() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x440FA60))(this);
	}
	template <typename T = uintptr_t> T get_skillInfo() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x440FAC0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x440FB64))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x440FCB8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x440FD1C))(this);
	}
	template <typename T = uintptr_t> T Gathering(bool gather) {
		return ((T (*)(TroopMercenary*, bool))(Il2CppBase() + 0x4410100))(this, gather);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4410210))(this);
	}
	template <typename T = void> T ResetIsCharge(uintptr_t weapon) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x441028C))(this, weapon);
	}
	template <typename T = uintptr_t> T CreatePetBar() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4410314))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4410380))(this);
	}
	template <typename T = void> T SetInfo(uintptr_t info) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x4410558))(this, info);
	}
	template <typename T = void> T UpdateInfo() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4410ADC))(this);
	}
	template <typename T = void> T GetMercenary() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4410C8C))(this);
	}
	template <typename T = void> T Fire() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x440CB18))(this);
	}
	template <typename T = void> T FireTalk() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44113DC))(this);
	}
	template <typename T = void> T SetMaster(uintptr_t masterTransform) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x44114CC))(this, masterTransform);
	}
	template <typename T = void> T PickWeapon(uintptr_t weapon) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x44115CC))(this, weapon);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(TroopMercenary*, int32_t))(Il2CppBase() + 0x44117AC))(this, damage);
	}
	template <typename T = void> T HurtArmor(int32_t damage) {
		return ((T (*)(TroopMercenary*, int32_t))(Il2CppBase() + 0x4411CC4))(this, damage);
	}
	template <typename T = void> T HurtHp(int32_t damage) {
		return ((T (*)(TroopMercenary*, int32_t))(Il2CppBase() + 0x4411DE8))(this, damage);
	}
	template <typename T = void> T StartHitTrigger(float time) {
		return ((T (*)(TroopMercenary*, float))(Il2CppBase() + 0x4411ECC))(this, time);
	}
	template <typename T = void> T EndHitTrigger() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4411F50))(this);
	}
	template <typename T = bool> T InLowHp(float hpFactor) {
		return ((T (*)(TroopMercenary*, float))(Il2CppBase() + 0x4411FC0))(this, hpFactor);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4412090))(this);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44123D8))(this);
	}
	template <typename T = void> T StartReborn(float lifeFactor) {
		return ((T (*)(TroopMercenary*, float))(Il2CppBase() + 0x4412688))(this, lifeFactor);
	}
	template <typename T = void> T CheckAllDead() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44121B0))(this);
	}
	template <typename T = void> T AllDead() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4412960))(this);
	}
	template <typename T = void> T ShowRebornWindow() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4412B1C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindTroops(float range) {
		return ((T (*)(TroopMercenary*, float))(Il2CppBase() + 0x4412D5C))(this, range);
	}
	template <typename T = void> T UpdateShadowLock() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x440C92C))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(TroopMercenary*, int32_t))(Il2CppBase() + 0x4412F58))(this, game_state);
	}
	template <typename T = bool> T CheckTrigeminy() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4411080))(this);
	}
	template <typename T = void> T Trigeminy(uintptr_t mainMercenary) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x44131DC))(this, mainMercenary);
	}
	template <typename T = void> T CreateExMercenary() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4413670))(this);
	}
	template <typename T = void> T RemoveSelf() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4413BC8))(this);
	}
	template <typename T = void> T AddEquipment(uintptr_t weapon, bool playAnim) {
		return ((T (*)(TroopMercenary*, uintptr_t, bool))(Il2CppBase() + 0x44107E4))(this, weapon, playAnim);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEquipmentsName() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44134E4))(this);
	}
	template <typename T = bool> T CanPickWeapon(uintptr_t weapon) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x4413CE0))(this, weapon);
	}
	template <typename T = bool> T FitWeaponType(uintptr_t weapon) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x4413DD0))(this, weapon);
	}
	template <typename T = bool> T FitWeaponLevel(uintptr_t weapon) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x4413F84))(this, weapon);
	}
	template <typename T = void> T OnBuffChanged(uintptr_t buff, bool isGet) {
		return ((T (*)(TroopMercenary*, uintptr_t, bool))(Il2CppBase() + 0x4414070))(this, buff, isGet);
	}
	template <typename T = bool> T iFixBaseProxy_get_needScout() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44146B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44146BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44146C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44146CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44146D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ResetIsCharge(uintptr_t P0) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x44146DC))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreatePetBar() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44146E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetInfo(uintptr_t P0) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x44146EC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44146F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetMercenary() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x44146FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetMaster(uintptr_t P0) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x4414704))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_PickWeapon(uintptr_t P0) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x441470C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(TroopMercenary*, int32_t))(Il2CppBase() + 0x4414714))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_StartHitTrigger(float P0) {
		return ((T (*)(TroopMercenary*, float))(Il2CppBase() + 0x441471C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_EndHitTrigger() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4414724))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x441472C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Reborn() {
		return ((T (*)(TroopMercenary*))(Il2CppBase() + 0x4414734))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(TroopMercenary*, int32_t))(Il2CppBase() + 0x441473C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanPickWeapon(uintptr_t P0) {
		return ((T (*)(TroopMercenary*, uintptr_t))(Il2CppBase() + 0x4414744))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnBuffChanged(uintptr_t P0, bool P1) {
		return ((T (*)(TroopMercenary*, uintptr_t, bool))(Il2CppBase() + 0x441474C))(this, P0, P1);
	}

};

}
