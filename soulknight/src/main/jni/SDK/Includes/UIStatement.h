#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIStatement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIStatement"));
	}

	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& title_text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& level_text() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& text_this_gems() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& text_gems() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& text_coin() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& text_time() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& text_kill() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& text_bossrush_time_cost1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& text_bossrush_time_cost2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& player() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& cartons() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& player_img() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& anim_switch() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& tap_count() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& gem_this_value() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& gem_total() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& cartons_open() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& object_img() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& object_img_map() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& object_name() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& magic_area_img() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& magic_area_name() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& game_time() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& keyframe_index() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& level_index() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& room_level() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& this_time() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& playing() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<int32_t>*> T& unlockIndexes() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& pickableList() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& itemSeed() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& itemMaterial() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& itemBlueprint() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& stone_base_obj() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& magic_stone_sps() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& magic_stone_light_color() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& gamemode_icons() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& get_award_clip() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& fail_clip() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& succeed_clip() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& bossRushPureModeFail() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& gamemode_icon() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& scrollview() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& _incomeFactor() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& defence_mode_wave_idx() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& needUnlockInThisBattle() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& remainOnOldRoad() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& roadItems() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& beforeRoad() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& cartonLocation() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& cartonChangeRoadSequence() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = bool> T& is_pass() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& _spritePlayer() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> static T& MaterialSpriteRectID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& beforeChanageScene() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& dynamicGemFactor() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& unlocked() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& onFinishDisplayPickables() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4242954))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4243A44))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4243AA0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4243AFC))(this);
	}
	template <typename T = void> T MovePlayer() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4244D2C))(this);
	}
	template <typename T = void> T MovePlayerToEnd() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4246578))(this);
	}
	template <typename T = void> T FlushDefenceGemText(bool isEnd) {
		return ((T (*)(UIStatement*, bool))(Il2CppBase() + 0x4246DC4))(this, isEnd);
	}
	template <typename T = void> T FlushGemText(bool isEnd) {
		return ((T (*)(UIStatement*, bool))(Il2CppBase() + 0x4245BD8))(this, isEnd);
	}
	template <typename T = int32_t> T GetEndGem() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x42471F4))(this);
	}
	template <typename T = void> T FlushBossImg(int32_t boss_idx) {
		return ((T (*)(UIStatement*, int32_t))(Il2CppBase() + 0x4247730))(this, boss_idx);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4247A9C))(this);
	}
	template <typename T = bool> T CanUnlockRoomItem() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4245F70))(this);
	}
	template <typename T = void> T SetCharacterSprite() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424B0E0))(this);
	}
	template <typename T = void> T OnCharacterSpriteChange(Il2CppString* stateName, uintptr_t sprite) {
		return ((T (*)(UIStatement*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x424D90C))(this, stateName, sprite);
	}
	template <typename T = uintptr_t> T DelayFlushCartons() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424BA3C))(this);
	}
	template <typename T = void> T ProcessTask() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4249F98))(this);
	}
	template <typename T = void> static T CheckUnlockChallengedAchievement() {
		return ((T (*)(void *))(Il2CppBase() + 0x424DC28))(0);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4243C20))(this);
	}
	template <typename T = void> T RsetTimeCounter() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424DF88))(this);
	}
	template <typename T = void> T OnClick_AntiAddition() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424EB3C))(this);
	}
	template <typename T = void> T SwitchDetialView() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424E6D4))(this);
	}
	template <typename T = void> T SetUpDetialInfo() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424E074))(this);
	}
	template <typename T = int32_t> T GetKillCount() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x42470FC))(this);
	}
	template <typename T = int32_t> T GetCoinCount() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4247004))(this);
	}
	template <typename T = void> T NormalAddGem() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424E514))(this);
	}
	template <typename T = int32_t> T NormalAddGemNumber() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424747C))(this);
	}
	template <typename T = void> T AddDefenceGem() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424E5F4))(this);
	}
	template <typename T = int32_t> T DefenceAddGemNumber() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x42472E0))(this);
	}
	template <typename T = void> T UnLockObject() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424E870))(this);
	}
	template <typename T = void> T GetUnlockItems() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424B850))(this);
	}
	template <typename T = void> T GetRoadData() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424B74C))(this);
	}
	template <typename T = void> T ShowUnlockObject(uintptr_t lv_tf, bool showPopupWindow) {
		return ((T (*)(UIStatement*, uintptr_t, bool))(Il2CppBase() + 0x4246054))(this, lv_tf, showPopupWindow);
	}
	template <typename T = bool> T FlushPickable() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424E418))(this);
	}
	template <typename T = uintptr_t> T DelayFlushPickable() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424EB98))(this);
	}
	template <typename T = void> T StatisticDatas(bool isPass) {
		return ((T (*)(UIStatement*, bool))(Il2CppBase() + 0x424BAF0))(this, isPass);
	}
	template <typename T = void> T SavePassLevel() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424EC4C))(this);
	}
	template <typename T = void> T CheckAchievementUnlock() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424F1D4))(this);
	}
	template <typename T = uintptr_t> T GetLvTF(int32_t lv, int32_t scale_factor) {
		return ((T (*)(UIStatement*, int32_t, int32_t))(Il2CppBase() + 0x424566C))(this, lv, scale_factor);
	}
	template <typename T = uintptr_t> T GetDefenceModeLvTF(int32_t lv, int32_t scale_factor) {
		return ((T (*)(UIStatement*, int32_t, int32_t))(Il2CppBase() + 0x42468AC))(this, lv, scale_factor);
	}
	template <typename T = void> T FlushStoneSprite() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x42450B0))(this);
	}
	template <typename T = void> T PlayLight1() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4250B44))(this);
	}
	template <typename T = void> T PlayLight2() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4250CE8))(this);
	}
	template <typename T = void> T PlayLight3() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4250D4C))(this);
	}
	template <typename T = void> T PlayLight4() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4250DB0))(this);
	}
	template <typename T = void> T PlayLight(int32_t light_idx) {
		return ((T (*)(UIStatement*, int32_t))(Il2CppBase() + 0x4250BA8))(this, light_idx);
	}
	template <typename T = void> T AddPassHistory() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x424A23C))(this);
	}
	template <typename T = Il2CppString*> T GetLevelText(int32_t index) {
		return ((T (*)(UIStatement*, int32_t))(Il2CppBase() + 0x424559C))(this, index);
	}
	template <typename T = void> T ProcessHeroCharUseableValue(int32_t levelIndex, bool isBadass) {
		return ((T (*)(UIStatement*, int32_t, bool))(Il2CppBase() + 0x4249E28))(this, levelIndex, isBadass);
	}
	template <typename T = void> T Startb__64_0(uintptr_t unlockModel) {
		return ((T (*)(UIStatement*, uintptr_t))(Il2CppBase() + 0x4250F90))(this, unlockModel);
	}
	template <typename T = void> T Startb__64_2(uintptr_t changeScene) {
		return ((T (*)(UIStatement*, uintptr_t))(Il2CppBase() + 0x4251150))(this, changeScene);
	}
	template <typename T = void> T Startb__64_3() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x42515F8))(this);
	}
	template <typename T = void> T Startb__64_1(uintptr_t changeScene) {
		return ((T (*)(UIStatement*, uintptr_t))(Il2CppBase() + 0x425167C))(this, changeScene);
	}
	template <typename T = void> T DelayFlushCartonsb__70_2() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4251B9C))(this);
	}
	template <typename T = float> T DelayFlushPickableb__93_0() {
		return ((T (*)(UIStatement*))(Il2CppBase() + 0x4251C00))(this);
	}
	template <typename T = void> T DelayFlushPickableb__93_1(float x) {
		return ((T (*)(UIStatement*, float))(Il2CppBase() + 0x4251C30))(this, x);
	}

};

}
