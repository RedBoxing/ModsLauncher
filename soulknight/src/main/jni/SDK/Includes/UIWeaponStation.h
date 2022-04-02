#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWeaponStation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWeaponStation"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& trReview() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& trDetail() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& trSkinDetail() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& trItemList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& trMaterialList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& trEmpty() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& itemResearched() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& itemMaterial() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& txGunName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& _nameText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& imGun() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& imSkinInGunPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& imgAttack() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& imgConsume() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& imgCritic() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& imgAccuracy() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& txAttack() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& txConsume() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& txCritic() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& txAccuracy() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& txSkillDesc() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& btnResearch() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& selectedObject() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& selectedSkinMat() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& selectedBlueprint() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& drop_desc_trans() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& drop_desc_text() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& skin_drop_desc_trans() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& skin_drop_desc_text() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& weaponInfoIcon() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mechInfoSprites() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& trSkinMaterialList() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& skinItemMaterial() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& txSkinName() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& imSkin() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& imSkinHero() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& btnResearchSkin() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& selectedSkill() {
		return *(T*)((uintptr_t)this + 0x180);
	}

	template <typename T = Il2CppString*> T get_nameText() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D7120))(this);
	}
	template <typename T = void> T set_nameText(Il2CppString* value) {
		return ((T (*)(UIWeaponStation*, Il2CppString*))(Il2CppBase() + 0x41D7180))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D721C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D7D3C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D7D98))(this);
	}
	template <typename T = void> T SetupNavigation() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D7DF4))(this);
	}
	template <typename T = uintptr_t> T NavigationCoroutine() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D7E64))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D7F18))(this);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D8274))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D8F30))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D8024))(this);
	}
	template <typename T = void> T OnClick_Research() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D90C8))(this);
	}
	template <typename T = void> T StatisticResearch(Il2CppString* blueprintName) {
		return ((T (*)(UIWeaponStation*, Il2CppString*))(Il2CppBase() + 0x41DA32C))(this, blueprintName);
	}
	template <typename T = void> T OnClick_Research_Skin() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41DA4E0))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41D8474))(this);
	}
	template <typename T = uintptr_t> T ScrollRectDontFadeAtTopOrBottom() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41DD094))(this);
	}
	template <typename T = void> T CreateWeaponItem(uintptr_t weapon, Il2CppString* blueprintName) {
		return ((T (*)(UIWeaponStation*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41DAD00))(this, weapon, blueprintName);
	}
	template <typename T = void> T FlushDetails(uintptr_t weapon, uintptr_t blueprint) {
		return ((T (*)(UIWeaponStation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41DD148))(this, weapon, blueprint);
	}
	template <typename T = void> T FlushDetails_1(uintptr_t controller, int32_t skillIndex, uintptr_t blueprint) {
		return ((T (*)(UIWeaponStation*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x41DEED0))(this, controller, skillIndex, blueprint);
	}
	template <typename T = void> T CreateMountItem(uintptr_t mount, Il2CppString* blueprintName) {
		return ((T (*)(UIWeaponStation*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41DB284))(this, mount, blueprintName);
	}
	template <typename T = void> T CreateSkinBlueprint(Il2CppString* blueprintName) {
		return ((T (*)(UIWeaponStation*, Il2CppString*))(Il2CppBase() + 0x41DBD8C))(this, blueprintName);
	}
	template <typename T = void> T CreateSkillItem(uintptr_t controller, int32_t skillIndex, Il2CppString* blueprintName) {
		return ((T (*)(UIWeaponStation*, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x41DB7E0))(this, controller, skillIndex, blueprintName);
	}
	template <typename T = void> T CreateSkinItem(uintptr_t hero, uintptr_t skin_material) {
		return ((T (*)(UIWeaponStation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41DCB08))(this, hero, skin_material);
	}
	template <typename T = void> T CreateTransformWeaponItem(Il2CppString* blueprintName) {
		return ((T (*)(UIWeaponStation*, Il2CppString*))(Il2CppBase() + 0x41DC484))(this, blueprintName);
	}
	template <typename T = void> T FlushDetails_2(uintptr_t mount, uintptr_t blueprint) {
		return ((T (*)(UIWeaponStation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41DF398))(this, mount, blueprint);
	}
	template <typename T = void> T ShowSkillDetail() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41DF110))(this);
	}
	template <typename T = void> T ShowWeaponDetail() {
		return ((T (*)(UIWeaponStation*))(Il2CppBase() + 0x41DD888))(this);
	}
	template <typename T = void> T FlushSkinDetail(uintptr_t hero, int32_t skinIndex, uintptr_t blueprint) {
		return ((T (*)(UIWeaponStation*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x41DFAA4))(this, hero, skinIndex, blueprint);
	}
	template <typename T = void> T FlushHeroCharDetail(uintptr_t hero, uintptr_t blueprint, uintptr_t icon) {
		return ((T (*)(UIWeaponStation*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41E0650))(this, hero, blueprint, icon);
	}
	template <typename T = void> T FlushSkinDetails(uintptr_t hero, uintptr_t skin_material) {
		return ((T (*)(UIWeaponStation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41E0C40))(this, hero, skin_material);
	}
	template <typename T = void> T FlushMaterials(uintptr_t blueprint) {
		return ((T (*)(UIWeaponStation*, uintptr_t))(Il2CppBase() + 0x41DDB10))(this, blueprint);
	}
	template <typename T = void> T FlushSkinMaterial(uintptr_t skin_material) {
		return ((T (*)(UIWeaponStation*, uintptr_t))(Il2CppBase() + 0x41E102C))(this, skin_material);
	}
	template <typename T = void> T FlushSkinDropDesc(Il2CppDictionary<uintptr_t, int32_t>* matDic, uintptr_t hero, int32_t skinIndex, bool unlock) {
		return ((T (*)(UIWeaponStation*, Il2CppDictionary<uintptr_t, int32_t>*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x41E0048))(this, matDic, hero, skinIndex, unlock);
	}

};

}
