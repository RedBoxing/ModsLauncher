#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGWildController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGWildController"));
	}

	template <typename T = uintptr_t> T& _roleAttributeProxy() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& randomInfos() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& pet_idx() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& food_infos() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& body_render() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppVector2> T& move_direction() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& min_distance() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& reply_time1() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& reply_time2() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& this_reply_time() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& scout_rate() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& summon() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& master_tf() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& the_master_tf() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& _facing() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& detect_list() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& lv() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& target_food() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& triggerState() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& label_height() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = bool> T& has_eat() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& pet_state() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = bool> T& need_unlock_pet() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& hammer_name_list() {
		return *(T*)((uintptr_t)this + 0x188);
	}

	template <typename T = uintptr_t> T get_role_attribute() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D3CC4))(this);
	}
	template <typename T = uintptr_t> T get_attribute() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D3D2C))(this);
	}
	template <typename T = int32_t> T get_facing() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D3E1C))(this);
	}
	template <typename T = void> T set_facing(int32_t value) {
		return ((T (*)(RGWildController*, int32_t))(Il2CppBase() + 0x44D3E7C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D3EF0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D45E4))(this);
	}
	template <typename T = void> T TurnTransparentLayer(bool isTransparent) {
		return ((T (*)(RGWildController*, bool))(Il2CppBase() + 0x44D466C))(this, isTransparent);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D4700))(this);
	}
	template <typename T = void> T ReplyingHP() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D4B90))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D4E08))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D5380))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D58C8))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D59CC))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(RGWildController*, int32_t))(Il2CppBase() + 0x44D5C14))(this, damage);
	}
	template <typename T = void> T StartHitTrigger(float time) {
		return ((T (*)(RGWildController*, float))(Il2CppBase() + 0x44D5E4C))(this, time);
	}
	template <typename T = void> T EndHitTrigger() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D5F5C))(this);
	}
	template <typename T = void> T Escape() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D6020))(this);
	}
	template <typename T = void> T AddDelegate() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D60E8))(this);
	}
	template <typename T = void> T RemoveDelegate() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D61F4))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(RGWildController*, int32_t))(Il2CppBase() + 0x44D6300))(this, game_state);
	}
	template <typename T = void> T TurnTo(Il2CppVector2 normal) {
		return ((T (*)(RGWildController*, Il2CppVector2))(Il2CppBase() + 0x44D6390))(this, normal);
	}
	template <typename T = void> T HitBack() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D6480))(this);
	}
	template <typename T = void> T GetGray() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D653C))(this);
	}
	template <typename T = void> T GrayBack() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D65F8))(this);
	}
	template <typename T = void> T SetMaster(uintptr_t master) {
		return ((T (*)(RGWildController*, uintptr_t))(Il2CppBase() + 0x44D66B4))(this, master);
	}
	template <typename T = void> T OnSkinChanged(int32_t index) {
		return ((T (*)(RGWildController*, int32_t))(Il2CppBase() + 0x44D6750))(this, index);
	}
	template <typename T = bool> T CanEat(uintptr_t food_obj) {
		return ((T (*)(RGWildController*, uintptr_t))(Il2CppBase() + 0x44CD4DC))(this, food_obj);
	}
	template <typename T = void> T StartEatfood(uintptr_t food_obj) {
		return ((T (*)(RGWildController*, uintptr_t))(Il2CppBase() + 0x44CD6E4))(this, food_obj);
	}
	template <typename T = void> T Eatfood(uintptr_t somefood) {
		return ((T (*)(RGWildController*, uintptr_t))(Il2CppBase() + 0x44D6898))(this, somefood);
	}
	template <typename T = void> T StopEatfood(uintptr_t food_obj) {
		return ((T (*)(RGWildController*, uintptr_t))(Il2CppBase() + 0x44CDA0C))(this, food_obj);
	}
	template <typename T = void> T FollowMaster() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D6B6C))(this);
	}
	template <typename T = void> T UpgradeWildPet() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D6C1C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGWildController*, uintptr_t))(Il2CppBase() + 0x44D6D20))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGWildController*, uintptr_t))(Il2CppBase() + 0x44D6F38))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGWildController*, uintptr_t))(Il2CppBase() + 0x44D70FC))(this, controller);
	}
	template <typename T = void> T OnItemTrigger(uintptr_t controller) {
		return ((T (*)(RGWildController*, uintptr_t))(Il2CppBase() + 0x44D7270))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D76D8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D7738))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D77C4))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D7824))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGWildController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x44D7884))(this, controller, ext_info);
	}
	template <typename T = void> T RandomPet() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D4028))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_attribute() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D7AEC))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_facing() {
		return ((T (*)(RGWildController*))(Il2CppBase() + 0x44D7AF4))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_facing(int32_t P0) {
		return ((T (*)(RGWildController*, int32_t))(Il2CppBase() + 0x44D7AFC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_TurnTransparentLayer(bool P0) {
		return ((T (*)(RGWildController*, bool))(Il2CppBase() + 0x44D7B04))(this, P0);
	}

};

}
