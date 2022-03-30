#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BattleData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleData"));
	}

	template <typename T = uintptr_t> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& gameMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& gameProperties() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& canContinue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& levelIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& localLevelIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& branchIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& criticRate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& startStatusHasSet() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& startWeapons() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& startWithoutPowerUp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& weapons() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& energy() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& hpPercentage() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& energyPercentage() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& playerIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& heroLevel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& skillIndex() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& playerDicDatas() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& buffCount() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& coinValue() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& accumulatedCointValue() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& tokenType() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& tokenCoin() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<int32_t>*> T& buffs() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<int32_t>*> T& buffsAddtion() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<int32_t>*> T& buffsCharactor() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<int32_t>*> T& hiddenBuff() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& OnBuffChanged() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& gotPickables() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mercenaries() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& mountName() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& mountHp() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& morphShape() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& statueIndex() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<int32_t>*> T& additionStatues() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& petAdditions() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& petAdditionSkin() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& customPetSkin() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& patternMap() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& marks() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& omitFactors() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& factors() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& addtionalFactorsRecord() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& lastLevelChangeFactors() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& furnitureLevel() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& attributeAddition() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& drinks() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& isNewGame() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& isHost() {
		return *(T*)((uintptr_t)this + 0x149);
	}
	template <typename T = bool> T& factorsInited() {
		return *(T*)((uintptr_t)this + 0x14A);
	}
	template <typename T = int64_t> T& gameId() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int64_t> T& savedataGameId() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppString*> T& serverAddress() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& gameSeed() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& score() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = bool> T& isGameOver() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = bool> T& victoryFlag() {
		return *(T*)((uintptr_t)this + 0x171);
	}
	template <typename T = uintptr_t> T& gametype() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& tags() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& openGame() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& season() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& continueEndGame() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& need_ad() {
		return *(T*)((uintptr_t)this + 0x189);
	}
	template <typename T = float> T& game_time() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = float> T& battle_time() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& game_time_since_startRoom() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = int32_t> T& kill_count() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = int32_t> T& player_dealt_damage() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& c08_skill_def_times() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& c13_hurt_hp_count() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& boss_begin_time() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& boss_end_time() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = Il2CppList<float>*> T& boss_pass_time_list() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& boss12_dead() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& player_dead() {
		return *(T*)((uintptr_t)this + 0x1B9);
	}
	template <typename T = bool> T& has_weapon() {
		return *(T*)((uintptr_t)this + 0x1BA);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& pass_boss() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& killed_br_boss() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = bool> T& enter_multi_room() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = Il2CppList<int32_t>*> T& passLevelIndexList() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& customFactors() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& extraData() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& consumeInfos() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = bool> T& sandboxEditing() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& defenceMode() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& towerData() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& troopMode() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& artifactsMode() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = bool> T& is_cost_bossrush_ticket() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = Il2CppString*> T& MultiRemoteToken() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = void*> static T& OnBattleDataLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& OnBattleDataReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T get_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x4173DC8))(0);
	}
	template <typename T = void> static T set_data(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x418C894))(0, value);
	}
	template <typename T = uintptr_t> static T get_localData() {
		return ((T (*)(void *))(Il2CppBase() + 0x418CA40))(0);
	}
	template <typename T = void> static T set_localData(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x418CACC))(0, value);
	}
	template <typename T = int32_t> T get_sceneIndex() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418CB60))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_hiddenBuff() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418CC18))(this);
	}
	template <typename T = void> T set_hiddenBuff(Il2CppList<int32_t>* value) {
		return ((T (*)(BattleData*, Il2CppList<int32_t>*))(Il2CppBase() + 0x418CC20))(this, value);
	}
	template <typename T = void> T add_OnBuffChanged(void* value) {
		return ((T (*)(BattleData*, void*))(Il2CppBase() + 0x418CC28))(this, value);
	}
	template <typename T = void> T remove_OnBuffChanged(void* value) {
		return ((T (*)(BattleData*, void*))(Il2CppBase() + 0x418CD14))(this, value);
	}
	template <typename T = bool> T get_inChallenge() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418CE00))(this);
	}
	template <typename T = bool> T get_IsSeasonMode() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418CEC0))(this);
	}
	template <typename T = Il2CppString*> T get_RebornKey() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418CF28))(this);
	}
	template <typename T = Il2CppString*> T get_RebornTwiceKey() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D050))(this);
	}
	template <typename T = void> T set_has_reborn(bool value) {
		return ((T (*)(BattleData*, bool))(Il2CppBase() + 0x418D178))(this, value);
	}
	template <typename T = bool> T get_has_reborn() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D200))(this);
	}
	template <typename T = void> T set_has_reborn_twice(bool value) {
		return ((T (*)(BattleData*, bool))(Il2CppBase() + 0x418D278))(this, value);
	}
	template <typename T = bool> T get_has_reborn_twice() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D300))(this);
	}
	template <typename T = bool> T get_has_season() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D378))(this);
	}
	template <typename T = bool> T get_isBadass() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D3E0))(this);
	}
	template <typename T = void> T set_isBadass(bool value) {
		return ((T (*)(BattleData*, bool))(Il2CppBase() + 0x418D444))(this, value);
	}
	template <typename T = bool> T get_isMultiGame() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D4CC))(this);
	}
	template <typename T = bool> T get_IsBossRushMode() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D530))(this);
	}
	template <typename T = bool> T get_IsDefenceMode() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D598))(this);
	}
	template <typename T = bool> T get_IsTroop() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418C0E0))(this);
	}
	template <typename T = bool> T get_IsArtifacts() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418C15C))(this);
	}
	template <typename T = bool> T get_HasSpecialFactor() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D738))(this);
	}
	template <typename T = bool> T get_remainsDestroy() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D7D0))(this);
	}
	template <typename T = bool> T get_IsSandbox() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D838))(this);
	}
	template <typename T = bool> T get_IsSandboxEditing() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D8A0))(this);
	}
	template <typename T = void> T set_IsSandboxEditing(bool value) {
		return ((T (*)(BattleData*, bool))(Il2CppBase() + 0x418D91C))(this, value);
	}
	template <typename T = bool> T get_dropCoin() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D994))(this);
	}
	template <typename T = bool> T get_IsCostBossrushTicket() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418D9F4))(this);
	}
	template <typename T = void> T set_IsCostBossrushTicket(bool value) {
		return ((T (*)(BattleData*, bool))(Il2CppBase() + 0x418DA54))(this, value);
	}
	template <typename T = bool> T get_IsNormalMode() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418DACC))(this);
	}
	template <typename T = bool> T get_IsPassGame() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418DB34))(this);
	}
	template <typename T = Il2CppString*> T get_MultiRemoteToken() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418DCE4))(this);
	}
	template <typename T = void> T set_MultiRemoteToken(Il2CppString* value) {
		return ((T (*)(BattleData*, Il2CppString*))(Il2CppBase() + 0x418DCEC))(this, value);
	}
	template <typename T = bool> T NeedRollStatue() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418DCF4))(this);
	}
	template <typename T = void> T UpdateData(bool save) {
		return ((T (*)(BattleData*, bool))(Il2CppBase() + 0x418DD74))(this, save);
	}
	template <typename T = void> T RefreshMount() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418E34C))(this);
	}
	template <typename T = void> T RefreshWeapon() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418E270))(this);
	}
	template <typename T = bool> T IsWithoutPowerUp() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418F5C0))(this);
	}
	template <typename T = void> T RefreshMercenary() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418E594))(this);
	}
	template <typename T = void> T SetStartStatus() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418F864))(this);
	}
	template <typename T = void> T RefreshWeaponByCtrl(uintptr_t ctrl) {
		return ((T (*)(BattleData*, uintptr_t))(Il2CppBase() + 0x418FA54))(this, ctrl);
	}
	template <typename T = void> T ProcessTransformHeroChar() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418EDCC))(this);
	}
	template <typename T = void> T CheckRandomCharactor() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418E800))(this);
	}
	template <typename T = void> T RefreshAttribute() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x418F35C))(this);
	}
	template <typename T = void> T SetHp(int32_t hp) {
		return ((T (*)(BattleData*, int32_t))(Il2CppBase() + 0x418FC78))(this, hp);
	}
	template <typename T = void> T SetEnergy(int32_t energy) {
		return ((T (*)(BattleData*, int32_t))(Il2CppBase() + 0x418FCEC))(this, energy);
	}
	template <typename T = void> T SetStatus(int32_t statueIndex) {
		return ((T (*)(BattleData*, int32_t))(Il2CppBase() + 0x418FD60))(this, statueIndex);
	}
	template <typename T = void> T AddPetAddition(Il2CppString* petAddition) {
		return ((T (*)(BattleData*, Il2CppString*))(Il2CppBase() + 0x418FE44))(this, petAddition);
	}
	template <typename T = void> T SetPlayerIndex(int32_t playerIndex) {
		return ((T (*)(BattleData*, int32_t))(Il2CppBase() + 0x418FEFC))(this, playerIndex);
	}
	template <typename T = void> T SetSkinIndex(int32_t skinIndex) {
		return ((T (*)(BattleData*, int32_t))(Il2CppBase() + 0x418FF70))(this, skinIndex);
	}
	template <typename T = void> T AddMercenary(uintptr_t mercenary) {
		return ((T (*)(BattleData*, uintptr_t))(Il2CppBase() + 0x418FFE4))(this, mercenary);
	}
	template <typename T = bool> T HasTrainableMercenary() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x419009C))(this);
	}
	template <typename T = void> T UpgradeMercenaryLevel() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x4190244))(this);
	}
	template <typename T = void> T AddKilledBRBoss(Il2CppString* boss_name) {
		return ((T (*)(BattleData*, Il2CppString*))(Il2CppBase() + 0x418E19C))(this, boss_name);
	}
	template <typename T = void> T AddKilledBoss(Il2CppString* boss_name) {
		return ((T (*)(BattleData*, Il2CppString*))(Il2CppBase() + 0x4190344))(this, boss_name);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x41903FC))(0);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x418F4BC))(0);
	}
	template <typename T = void> static T add_OnBattleDataLoad(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x419048C))(0, value);
	}
	template <typename T = void> static T remove_OnBattleDataLoad(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x419058C))(0, value);
	}
	template <typename T = void> static T add_OnBattleDataReset(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x419068C))(0, value);
	}
	template <typename T = void> static T remove_OnBattleDataReset(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x419078C))(0, value);
	}
	template <typename T = void> static T Load(uintptr_t savePlace) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x419088C))(0, savePlace);
	}
	template <typename T = uintptr_t> static T LoadBattleDataFromFile() {
		return ((T (*)(void *))(Il2CppBase() + 0x4190D24))(0);
	}
	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x4190DC8))(0);
	}
	template <typename T = uintptr_t> T Init() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x4190A2C))(this);
	}
	template <typename T = void> T InitWeapons(Il2CppString* weapon_name) {
		return ((T (*)(BattleData*, Il2CppString*))(Il2CppBase() + 0x4191084))(this, weapon_name);
	}
	template <typename T = void> T StartGame() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x4191180))(this);
	}
	template <typename T = void> T ConsumeHeroUseableVal() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x4191530))(this);
	}
	template <typename T = void> T AddPickables(Il2CppList<uintptr_t>* pickables) {
		return ((T (*)(BattleData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4191660))(this, pickables);
	}
	template <typename T = bool> T HasBuff(uintptr_t buff) {
		return ((T (*)(BattleData*, uintptr_t))(Il2CppBase() + 0x4191960))(this, buff);
	}
	template <typename T = void> T OnSyncBuff(uintptr_t type, uintptr_t buff, int32_t index, bool updateInfo) {
		return ((T (*)(BattleData*, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4191A80))(this, type, buff, index, updateInfo);
	}
	template <typename T = void> T SyncBuff(uintptr_t type, uintptr_t buff, int32_t index, bool updateInfo) {
		return ((T (*)(BattleData*, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x41928B0))(this, type, buff, index, updateInfo);
	}
	template <typename T = void> T LearnBuff(uintptr_t buff, bool updateInfo) {
		return ((T (*)(BattleData*, uintptr_t, bool))(Il2CppBase() + 0x4192A04))(this, buff, updateInfo);
	}
	template <typename T = void> T LearnBuffAddition(uintptr_t buff, bool updateInfo) {
		return ((T (*)(BattleData*, uintptr_t, bool))(Il2CppBase() + 0x4192B14))(this, buff, updateInfo);
	}
	template <typename T = void> T LearnBuffCharctor(uintptr_t buff, bool updateInfo) {
		return ((T (*)(BattleData*, uintptr_t, bool))(Il2CppBase() + 0x4192C24))(this, buff, updateInfo);
	}
	template <typename T = void> static T CheckUnlockBuffedAchievement(int32_t buffIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x41925B8))(0, buffIndex);
	}
	template <typename T = void> T UpdatePauseInfo() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x41927C8))(this);
	}
	template <typename T = void> T ForgetBuff() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x4192DA0))(this);
	}
	template <typename T = void> T ForgetBuffCharactor(uintptr_t buff) {
		return ((T (*)(BattleData*, uintptr_t))(Il2CppBase() + 0x418FB40))(this, buff);
	}
	template <typename T = void> T OnBuffChange(uintptr_t buff, bool isGet, bool updateInfo) {
		return ((T (*)(BattleData*, uintptr_t, bool, bool))(Il2CppBase() + 0x4191D20))(this, buff, isGet, updateInfo);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T GetFurnitureLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x4190E98))(0);
	}
	template <typename T = bool> T CompareFactor(uintptr_t factor) {
		return ((T (*)(BattleData*, uintptr_t))(Il2CppBase() + 0x418D600))(this, factor);
	}
	template <typename T = void> T SetFactor(uintptr_t factor, bool isSet, bool isRecord) {
		return ((T (*)(BattleData*, uintptr_t, bool, bool))(Il2CppBase() + 0x4192E98))(this, factor, isSet, isRecord);
	}
	template <typename T = void> T ClearLastLevelChangedFactors() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x4193178))(this);
	}
	template <typename T = void> T SetSeason(uintptr_t factor) {
		return ((T (*)(BattleData*, uintptr_t))(Il2CppBase() + 0x41930F0))(this, factor);
	}
	template <typename T = void> T ChangeAttribute(uintptr_t attribute, int32_t delta) {
		return ((T (*)(BattleData*, uintptr_t, int32_t))(Il2CppBase() + 0x4193218))(this, attribute, delta);
	}
	template <typename T = int32_t> T GetAdditionAttribute(uintptr_t attribute) {
		return ((T (*)(BattleData*, uintptr_t))(Il2CppBase() + 0x419340C))(this, attribute);
	}
	template <typename T = void> T AddBossPassTime(float cost_time) {
		return ((T (*)(BattleData*, float))(Il2CppBase() + 0x4193504))(this, cost_time);
	}
	template <typename T = void> T ResetFactorsEffect() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x41935BC))(this);
	}
	template <typename T = void> T AddMark(Il2CppString* name, int32_t count) {
		return ((T (*)(BattleData*, Il2CppString*, int32_t))(Il2CppBase() + 0x4193660))(this, name, count);
	}
	template <typename T = int32_t> T GetMark(Il2CppString* name) {
		return ((T (*)(BattleData*, Il2CppString*))(Il2CppBase() + 0x4193798))(this, name);
	}
	template <typename T = void> T ResetMark(Il2CppString* name) {
		return ((T (*)(BattleData*, Il2CppString*))(Il2CppBase() + 0x4193890))(this, name);
	}
	template <typename T = void> T ResetBuffCount() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x4193974))(this);
	}
	template <typename T = void> T CheckHasWeapon() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x41939D8))(this);
	}
	template <typename T = void> T SetUpWithRoomInfo(uintptr_t roomInfo) {
		return ((T (*)(BattleData*, uintptr_t))(Il2CppBase() + 0x4193B94))(this, roomInfo);
	}
	template <typename T = uintptr_t> T GetRoomInfo(bool forceNewGame) {
		return ((T (*)(BattleData*, bool))(Il2CppBase() + 0x4193CE4))(this, forceNewGame);
	}
	template <typename T = void> T DelRecordFactors() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x419403C))(this);
	}
	template <typename T = void> T CopyFromSvrData(uintptr_t svrBattleData) {
		return ((T (*)(BattleData*, uintptr_t))(Il2CppBase() + 0x41941D8))(this, svrBattleData);
	}
	template <typename T = void> T SetHeroInfo(uintptr_t hero, int32_t skinIdx, int32_t skillIdx) {
		return ((T (*)(BattleData*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x419458C))(this, hero, skinIdx, skillIdx);
	}
	template <typename T = bool> T SelectedHero() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x4194748))(this);
	}
	template <typename T = void> T AddConsumeInfo(uintptr_t newInfo) {
		return ((T (*)(BattleData*, uintptr_t))(Il2CppBase() + 0x41947D0))(this, newInfo);
	}
	template <typename T = bool> T HasShieldGas() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x4194994))(this);
	}
	template <typename T = bool> T HasShieldFire() {
		return ((T (*)(BattleData*))(Il2CppBase() + 0x4194A70))(this);
	}
	template <typename T = void> T SetSaveGameId(int64_t newSaveDataGameId) {
		return ((T (*)(BattleData*, int64_t))(Il2CppBase() + 0x41914BC))(this, newSaveDataGameId);
	}
	template <typename T = void> T TryResetHasRebornValue(bool isNewGame) {
		return ((T (*)(BattleData*, bool))(Il2CppBase() + 0x4194B5C))(this, isNewGame);
	}

};

}
