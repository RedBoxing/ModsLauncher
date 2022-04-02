#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemData"));
	}

	template <typename T = uintptr_t> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& MagicNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& FertilizeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& TryTicketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& RebornCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& Plantpot_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& Plantpot_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& Plantpot_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& Plantpot_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppString*> static T& GemName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppString*> static T& FishName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppString*> static T& CellName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = Il2CppString*> static T& GearName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = Il2CppString*> static T& WoodName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = Il2CppString*> static T& IronName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = Il2CppString*> static T& BatteryName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& plants() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& sellerRefreshTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& cumulativeFishCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& commodities() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& itemUnlock() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& forgeWeapons() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& mechInRoom() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& blueprints() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& seeds() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& materials() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& tokenTickets() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& restoreKeys() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& alreadyGetRealNameAward() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& specialTickets() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& hopperEnteredModes() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& fishChipConfigId() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& bossrush_time() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& fishChipStorePurchaseHistory() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& fishChipStorePurchaseHistoryIndexed() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& got_bossrush_ticket() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& roomDecorateDic() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& roomDecorateCurSkinDic() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& TodayStatueTimes() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = uintptr_t> static T get_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D960C0))(0);
	}
	template <typename T = void> static T set_data(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D97094))(0, value);
	}
	template <typename T = int32_t> T get_fishCount() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1D97140))(this);
	}
	template <typename T = void> T set_fishCount(int32_t value) {
		return ((T (*)(ItemData*, int32_t))(Il2CppBase() + 0x1D97378))(this, value);
	}
	template <typename T = void> T AddPickable(uintptr_t info, bool showUI) {
		return ((T (*)(ItemData*, uintptr_t, bool))(Il2CppBase() + 0x1D976C4))(this, info, showUI);
	}
	template <typename T = void> T AddPickables(Il2CppArray<uintptr_t>* infos, bool showUI, bool needSort) {
		return ((T (*)(ItemData*, Il2CppArray<uintptr_t>*, bool, bool))(Il2CppBase() + 0x1D989FC))(this, infos, showUI, needSort);
	}
	template <typename T = void> T AddReward(Il2CppArray<uintptr_t>* infos, uintptr_t callback, bool needSort) {
		return ((T (*)(ItemData*, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x1D98CD0))(this, infos, callback, needSort);
	}
	template <typename T = void> T AddRestoreRoleByKey(Il2CppArray<uintptr_t>* infos) {
		return ((T (*)(ItemData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1D9968C))(this, infos);
	}
	template <typename T = void> T ShowGetUI(uintptr_t info) {
		return ((T (*)(ItemData*, uintptr_t))(Il2CppBase() + 0x1D984FC))(this, info);
	}
	template <typename T = void> T ShowGetUI_1(Il2CppArray<uintptr_t>* infos, bool needSort) {
		return ((T (*)(ItemData*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1D98B34))(this, infos, needSort);
	}
	template <typename T = int32_t> T GetMaterialCount(Il2CppString* itemName) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D971F0))(this, itemName);
	}
	template <typename T = void> T AddRestoreInfos(Il2CppString* storeKey) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D9A0C4))(this, storeKey);
	}
	template <typename T = void> T AddMaterial(Il2CppString* itemName, int32_t count) {
		return ((T (*)(ItemData*, Il2CppString*, int32_t))(Il2CppBase() + 0x1D97D3C))(this, itemName, count);
	}
	template <typename T = void> T CheckTapeAchievement() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1D9A388))(this);
	}
	template <typename T = void> T ConsumeMaterial(Il2CppString* itemName, int32_t count, bool needRecord) {
		return ((T (*)(ItemData*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1D9A590))(this, itemName, count, needRecord);
	}
	template <typename T = int32_t> T GetSeedCount(Il2CppString* seedName) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D9A8B8))(this, seedName);
	}
	template <typename T = void> T AddSeed(Il2CppString* itemName, int32_t count) {
		return ((T (*)(ItemData*, Il2CppString*, int32_t))(Il2CppBase() + 0x1D977F4))(this, itemName, count);
	}
	template <typename T = void> T ConsumeSeed(Il2CppString* itemName) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D9A9B0))(this, itemName);
	}
	template <typename T = void> T GetBlueprint(Il2CppString* blueprintId) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D979F4))(this, blueprintId);
	}
	template <typename T = void> T ResearchBlueprint(Il2CppString* blueprintId) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D9AB68))(this, blueprintId);
	}
	template <typename T = bool> T HasBlueprint() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1D9AD64))(this);
	}
	template <typename T = void> T UnlockItem(Il2CppString* itemName) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D9A280))(this, itemName);
	}
	template <typename T = bool> T IsItemUnlock(Il2CppString* itemName) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D9BD1C))(this, itemName);
	}
	template <typename T = uintptr_t> T GetBluePrintStatus(Il2CppString* blueprintName) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D9B840))(this, blueprintName);
	}
	template <typename T = void> T AddBossRushTime(int32_t count, bool save) {
		return ((T (*)(ItemData*, int32_t, bool))(Il2CppBase() + 0x1D9BDD4))(this, count, save);
	}
	template <typename T = Il2CppString*> static T get__43OldPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9BEB0))(0);
	}
	template <typename T = Il2CppString*> static T get__43OldBackupPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9BF40))(0);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9BFD0))(0);
	}
	template <typename T = Il2CppString*> static T get_BackupPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9C0BC))(0);
	}
	template <typename T = void> static T FixData(Il2CppString* uid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1D9C1A8))(0, uid);
	}
	template <typename T = void> static T NewData() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9C2E8))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D96DB8))(0);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D97464))(0);
	}
	template <typename T = bool> T HasEnough(Il2CppDictionary<uintptr_t, int32_t>* items) {
		return ((T (*)(ItemData*, Il2CppDictionary<uintptr_t, int32_t>*))(Il2CppBase() + 0x1D9B950))(this, items);
	}
	template <typename T = bool> T HasEnough_1(Il2CppDictionary<uintptr_t, int32_t>* items, Il2CppList<Il2CppString*>* except) {
		return ((T (*)(ItemData*, Il2CppDictionary<uintptr_t, int32_t>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1D9C39C))(this, items, except);
	}
	template <typename T = bool> T HasEnoughIgnoreGem(Il2CppDictionary<uintptr_t, int32_t>* items) {
		return ((T (*)(ItemData*, Il2CppDictionary<uintptr_t, int32_t>*))(Il2CppBase() + 0x1D9C7D0))(this, items);
	}
	template <typename T = void> T ConsumeMaterial_1(Il2CppDictionary<uintptr_t, int32_t>* items, bool save, bool needRecord) {
		return ((T (*)(ItemData*, Il2CppDictionary<uintptr_t, int32_t>*, bool, bool))(Il2CppBase() + 0x1D9C8E4))(this, items, save, needRecord);
	}
	template <typename T = int32_t> T GetTokenTicketCount(Il2CppString* itemName) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D9D078))(this, itemName);
	}
	template <typename T = void> T AddTokenTicket(Il2CppString* itemName, int32_t count) {
		return ((T (*)(ItemData*, Il2CppString*, int32_t))(Il2CppBase() + 0x1D98380))(this, itemName, count);
	}
	template <typename T = void> T ConsumeTokenTicket(Il2CppString* itemName, int32_t count) {
		return ((T (*)(ItemData*, Il2CppString*, int32_t))(Il2CppBase() + 0x1D9D170))(this, itemName, count);
	}
	template <typename T = void> T AddSpecialTicket(Il2CppString* itemName, int32_t count) {
		return ((T (*)(ItemData*, Il2CppString*, int32_t))(Il2CppBase() + 0x1D9D3D8))(this, itemName, count);
	}
	template <typename T = int32_t> T GetSpecialTicket(Il2CppString* itemName) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D961A4))(this, itemName);
	}
	template <typename T = bool> T HasEnteredByHopperTicket(Il2CppString* modeName) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1D9D534))(this, modeName);
	}
	template <typename T = void> T AddHopperEnterMode(Il2CppString* modeName, bool needSave) {
		return ((T (*)(ItemData*, Il2CppString*, bool))(Il2CppBase() + 0x1D9D5EC))(this, modeName, needSave);
	}
	template <typename T = bool> T IsRoomDecorateItemUnlock(uintptr_t room_decorate) {
		return ((T (*)(ItemData*, uintptr_t))(Il2CppBase() + 0x1D9D6E4))(this, room_decorate);
	}
	template <typename T = void> T UnlockRoomDecorateItem(uintptr_t room_decorate, int32_t skin_idx, bool save) {
		return ((T (*)(ItemData*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1D9D8C0))(this, room_decorate, skin_idx, save);
	}
	template <typename T = int32_t> T RoomDecorateItemCount(uintptr_t room_decorate) {
		return ((T (*)(ItemData*, uintptr_t))(Il2CppBase() + 0x1D9DA70))(this, room_decorate);
	}
	template <typename T = void*> T GetUnlockRoomDecorate(uintptr_t room_decorate) {
		return ((T (*)(ItemData*, uintptr_t))(Il2CppBase() + 0x1D9DB88))(this, room_decorate);
	}
	template <typename T = int32_t> T GetRoomDecorateSkinIdx(uintptr_t room_decorate) {
		return ((T (*)(ItemData*, uintptr_t))(Il2CppBase() + 0x1D9DC78))(this, room_decorate);
	}
	template <typename T = void> T SetRoomDecorateSkinIdx(uintptr_t room_decorate, int32_t skin_idx, bool save) {
		return ((T (*)(ItemData*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1D9DD70))(this, room_decorate, skin_idx, save);
	}
	template <typename T = void> T OldFishChipConvert(int32_t oldFishChipAmount, uintptr_t statisticData) {
		return ((T (*)(ItemData*, int32_t, uintptr_t))(Il2CppBase() + 0x1D9DF40))(this, oldFishChipAmount, statisticData);
	}
	template <typename T = void> static T ResetData() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9E088))(0);
	}
	template <typename T = int32_t> static T GetConsumeGemCount(Il2CppDictionary<uintptr_t, int32_t>* materials) {
		return ((T (*)(void *, Il2CppDictionary<uintptr_t, int32_t>*))(Il2CppBase() + 0x1D9E12C))(0, materials);
	}
	template <typename T = void> T Reload() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1D9E338))(this);
	}

};

}
