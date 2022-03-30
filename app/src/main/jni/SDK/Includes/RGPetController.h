#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGPetController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGPetController"));
	}

	template <typename T = bool> T& stayInAir() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& roleAttributeProxy() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppVector2> T& move_direction() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& min_distance() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& reply_time1() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& reply_time2() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& this_reply_time() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& scout_rate() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& atk_cd() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& summon() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& can_atk() {
		return *(T*)((uintptr_t)this + 0x129);
	}
	template <typename T = uintptr_t> T& master_tf() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& _facing() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& min_follow_distance() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& max_follow_distance() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& OnAttackStart() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppVector3> T& FacingLeftScale() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppVector3> T& FacingRightScale() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& ignoreAllAlone() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& onDestroyCb() {
		return *(T*)((uintptr_t)this + 0x170);
	}

	template <typename T = bool> T get_stayInAir() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7C490))(this);
	}
	template <typename T = void> T set_stayInAir(bool value) {
		return ((T (*)(RGPetController*, bool))(Il2CppBase() + 0x1B7C498))(this, value);
	}
	template <typename T = uintptr_t> T get_role_attribute() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7C4A4))(this);
	}
	template <typename T = uintptr_t> T get_attribute() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7C50C))(this);
	}
	template <typename T = void> T set_attribute(uintptr_t value) {
		return ((T (*)(RGPetController*, uintptr_t))(Il2CppBase() + 0x1B7C5E4))(this, value);
	}
	template <typename T = int32_t> T get_facing() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7C658))(this);
	}
	template <typename T = void> T set_facing(int32_t value) {
		return ((T (*)(RGPetController*, int32_t))(Il2CppBase() + 0x1B7C6B8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7C72C))(this);
	}
	template <typename T = uintptr_t> T CreatePetBar() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7C818))(this);
	}
	template <typename T = void> T SetPetScale(float scale) {
		return ((T (*)(RGPetController*, float))(Il2CppBase() + 0x1B7C8E8))(this, scale);
	}
	template <typename T = void> T StrengthenPetIfFactorValid() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7CA70))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7CC28))(this);
	}
	template <typename T = void> T ChangeSkin(uintptr_t skin) {
		return ((T (*)(RGPetController*, uintptr_t))(Il2CppBase() + 0x1B7D198))(this, skin);
	}
	template <typename T = void> T ChangeSkinWithAnimatorController(Il2CppString* animatorCtrlName) {
		return ((T (*)(RGPetController*, Il2CppString*))(Il2CppBase() + 0x1B7D258))(this, animatorCtrlName);
	}
	template <typename T = void> T Dizzy(float the_time) {
		return ((T (*)(RGPetController*, float))(Il2CppBase() + 0x1B7D314))(this, the_time);
	}
	template <typename T = void> T EndDizzy() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7D488))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7D4EC))(this);
	}
	template <typename T = void> T ReplyingHP() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7DA14))(this);
	}
	template <typename T = void> T Recovered() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7DC10))(this);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7DD48))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7DDB4))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7DFA4))(this);
	}
	template <typename T = void> T AtkProcess() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7E518))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7E7FC))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7E900))(this);
	}
	template <typename T = void> T TurnToCanAtk() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7EBB4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(RGPetController*, int32_t))(Il2CppBase() + 0x1B7EC18))(this, damage);
	}
	template <typename T = void> T StartHitTrigger(float time) {
		return ((T (*)(RGPetController*, float))(Il2CppBase() + 0x1B7EE70))(this, time);
	}
	template <typename T = void> T EndHitTrigger() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7EF80))(this);
	}
	template <typename T = void> T Escape() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7F044))(this);
	}
	template <typename T = void> T AddDelegate() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7F138))(this);
	}
	template <typename T = void> T RemoveDelegate() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7F2B0))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(RGPetController*, int32_t))(Il2CppBase() + 0x1B7F428))(this, game_state);
	}
	template <typename T = void> T TurnTo(Il2CppVector2 normal) {
		return ((T (*)(RGPetController*, Il2CppVector2))(Il2CppBase() + 0x1B7F4B8))(this, normal);
	}
	template <typename T = void> T HitBack() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7F5A8))(this);
	}
	template <typename T = void> T GetGray() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7F664))(this);
	}
	template <typename T = void> T GrayBack() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7F720))(this);
	}
	template <typename T = void> T SetMaster(uintptr_t masterTransform) {
		return ((T (*)(RGPetController*, uintptr_t))(Il2CppBase() + 0x1B7F7DC))(this, masterTransform);
	}
	template <typename T = void> T OnSkinChanged(int32_t index) {
		return ((T (*)(RGPetController*, int32_t))(Il2CppBase() + 0x1B7F9A0))(this, index);
	}
	template <typename T = uintptr_t> T PetBugHandler() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7FD40))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(RGPetController*, uintptr_t))(Il2CppBase() + 0x1B7FDF4))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B7FFBC))(this);
	}
	template <typename T = void> T OnMasterDestory() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B8009C))(this);
	}
	template <typename T = void> T add_onDestroyCb(uintptr_t value) {
		return ((T (*)(RGPetController*, uintptr_t))(Il2CppBase() + 0x1B8020C))(this, value);
	}
	template <typename T = void> T remove_onDestroyCb(uintptr_t value) {
		return ((T (*)(RGPetController*, uintptr_t))(Il2CppBase() + 0x1B802FC))(this, value);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B803EC))(this);
	}
	template <typename T = void> T AddDestroyCb(uintptr_t act) {
		return ((T (*)(RGPetController*, uintptr_t))(Il2CppBase() + 0x1B8044C))(this, act);
	}
	template <typename T = void> T MasterDestroy() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B80198))(this);
	}
	template <typename T = void> T DestroyCallback() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B804C4))(this);
	}
	template <typename T = void> T StopMove() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B80538))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_attribute() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B80760))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_attribute(uintptr_t P0) {
		return ((T (*)(RGPetController*, uintptr_t))(Il2CppBase() + 0x1B80768))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_facing() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B80770))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_facing(int32_t P0) {
		return ((T (*)(RGPetController*, int32_t))(Il2CppBase() + 0x1B80778))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0) {
		return ((T (*)(RGPetController*, float))(Il2CppBase() + 0x1B80780))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_EndDizzy() {
		return ((T (*)(RGPetController*))(Il2CppBase() + 0x1B80788))(this);
	}

};

}
