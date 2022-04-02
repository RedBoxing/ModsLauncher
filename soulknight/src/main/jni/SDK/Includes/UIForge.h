#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIForge
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIForge"));
	}

	template <typename T = uintptr_t> T& weaponInfoIcon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& UIMaskFade() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& forgableCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& trDetial() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& trItemList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& trMaterialList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& itemMaterial() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& txGunName() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& imGun() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& imLight() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& imgAttack() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& imgConsume() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& imgCritic() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& imgAccuracy() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& txAttack() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& txConsume() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& txCritic() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& txAccuracy() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& txEmpty() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& scrollRect() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& currentToolbarIndex() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& toolbarItems() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& forge() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& selectedWeapon() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& type2Order() {
		return *(T*)((uintptr_t)this + 0x108);
	}

	template <typename T = bool> static T IsUnlocked(Il2CppString* weaponName, bool isHeroWeaponType) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x433248C))(0, weaponName, isHeroWeaponType);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x433270C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x4332CDC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x4332D38))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x4332D94))(this);
	}
	template <typename T = void> T MoveToolbar(int32_t move) {
		return ((T (*)(UIForge*, int32_t))(Il2CppBase() + 0x43330EC))(this, move);
	}
	template <typename T = void> T ShowWindow(uintptr_t forge) {
		return ((T (*)(UIForge*, uintptr_t))(Il2CppBase() + 0x4333320))(this, forge);
	}
	template <typename T = void> T ShowWindow_1() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x4333398))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x43339DC))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x4332EA0))(this);
	}
	template <typename T = void> T CheckTap() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x4333598))(this);
	}
	template <typename T = void> T OnClickButton(uintptr_t weapon) {
		return ((T (*)(UIForge*, uintptr_t))(Il2CppBase() + 0x4333C44))(this, weapon);
	}
	template <typename T = void> T FlushMaterials(Il2CppDictionary<uintptr_t, int32_t>* materials) {
		return ((T (*)(UIForge*, Il2CppDictionary<uintptr_t, int32_t>*))(Il2CppBase() + 0x4334240))(this, materials);
	}
	template <typename T = void> T OnClick_DetailConfirm() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x4334AA8))(this);
	}
	template <typename T = void> T OnClick_DetailCancel() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x4334EA4))(this);
	}
	template <typename T = void> T FlushType(Il2CppString* typesStr) {
		return ((T (*)(UIForge*, Il2CppString*))(Il2CppBase() + 0x4334F9C))(this, typesStr);
	}
	template <typename T = void> T FlushType_1(Il2CppList<uintptr_t>* types) {
		return ((T (*)(UIForge*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4335248))(this, types);
	}
	template <typename T = void> T SetElementFade() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x4335DF4))(this);
	}
	template <typename T = uintptr_t> T SetItemSize() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x4336234))(this);
	}
	template <typename T = void> T SwitchArrowDisplay(int32_t index) {
		return ((T (*)(UIForge*, int32_t))(Il2CppBase() + 0x4336314))(this, index);
	}
	template <typename T = uintptr_t> T GetItemObject() {
		return ((T (*)(UIForge*))(Il2CppBase() + 0x4335C80))(this);
	}
	template <typename T = int32_t> T GetWeaponTypeOrder(uintptr_t type) {
		return ((T (*)(UIForge*, uintptr_t))(Il2CppBase() + 0x4333B74))(this, type);
	}

};

}
