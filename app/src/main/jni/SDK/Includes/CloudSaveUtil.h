#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudSaveUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudSaveUtil"));
	}

	template <typename T = Il2CppString*> static T& password() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& isValidEmail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& needVerityEmail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& Account() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& Phone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& Email() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& LoginType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = bool> static T& IsBindPhone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppString*> static T& _uid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& uid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uint32_t> static T& _chilly_uid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uint32_t> static T& chilly_uid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = Il2CppString*> static T& channel_uid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppString*> static T& _pf_id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = Il2CppString*> static T& _mac() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = Il2CppString*> static T& LastSendSMSPhoneNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, bool>*> static T& channelUidRegDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = bool> static T& loadChannelUidRegDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = Il2CppString*> static T& path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& defineCloudSaveID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = Il2CppString*> static T get_version() {
		return ((T (*)(void *))(Il2CppBase() + 0x206C084))(0);
	}
	template <typename T = Il2CppString*> static T get_Account() {
		return ((T (*)(void *))(Il2CppBase() + 0x206DE6C))(0);
	}
	template <typename T = void> static T set_Account(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x206DED4))(0, value);
	}
	template <typename T = Il2CppString*> static T get_Phone() {
		return ((T (*)(void *))(Il2CppBase() + 0x206DF40))(0);
	}
	template <typename T = void> static T set_Phone(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x206DFA8))(0, value);
	}
	template <typename T = Il2CppString*> static T get_Email() {
		return ((T (*)(void *))(Il2CppBase() + 0x206E014))(0);
	}
	template <typename T = void> static T set_Email(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x206E07C))(0, value);
	}
	template <typename T = uintptr_t> static T get_LoginType() {
		return ((T (*)(void *))(Il2CppBase() + 0x206E0E8))(0);
	}
	template <typename T = void> static T set_LoginType(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x206E150))(0, value);
	}
	template <typename T = bool> static T get_IsBindPhone() {
		return ((T (*)(void *))(Il2CppBase() + 0x206E1BC))(0);
	}
	template <typename T = void> static T set_IsBindPhone(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x206E224))(0, value);
	}
	template <typename T = Il2CppString*> static T get_uid() {
		return ((T (*)(void *))(Il2CppBase() + 0x206E294))(0);
	}
	template <typename T = void> static T set_uid(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x206E2FC))(0, value);
	}
	template <typename T = uint32_t> static T get_chilly_uid() {
		return ((T (*)(void *))(Il2CppBase() + 0x206E368))(0);
	}
	template <typename T = void> static T set_chilly_uid(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x206E3D0))(0, value);
	}
	template <typename T = Il2CppString*> static T get_channel_uid() {
		return ((T (*)(void *))(Il2CppBase() + 0x206E43C))(0);
	}
	template <typename T = void> static T set_channel_uid(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x206E4A4))(0, value);
	}
	template <typename T = Il2CppString*> static T get_pf_id() {
		return ((T (*)(void *))(Il2CppBase() + 0x206E510))(0);
	}
	template <typename T = Il2CppString*> static T get_mac() {
		return ((T (*)(void *))(Il2CppBase() + 0x206E5AC))(0);
	}
	template <typename T = Il2CppString*> static T get_sign() {
		return ((T (*)(void *))(Il2CppBase() + 0x206E724))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x206E8B4))(0);
	}
	template <typename T = void> static T set_data(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x206E91C))(0, value);
	}
	template <typename T = Il2CppString*> static T GetSign(Il2CppString* rowString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x206E7E8))(0, rowString);
	}
	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x206E988))(0);
	}
	template <typename T = Il2CppString*> static T GetAccounByEmail(Il2CppString* email) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x206EAA8))(0, email);
	}
	template <typename T = void> static T SetAccounByEmail(Il2CppString* email, Il2CppString* account) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x206EB58))(0, email, account);
	}
	template <typename T = Il2CppString*> static T GetSaveId() {
		return ((T (*)(void *))(Il2CppBase() + 0x206EC0C))(0);
	}
	template <typename T = bool> static T get_UserNoticeAgreed() {
		return ((T (*)(void *))(Il2CppBase() + 0x206EC98))(0);
	}
	template <typename T = void> static T set_UserNoticeAgreed(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x206ED30))(0, value);
	}
	template <typename T = bool> static T HasLogin() {
		return ((T (*)(void *))(Il2CppBase() + 0x206EDC4))(0);
	}
	template <typename T = bool> static T IsChangeChnnelSupported() {
		return ((T (*)(void *))(Il2CppBase() + 0x206EE1C))(0);
	}
	template <typename T = Il2CppString*> static T get_LastSendSMSPhoneNumber() {
		return ((T (*)(void *))(Il2CppBase() + 0x206EE74))(0);
	}
	template <typename T = void> static T set_LastSendSMSPhoneNumber(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x206EEDC))(0, value);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, bool>*> static T get_ChannelUidRegDic() {
		return ((T (*)(void *))(Il2CppBase() + 0x206EF48))(0);
	}
	template <typename T = void> static T AddChannelUidData(Il2CppString* uid, bool isReg) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x206F674))(0, uid, isReg);
	}
	template <typename T = Il2CppString*> static T get_IsAddChannelUidData() {
		return ((T (*)(void *))(Il2CppBase() + 0x206F814))(0);
	}
	template <typename T = void> static T set_IsAddChannelUidData(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x206F8B0))(0, value);
	}
	template <typename T = void> static T LoadChannelUidRegDic() {
		return ((T (*)(void *))(Il2CppBase() + 0x206F02C))(0);
	}
	template <typename T = void> static T SaveChannelUidRegDic() {
		return ((T (*)(void *))(Il2CppBase() + 0x206F75C))(0);
	}
	template <typename T = void> static T ClearCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x206F944))(0);
	}
	template <typename T = Il2CppString*> static T GetDefineCloudSaveChannelId(Il2CppString* channelName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x206FA0C))(0, channelName);
	}
	template <typename T = bool> static T TryGetDefineCloudSaveChannelId(Il2CppString* saveLocalID, uintptr_t* channelName, uintptr_t* defineCloudSaveId) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x206FC64))(0, saveLocalID, channelName, defineCloudSaveId);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T get_DefineCloudSaveID() {
		return ((T (*)(void *))(Il2CppBase() + 0x206FB4C))(0);
	}
	template <typename T = void> static T SetAndroidUid(Il2CppString* targetUID) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x206FF64))(0, targetUID);
	}

};

}
