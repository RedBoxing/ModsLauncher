#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactWeaponComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactWeaponComponent"));
	}

	template <typename T = uintptr_t> T& _collider() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& isNativeComponent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& descKey() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& defaultDesc() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& descParam() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& part() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& sortingOrder() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& displayOrder() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& rarity() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& destroying() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& attached() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = uintptr_t> T& cleanup() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = bool> T get_isNativeComponent() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1C9FBB8))(this);
	}
	template <typename T = void> T set_isNativeComponent(bool value) {
		return ((T (*)(ArtifactWeaponComponent*, bool))(Il2CppBase() + 0x1C9F824))(this, value);
	}
	template <typename T = uintptr_t> T get_weapon() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1C9AEC8))(this);
	}
	template <typename T = void> T set_weapon(uintptr_t value) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAA4A4))(this, value);
	}
	template <typename T = uintptr_t> T get_part() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA4AC))(this);
	}
	template <typename T = void> T set_part(uintptr_t value) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAA4B4))(this, value);
	}
	template <typename T = int32_t> T get_sortingOrder() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CA0248))(this);
	}
	template <typename T = void> T set_sortingOrder(int32_t value) {
		return ((T (*)(ArtifactWeaponComponent*, int32_t))(Il2CppBase() + 0x1CAA4BC))(this, value);
	}
	template <typename T = int32_t> T get_displayOrder() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA4C4))(this);
	}
	template <typename T = void> T set_displayOrder(int32_t value) {
		return ((T (*)(ArtifactWeaponComponent*, int32_t))(Il2CppBase() + 0x1CAA4CC))(this, value);
	}
	template <typename T = int32_t> T get_rarity() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA4D4))(this);
	}
	template <typename T = void> T set_rarity(int32_t value) {
		return ((T (*)(ArtifactWeaponComponent*, int32_t))(Il2CppBase() + 0x1CAA4DC))(this, value);
	}
	template <typename T = bool> T get_destroying() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA4E4))(this);
	}
	template <typename T = void> T set_destroying(bool value) {
		return ((T (*)(ArtifactWeaponComponent*, bool))(Il2CppBase() + 0x1CAA4EC))(this, value);
	}
	template <typename T = bool> T get_attached() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA4F8))(this);
	}
	template <typename T = void> T set_attached(bool value) {
		return ((T (*)(ArtifactWeaponComponent*, bool))(Il2CppBase() + 0x1CAA500))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA50C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA568))(this);
	}
	template <typename T = void> T OnAddToPart(uintptr_t p) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAA638))(this, p);
	}
	template <typename T = void> T OnDeleteFromPart() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA770))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA7CC))(this);
	}
	template <typename T = uintptr_t> T OnSwitchWeapon(bool front) {
		return ((T (*)(ArtifactWeaponComponent*, bool))(Il2CppBase() + 0x1CAA82C))(this, front);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA8A0))(this);
	}
	template <typename T = void> T OnAttach(uintptr_t w) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAA900))(this, w);
	}
	template <typename T = void> T OnDetach() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA97C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA9DC))(this);
	}
	template <typename T = uintptr_t> T OnAttackVerify(uintptr_t atkType, bool start) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t, bool))(Il2CppBase() + 0x1CAAA38))(this, atkType, start);
	}
	template <typename T = uintptr_t> T OnAttackBegin(uintptr_t attackType) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAAAB4))(this, attackType);
	}
	template <typename T = uintptr_t> T OnAttackEnd(uintptr_t attackType) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAAB28))(this, attackType);
	}
	template <typename T = uintptr_t> T OnAttackActionStart(uintptr_t attackType) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAAB9C))(this, attackType);
	}
	template <typename T = uintptr_t> T OnAttackKeyEvent(uintptr_t attackType, int32_t atkSequence) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t, int32_t))(Il2CppBase() + 0x1CAAC10))(this, attackType, atkSequence);
	}
	template <typename T = uintptr_t> T OnAttackActionEnd(uintptr_t attackType) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAAC8C))(this, attackType);
	}
	template <typename T = uintptr_t> T OnChargeStart(uintptr_t attackType) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAAD00))(this, attackType);
	}
	template <typename T = uintptr_t> T OnChargeAttackStart(uintptr_t attackType) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAAD74))(this, attackType);
	}
	template <typename T = uintptr_t> T OnStop() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAADE8))(this);
	}
	template <typename T = uintptr_t> T OnUseSpecialPower() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAAE48))(this);
	}
	template <typename T = uintptr_t> T OnCharacterReborn() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAAEA8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDescParams() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAAF08))(this);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAAF68))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1CAB130))(this, controller, ext_info);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAB2E0))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAB340))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAB3A0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAB400))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAB4A4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAB850))(this, other);
	}
	template <typename T = void> T ShowName(float height) {
		return ((T (*)(ArtifactWeaponComponent*, float))(Il2CppBase() + 0x1CAB74C))(this, height);
	}
	template <typename T = int32_t> T Random(int32_t min, int32_t max) {
		return ((T (*)(ArtifactWeaponComponent*, int32_t, int32_t))(Il2CppBase() + 0x1CAB9E4))(this, min, max);
	}
	template <typename T = float> T Random_1(float min, float max) {
		return ((T (*)(ArtifactWeaponComponent*, float, float))(Il2CppBase() + 0x1CABB00))(this, min, max);
	}
	template <typename T = float> T Random_2() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CABB8C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T SortByDisplayOrder(Il2CppArray<uintptr_t>* coms, void* exclude) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x1CABC80))(0, coms, exclude);
	}
	template <typename T = void> T add_cleanup(uintptr_t value) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CABE9C))(this, value);
	}
	template <typename T = void> T remove_cleanup(uintptr_t value) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CABF88))(this, value);
	}
	template <typename T = void> T SetCleanUp(uintptr_t func) {
		return ((T (*)(ArtifactWeaponComponent*, uintptr_t))(Il2CppBase() + 0x1CAC074))(this, func);
	}
	template <typename T = void> T DoCleanUp() {
		return ((T (*)(ArtifactWeaponComponent*))(Il2CppBase() + 0x1CAA5C8))(this);
	}

};

}
