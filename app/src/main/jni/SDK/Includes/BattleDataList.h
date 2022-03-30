#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BattleDataList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleDataList"));
	}

	template <typename T = uintptr_t> static T& _list() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TitleSelectSavePlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& battleDatas() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T get_list() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B1B184))(0);
	}
	template <typename T = Il2CppString*> static T get__43OldPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B1B560))(0);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B1B5F0))(0);
	}
	template <typename T = void> static T FixData(Il2CppString* uid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1B1B6DC))(0, uid);
	}
	template <typename T = bool> T get_hasSaveData() {
		return ((T (*)(BattleDataList*))(Il2CppBase() + 0x1B1B7D8))(this);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B1B9E4))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B1B268))(0);
	}
	template <typename T = void> T SetBattleData(uintptr_t battleData, bool save) {
		return ((T (*)(BattleDataList*, uintptr_t, bool))(Il2CppBase() + 0x1B1BA94))(this, battleData, save);
	}
	template <typename T = uintptr_t> static T GetSavePlace(uintptr_t battleData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B1BBD4))(0, battleData);
	}
	template <typename T = uintptr_t> static T GetSavePlace_1(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B1BCB4))(0, mode);
	}
	template <typename T = uintptr_t> T GetBattleData(uintptr_t savePlace) {
		return ((T (*)(BattleDataList*, uintptr_t))(Il2CppBase() + 0x1B1BDA8))(this, savePlace);
	}
	template <typename T = uintptr_t> T GetBattleData_1(uintptr_t mode) {
		return ((T (*)(BattleDataList*, uintptr_t))(Il2CppBase() + 0x1B1BE98))(this, mode);
	}
	template <typename T = bool> T IsBattleDataValid(uintptr_t savePlace) {
		return ((T (*)(BattleDataList*, uintptr_t))(Il2CppBase() + 0x1B1BF5C))(this, savePlace);
	}
	template <typename T = uintptr_t> T GetFirstBattleData() {
		return ((T (*)(BattleDataList*))(Il2CppBase() + 0x1B1C064))(this);
	}
	template <typename T = Il2CppList<void*>*> T GetValidBattleData() {
		return ((T (*)(BattleDataList*))(Il2CppBase() + 0x1B1C0EC))(this);
	}
	template <typename T = uintptr_t> T GetFirstSavePlace() {
		return ((T (*)(BattleDataList*))(Il2CppBase() + 0x1B1C234))(this);
	}
	template <typename T = int32_t> T GetSaveCount() {
		return ((T (*)(BattleDataList*))(Il2CppBase() + 0x1B1B844))(this);
	}
	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B1C2F8))(0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T get_BattleDatas() {
		return ((T (*)(BattleDataList*))(Il2CppBase() + 0x1B1C3C0))(this);
	}
	template <typename T = void> T Reload() {
		return ((T (*)(BattleDataList*))(Il2CppBase() + 0x1B1C420))(this);
	}

};

}
