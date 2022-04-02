#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactComponentPart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactComponentPart"));
	}

	template <typename T = bool> T& isInitPart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& displayScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& displayRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& weaponType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& nameKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& defaultName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _spriteRenderers() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _init() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& attachOrder() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& elementType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& rarity() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& def() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& move_speed() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& atk_speed() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& add_consume() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& armor_restore_speed() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& weapon_charge_speed() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& energy() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& upgradeFailedTimes() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& modifyHPList() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _modifyHPId() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& shield() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& crit() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& repel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& deviation() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& throughCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& addGodpowerRechargeSpeed() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& addGodPower() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& addBulletSpeed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& defaultEmitterAddTimes() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& anchors() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& grip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& sortingOrderOffset() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& onDetachCallback() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& onAttachCallback() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = bool> T get_attached() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9C6C0))(this);
	}
	template <typename T = int32_t> T get_attachOrder() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F2B0))(this);
	}
	template <typename T = void> T set_attachOrder(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F2B8))(this, value);
	}
	template <typename T = int32_t> T get_partID() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C996B8))(this);
	}
	template <typename T = int32_t> T get_elementType() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F2C0))(this);
	}
	template <typename T = void> T set_elementType(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F2C8))(this, value);
	}
	template <typename T = int32_t> T get_rarity() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9CF20))(this);
	}
	template <typename T = void> T set_rarity(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F2D0))(this, value);
	}
	template <typename T = int32_t> T get_atk() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F2D8))(this);
	}
	template <typename T = void> T set_atk(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F2E0))(this, value);
	}
	template <typename T = int32_t> T get_def() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F2E8))(this);
	}
	template <typename T = void> T set_def(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F2F0))(this, value);
	}
	template <typename T = float> T get_move_speed() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F2F8))(this);
	}
	template <typename T = void> T set_move_speed(float value) {
		return ((T (*)(ArtifactComponentPart*, float))(Il2CppBase() + 0x1C9F300))(this, value);
	}
	template <typename T = float> T get_atk_speed() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F308))(this);
	}
	template <typename T = void> T set_atk_speed(float value) {
		return ((T (*)(ArtifactComponentPart*, float))(Il2CppBase() + 0x1C9F310))(this, value);
	}
	template <typename T = int32_t> T get_add_consume() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F318))(this);
	}
	template <typename T = void> T set_add_consume(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F320))(this, value);
	}
	template <typename T = float> T get_armor_restore_speed() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F328))(this);
	}
	template <typename T = void> T set_armor_restore_speed(float value) {
		return ((T (*)(ArtifactComponentPart*, float))(Il2CppBase() + 0x1C9F330))(this, value);
	}
	template <typename T = float> T get_weapon_charge_speed() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F338))(this);
	}
	template <typename T = void> T set_weapon_charge_speed(float value) {
		return ((T (*)(ArtifactComponentPart*, float))(Il2CppBase() + 0x1C9F340))(this, value);
	}
	template <typename T = int32_t> T get_energy() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F348))(this);
	}
	template <typename T = void> T set_energy(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F350))(this, value);
	}
	template <typename T = int32_t> T get_hp() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F358))(this);
	}
	template <typename T = void> T set_hp(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F360))(this, value);
	}
	template <typename T = int32_t> T get_upgradeFailedTimes() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F368))(this);
	}
	template <typename T = void> T set_upgradeFailedTimes(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F370))(this, value);
	}
	template <typename T = int32_t> T ModifyHP(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F378))(this, value);
	}
	template <typename T = void> T CancelModifyHP(int32_t id) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F448))(this, id);
	}
	template <typename T = int32_t> T get_modifyHP() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F588))(this);
	}
	template <typename T = int32_t> T get_shield() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F654))(this);
	}
	template <typename T = void> T set_shield(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F65C))(this, value);
	}
	template <typename T = int32_t> T get_crit() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F664))(this);
	}
	template <typename T = void> T set_crit(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F66C))(this, value);
	}
	template <typename T = int32_t> T get_repel() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F674))(this);
	}
	template <typename T = void> T set_repel(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F67C))(this, value);
	}
	template <typename T = int32_t> T get_deviation() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F684))(this);
	}
	template <typename T = void> T set_deviation(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F68C))(this, value);
	}
	template <typename T = int32_t> T get_throughCount() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F694))(this);
	}
	template <typename T = void> T set_throughCount(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F69C))(this, value);
	}
	template <typename T = float> T get_addGodpowerRechargeSpeed() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F6A4))(this);
	}
	template <typename T = void> T set_addGodpowerRechargeSpeed(float value) {
		return ((T (*)(ArtifactComponentPart*, float))(Il2CppBase() + 0x1C9F6AC))(this, value);
	}
	template <typename T = float> T get_addGodPower() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F6B4))(this);
	}
	template <typename T = void> T set_addGodPower(float value) {
		return ((T (*)(ArtifactComponentPart*, float))(Il2CppBase() + 0x1C9F6BC))(this, value);
	}
	template <typename T = float> T get_addBulletSpeed() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F6C4))(this);
	}
	template <typename T = void> T set_addBulletSpeed(float value) {
		return ((T (*)(ArtifactComponentPart*, float))(Il2CppBase() + 0x1C9F6CC))(this, value);
	}
	template <typename T = int32_t> T get_defaultEmitterAddTimes() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F6D4))(this);
	}
	template <typename T = void> T set_defaultEmitterAddTimes(int32_t value) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9F6DC))(this, value);
	}
	template <typename T = bool> T get_hasGripPos() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9971C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F6E4))(this);
	}
	template <typename T = void> T InitPart() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9F830))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetWeaponComponents(bool excludeNative) {
		return ((T (*)(ArtifactComponentPart*, bool))(Il2CppBase() + 0x1C9F8E8))(this, excludeNative);
	}
	template <typename T = void> T OnInit() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9FBC0))(this);
	}
	template <typename T = int32_t> T CompositeOrder() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C99780))(this);
	}
	template <typename T = uintptr_t> T GripObject() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9FC1C))(this);
	}
	template <typename T = void> T SetSortingLayer(int32_t layerID) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9FC98))(this, layerID);
	}
	template <typename T = void> T SetSortingLayer_1(Il2CppString* layerName) {
		return ((T (*)(ArtifactComponentPart*, Il2CppString*))(Il2CppBase() + 0x1C9FD70))(this, layerName);
	}
	template <typename T = void> T SetSortingOrder(int32_t order) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9FE48))(this, order);
	}
	template <typename T = uintptr_t> T GetAnchor(int32_t idx) {
		return ((T (*)(ArtifactComponentPart*, int32_t))(Il2CppBase() + 0x1C9FF30))(this, idx);
	}
	template <typename T = void> T OnAttach() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1CA004C))(this);
	}
	template <typename T = void> T OnDetach() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C99234))(this);
	}
	template <typename T = int32_t> T OnOtherComponentAttach(uintptr_t other) {
		return ((T (*)(ArtifactComponentPart*, uintptr_t))(Il2CppBase() + 0x1C997E8))(this, other);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C9D73C))(this);
	}
	template <typename T = Il2CppString*> T GetPartIDKey() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C99860))(this);
	}
	template <typename T = Il2CppString*> T GetPartDefaultName() {
		return ((T (*)(ArtifactComponentPart*))(Il2CppBase() + 0x1C998F0))(this);
	}

};

}
