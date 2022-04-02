#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SettingData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingData"));
	}

	template <typename T = uintptr_t> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> T& shakeLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& sandboxFlyable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& promotionIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& promotionID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& bgmName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& movePosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& skillPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector2> T& weaponPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& attackPosition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector2> T& specialPosition() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector2> T& emoticonPosition() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int64_t> T& lastSendEmailTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int64_t>*> T& account2Birthday() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& account2Name() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uint32_t>*> T& account2PersonId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& account2ThisDayTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& account2ResetAdditionDay() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& account2ResetPurchaseDay() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& account2PurchaseTotal() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, unsigned char>*> T& account2ChangeCount() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& HasSolveOldRealNameData2NewData() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& PlayerBirthNameDatas() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& PlayTimePurchaseDatas() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = uintptr_t> static T get_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x1826838))(0);
	}
	template <typename T = void> static T set_data(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1826A38))(0, value);
	}
	template <typename T = Il2CppString*> static T get__43OldPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1826AE4))(0);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x1826B74))(0);
	}
	template <typename T = void> static T FixData(Il2CppString* uid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1826C60))(0, uid);
	}
	template <typename T = void> static T NewData() {
		return ((T (*)(void *))(Il2CppBase() + 0x1826D5C))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x182691C))(0);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x1826E10))(0);
	}
	template <typename T = bool> T get_arrowDismiss() {
		return ((T (*)(SettingData*))(Il2CppBase() + 0x1826F00))(this);
	}
	template <typename T = void> T ResetPositions() {
		return ((T (*)(SettingData*))(Il2CppBase() + 0x1826F60))(this);
	}
	template <typename T = bool> T GetBirthday(Il2CppString* account, uintptr_t* birth) {
		return ((T (*)(SettingData*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x18270D0))(this, account, birth);
	}
	template <typename T = void> T SetBirthday(Il2CppString* account, int64_t birthday) {
		return ((T (*)(SettingData*, Il2CppString*, int64_t))(Il2CppBase() + 0x18271DC))(this, account, birthday);
	}
	template <typename T = bool> T GetPersonName(Il2CppString* account, uintptr_t* name) {
		return ((T (*)(SettingData*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x18272A0))(this, account, name);
	}
	template <typename T = void> T SetPersonName(Il2CppString* account, Il2CppString* name) {
		return ((T (*)(SettingData*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x18273AC))(this, account, name);
	}
	template <typename T = bool> T GetPersonID(Il2CppString* account, uintptr_t* id) {
		return ((T (*)(SettingData*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x1827470))(this, account, id);
	}
	template <typename T = void> T SetPersonID(Il2CppString* account, uint32_t ID) {
		return ((T (*)(SettingData*, Il2CppString*, uint32_t))(Il2CppBase() + 0x1827534))(this, account, ID);
	}
	template <typename T = int32_t> T GetThisDayTime(Il2CppString* account) {
		return ((T (*)(SettingData*, Il2CppString*))(Il2CppBase() + 0x18275F8))(this, account);
	}
	template <typename T = void> T SetThisDayTime(Il2CppString* account, int32_t thisDayTime) {
		return ((T (*)(SettingData*, Il2CppString*, int32_t))(Il2CppBase() + 0x18276F0))(this, account, thisDayTime);
	}
	template <typename T = int32_t> T GetResetAddtionTimeDay(Il2CppString* account) {
		return ((T (*)(SettingData*, Il2CppString*))(Il2CppBase() + 0x18277B4))(this, account);
	}
	template <typename T = void> T SetResetAddtionTimeDay(Il2CppString* account, int32_t resetDay) {
		return ((T (*)(SettingData*, Il2CppString*, int32_t))(Il2CppBase() + 0x18278AC))(this, account, resetDay);
	}
	template <typename T = int32_t> T GetResetPurchaseDay(Il2CppString* account) {
		return ((T (*)(SettingData*, Il2CppString*))(Il2CppBase() + 0x1827970))(this, account);
	}
	template <typename T = void> T SetResetPurchaseDay(Il2CppString* account, int32_t resetDay) {
		return ((T (*)(SettingData*, Il2CppString*, int32_t))(Il2CppBase() + 0x1827A68))(this, account, resetDay);
	}
	template <typename T = int32_t> T GetPurchaseTotal(Il2CppString* account) {
		return ((T (*)(SettingData*, Il2CppString*))(Il2CppBase() + 0x1827B2C))(this, account);
	}
	template <typename T = void> T SetPurchaseTotal(Il2CppString* account, int32_t purchaseTotal) {
		return ((T (*)(SettingData*, Il2CppString*, int32_t))(Il2CppBase() + 0x1827C24))(this, account, purchaseTotal);
	}
	template <typename T = unsigned char> T GetRealNameChangeCount(Il2CppString* account) {
		return ((T (*)(SettingData*, Il2CppString*))(Il2CppBase() + 0x1827CE8))(this, account);
	}
	template <typename T = void> T SetRealNameChangeCount(Il2CppString* account, unsigned char changeCount) {
		return ((T (*)(SettingData*, Il2CppString*, unsigned char))(Il2CppBase() + 0x1827DE0))(this, account, changeCount);
	}
	template <typename T = void> T RefreshRealNameData() {
		return ((T (*)(SettingData*))(Il2CppBase() + 0x1827EA4))(this);
	}
	template <typename T = void> T CoverRealNameData() {
		return ((T (*)(SettingData*))(Il2CppBase() + 0x1828040))(this);
	}
	template <typename T = void> static T HandleRealNameDataChange() {
		return ((T (*)(void *))(Il2CppBase() + 0x1828754))(0);
	}
	template <typename T = void> T Reload() {
		return ((T (*)(SettingData*))(Il2CppBase() + 0x1829004))(this);
	}

};

}
