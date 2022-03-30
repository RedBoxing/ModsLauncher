#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcMercenaryController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcMercenaryController"));
	}

	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& is_char() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& is_phantom() {
		return *(T*)((uintptr_t)this + 0x181);
	}
	template <typename T = bool> T& isSummon() {
		return *(T*)((uintptr_t)this + 0x182);
	}
	template <typename T = uintptr_t> T& hand_tf() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& bodyCollider() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppString*> T& talk_get_mercenary() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& talk_fire() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& talk_finish() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppString*> T& talk_dead() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppString*> T& talk_pick_weapon() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& onPetUpdate() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = void*> T& OnGetMercenary() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& aiLevel() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& shadow_lock() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& currentLevel() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& escape_from_cage() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = uintptr_t> T& hpBar() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& _info() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = float> T& _weaponAnimSpeed() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = float> T& _attackSpeed() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = bool> T& is_melee() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = float> T& atk_range() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = int32_t> T& atk_mode() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = float> T& focus_time() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = int32_t> T& back_min() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = int32_t> T& back_max() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = bool> T& is_charge() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = Il2CppDictionary<uintptr_t, float>*> T& weapon2HoldTime() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = bool> T& just_pick() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = uintptr_t> T& target_weapon() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& validWeaponScript() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& validWeaponType() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = int32_t> T& perLevelHp() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = float> T& perLevelAtkCd() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = void*> T& _effectBuffs() {
		return *(T*)((uintptr_t)this + 0x250);
	}

	template <typename T = void> T add_onPetUpdate(uintptr_t value) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x452B8A0))(this, value);
	}
	template <typename T = void> T remove_onPetUpdate(uintptr_t value) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x452B990))(this, value);
	}
	template <typename T = void> T add_OnGetMercenary(void* value) {
		return ((T (*)(NpcMercenaryController*, void*))(Il2CppBase() + 0x4528B90))(this, value);
	}
	template <typename T = void> T remove_OnGetMercenary(void* value) {
		return ((T (*)(NpcMercenaryController*, void*))(Il2CppBase() + 0x452BA80))(this, value);
	}
	template <typename T = uintptr_t> T get_info() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452BB70))(this);
	}
	template <typename T = void> T set_info(uintptr_t value) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x452BDA4))(this, value);
	}
	template <typename T = float> T get_attackSpeed() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452BE18))(this);
	}
	template <typename T = void> T set_attackSpeed(float value) {
		return ((T (*)(NpcMercenaryController*, float))(Il2CppBase() + 0x452BE78))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452BFD8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452C314))(this);
	}
	template <typename T = void> T InitBuffs() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452C608))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452CF3C))(this);
	}
	template <typename T = void> T SetInfo(uintptr_t info) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x452D654))(this, info);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452D934))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452DCAC))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452E740))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452EE20))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452EF24))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(NpcMercenaryController*, int32_t))(Il2CppBase() + 0x452F40C))(this, damage);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452F648))(this);
	}
	template <typename T = void> T SyncDead(uintptr_t source) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x452FC7C))(this, source);
	}
	template <typename T = void> T SyncDeadNoSource() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452FCFC))(this);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452FD68))(this);
	}
	template <typename T = void> T GetMercenary() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4530260))(this);
	}
	template <typename T = void> T TalkGetMercenary() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4530740))(this);
	}
	template <typename T = void> T GetFree() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x453081C))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(NpcMercenaryController*, int32_t))(Il2CppBase() + 0x45308E0))(this, game_state);
	}
	template <typename T = bool> T HitWall(Il2CppVector2 direction) {
		return ((T (*)(NpcMercenaryController*, Il2CppVector2))(Il2CppBase() + 0x4530DB8))(this, direction);
	}
	template <typename T = bool> T get_needScout() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4530FDC))(this);
	}
	template <typename T = void> T MeleeScout() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452D9AC))(this);
	}
	template <typename T = void> T MeleeRunReflection() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452DD24))(this);
	}
	template <typename T = void> T MeleeShootReflection(uintptr_t shootHand, bool forceAttack) {
		return ((T (*)(NpcMercenaryController*, uintptr_t, bool))(Il2CppBase() + 0x452E7BC))(this, shootHand, forceAttack);
	}
	template <typename T = void> T RemoteScout() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452DB2C))(this);
	}
	template <typename T = void> T RemoteRunReflection() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452E1F8))(this);
	}
	template <typename T = void> T RemoteShootReflection(uintptr_t shootHand, bool forceAttack) {
		return ((T (*)(NpcMercenaryController*, uintptr_t, bool))(Il2CppBase() + 0x452EA70))(this, shootHand, forceAttack);
	}
	template <typename T = float> T GetHoldTime(uintptr_t weapon) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x4531058))(this, weapon);
	}
	template <typename T = void> T ResetIsCharge(uintptr_t weapon) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x45313B4))(this, weapon);
	}
	template <typename T = void> T EndAtk() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4531508))(this);
	}
	template <typename T = float> T GetAttackCD() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x45315E4))(this);
	}
	template <typename T = bool> T CanPickWeapon(uintptr_t weapon) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x453164C))(this, weapon);
	}
	template <typename T = void> T StartPickWeapon(uintptr_t target_weapon) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x4531874))(this, target_weapon);
	}
	template <typename T = void> T StopPickWeapon(uintptr_t target_weapon) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x4531AC8))(this, target_weapon);
	}
	template <typename T = uintptr_t> T PeakingWeapon(uintptr_t target_weapon) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x45319E8))(this, target_weapon);
	}
	template <typename T = void> T PickWeapon(uintptr_t target_weapon) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x4531C14))(this, target_weapon);
	}
	template <typename T = uintptr_t> T EndJustPick() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4531DF0))(this);
	}
	template <typename T = void> T SyncPickWeapon(uintptr_t weapon) {
		return ((T (*)(NpcMercenaryController*, uintptr_t))(Il2CppBase() + 0x4531ED0))(this, weapon);
	}
	template <typename T = void> T ResetLevel() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452CA74))(this);
	}
	template <typename T = void> T UpdateInfo() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4531F54))(this);
	}
	template <typename T = void> T UpdateWeaponInfo() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4532004))(this);
	}
	template <typename T = uintptr_t> T GetWeaponInfo() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x45320B0))(this);
	}
	template <typename T = void> T DropWeapon() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x45306CC))(this);
	}
	template <typename T = bool> T HoldWeapon(Il2CppString* weaponName) {
		return ((T (*)(NpcMercenaryController*, Il2CppString*))(Il2CppBase() + 0x4532368))(this, weaponName);
	}
	template <typename T = bool> T HasWeapon(Il2CppString* weaponName) {
		return ((T (*)(NpcMercenaryController*, Il2CppString*))(Il2CppBase() + 0x45323F8))(this, weaponName);
	}
	template <typename T = void> T StatisticItem() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x452C97C))(this);
	}
	template <typename T = void> T ShowHpBar(bool isShow) {
		return ((T (*)(NpcMercenaryController*, bool))(Il2CppBase() + 0x4532488))(this, isShow);
	}
	template <typename T = void> T OnBuffChanged(uintptr_t buff, bool isGet) {
		return ((T (*)(NpcMercenaryController*, uintptr_t, bool))(Il2CppBase() + 0x4532594))(this, buff, isGet);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4532A34))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4532A3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4532A44))(this);
	}
	template <typename T = void> T iFixBaseProxy_Reborn() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4532A4C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(NpcMercenaryController*, int32_t))(Il2CppBase() + 0x4532A54))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4532A5C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4532A64))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4532A6C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(NpcMercenaryController*))(Il2CppBase() + 0x4532A74))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(NpcMercenaryController*, int32_t))(Il2CppBase() + 0x4532A7C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_HoldWeapon(Il2CppString* P0) {
		return ((T (*)(NpcMercenaryController*, Il2CppString*))(Il2CppBase() + 0x4532A84))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_HasWeapon(Il2CppString* P0) {
		return ((T (*)(NpcMercenaryController*, Il2CppString*))(Il2CppBase() + 0x4532A8C))(this, P0);
	}

};

}
