#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StatisticData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatisticData"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& object2PassLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& object2PassTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& object2ObtainTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& event2Count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& recordedEvents() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& passInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& season2Prizes() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& c02_skill_times() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& explode_kill_enemy() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& one_pounch_kill_boss_count() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& achieve_record() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& alreadyGetEmails() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<int32_t>*> T& alreadyGetRemoteEmailUids() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int64_t>*> T& mode2SaveGameIdDic() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int64_t>*> T& battleDataSavePlac2SaveGameIdDic() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pass_history_list() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& _hero_init_weapons() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& alreadyGetRemoteEmails() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& maxDefenceWave() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> static T& cy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_pass_history_list() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x429CC50))(this);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T get_hero_init_weapons() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x429CD04))(this);
	}
	template <typename T = int32_t> T get_purchaseCount() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x429CDB8))(this);
	}
	template <typename T = void> T set_purchaseCount(int32_t value) {
		return ((T (*)(StatisticData*, int32_t))(Il2CppBase() + 0x429CF40))(this, value);
	}
	template <typename T = int32_t> T get_maxLevelIndex() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x429D124))(this);
	}
	template <typename T = void> T set_maxLevelIndex(int32_t value) {
		return ((T (*)(StatisticData*, int32_t))(Il2CppBase() + 0x429D1B4))(this, value);
	}
	template <typename T = Il2CppString*> static T get__43OldInternalPersistentPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x429D2C8))(0);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x429D358))(0);
	}
	template <typename T = Il2CppString*> static T get_OldPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x429D444))(0);
	}
	template <typename T = void> static T FixData(Il2CppString* uid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x429D4D4))(0, uid);
	}
	template <typename T = uintptr_t> static T get_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x429D5D0))(0);
	}
	template <typename T = void> static T set_data(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x429DBEC))(0, value);
	}
	template <typename T = void> T SavePassObjects(uintptr_t level, Il2CppArray<uintptr_t>* objectNames) {
		return ((T (*)(StatisticData*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x429DC98))(this, level, objectNames);
	}
	template <typename T = void> T WeaponPassCheck(Il2CppString* weaponName) {
		return ((T (*)(StatisticData*, Il2CppString*))(Il2CppBase() + 0x429DF38))(this, weaponName);
	}
	template <typename T = uintptr_t> T GetPassLevel(Il2CppString* name) {
		return ((T (*)(StatisticData*, Il2CppString*))(Il2CppBase() + 0x429E22C))(this, name);
	}
	template <typename T = int32_t> T GetPassTime(Il2CppString* name) {
		return ((T (*)(StatisticData*, Il2CppString*))(Il2CppBase() + 0x429E324))(this, name);
	}
	template <typename T = int32_t> T GetObtainTime(Il2CppString* name) {
		return ((T (*)(StatisticData*, Il2CppString*))(Il2CppBase() + 0x429E41C))(this, name);
	}
	template <typename T = void> T AddObtainTimes(Il2CppString* name, int32_t addCount, bool save) {
		return ((T (*)(StatisticData*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x429E514))(this, name, addCount, save);
	}
	template <typename T = int32_t> T GetEventCount(Il2CppString* name) {
		return ((T (*)(StatisticData*, Il2CppString*))(Il2CppBase() + 0x429CE48))(this, name);
	}
	template <typename T = void> T AddEventCount(Il2CppString* name, int32_t addCount, bool save) {
		return ((T (*)(StatisticData*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x429E6C0))(this, name, addCount, save);
	}
	template <typename T = void> T SetEventCount(Il2CppString* name, int32_t count, bool save) {
		return ((T (*)(StatisticData*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x429CFEC))(this, name, count, save);
	}
	template <typename T = void> T RecordEvent(Il2CppString* eventName, bool save) {
		return ((T (*)(StatisticData*, Il2CppString*, bool))(Il2CppBase() + 0x429E86C))(this, eventName, save);
	}
	template <typename T = bool> T IsEventRecord(Il2CppString* eventName) {
		return ((T (*)(StatisticData*, Il2CppString*))(Il2CppBase() + 0x429E9B4))(this, eventName);
	}
	template <typename T = void> T UpdatePassInfoStr(Il2CppString* key, Il2CppString* time, bool save) {
		return ((T (*)(StatisticData*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x429EA6C))(this, key, time, save);
	}
	template <typename T = Il2CppString*> T GetPassInfoStr(Il2CppString* key) {
		return ((T (*)(StatisticData*, Il2CppString*))(Il2CppBase() + 0x429EB80))(this, key);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x429E084))(0);
	}
	template <typename T = void> static T NewData() {
		return ((T (*)(void *))(Il2CppBase() + 0x429EC78))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x429D6B4))(0);
	}
	template <typename T = void> T Merge(uintptr_t other) {
		return ((T (*)(StatisticData*, uintptr_t))(Il2CppBase() + 0x429EF9C))(this, other);
	}
	template <typename T = void> T CopyFromGame() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x429FACC))(this);
	}
	template <typename T = void> T CopyAddtionFromGame() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x42A0C74))(this);
	}
	template <typename T = void> T CopyAddtionFromGame2() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x42A0EE4))(this);
	}
	template <typename T = void> T RestoreWeaponTimes() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x42A115C))(this);
	}
	template <typename T = void> T ResetPassTimes() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x42A13CC))(this);
	}
	template <typename T = void> T UpdateAchievementRecord(int32_t id, uintptr_t info) {
		return ((T (*)(StatisticData*, int32_t, uintptr_t))(Il2CppBase() + 0x42A15F8))(this, id, info);
	}
	template <typename T = uintptr_t> T GetAchievementRecordById(int32_t id) {
		return ((T (*)(StatisticData*, int32_t))(Il2CppBase() + 0x42A1740))(this, id);
	}
	template <typename T = void> T AchievementGotAward(int32_t id, bool save) {
		return ((T (*)(StatisticData*, int32_t, bool))(Il2CppBase() + 0x42A1858))(this, id, save);
	}
	template <typename T = void> static T ResetData() {
		return ((T (*)(void *))(Il2CppBase() + 0x42A1968))(0);
	}
	template <typename T = void> T AddNewPassHistory(uintptr_t info) {
		return ((T (*)(StatisticData*, uintptr_t))(Il2CppBase() + 0x42A1A0C))(this, info);
	}
	template <typename T = void> T RecordSaveId() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x42A1B80))(this);
	}
	template <typename T = uintptr_t> T GetSeasonPrize(uintptr_t season) {
		return ((T (*)(StatisticData*, uintptr_t))(Il2CppBase() + 0x42A1D98))(this, season);
	}
	template <typename T = void> T SetSeasonPrize(uintptr_t season, uintptr_t prize) {
		return ((T (*)(StatisticData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42A1E90))(this, season, prize);
	}
	template <typename T = bool> T UnlockHandSwordAc() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x42A1FE0))(this);
	}
	template <typename T = void> T Reload() {
		return ((T (*)(StatisticData*))(Il2CppBase() + 0x42A20AC))(this);
	}

};

}
