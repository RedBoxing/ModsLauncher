#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MailBoxManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailBoxManager"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& RefleshEmail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& RefleshAllEmail() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& AddEmailCallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& AddEmailsCallback() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& RemoveEmailCallback() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& RemoveEmailsCallback() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& GetAwardCallback() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& GetAwardsCallback() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& SetReadCallback() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& SetReadsCallback() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> static T& fetchRemoteEmail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& cocachEmail2GiftPackage() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int64_t>*> T& tempRemoteEmail() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x42FDAC8))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AlreadyGetEmails() {
		return ((T (*)(MailBoxManager*))(Il2CppBase() + 0x42FDDC8))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_AlreadyGetRemoteEmailUids() {
		return ((T (*)(MailBoxManager*))(Il2CppBase() + 0x42FDE80))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MailBoxManager*))(Il2CppBase() + 0x42FDBE0))(this);
	}
	template <typename T = void> T FixOldData() {
		return ((T (*)(MailBoxManager*))(Il2CppBase() + 0x42FDF38))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MailBoxManager*))(Il2CppBase() + 0x42FE1A8))(this);
	}
	template <typename T = void> T TryAddRemoteEmail(Il2CppDictionary<uintptr_t, int64_t>* keyValuePairs) {
		return ((T (*)(MailBoxManager*, Il2CppDictionary<uintptr_t, int64_t>*))(Il2CppBase() + 0x42FF274))(this, keyValuePairs);
	}
	template <typename T = void> T AddEmail(uintptr_t email) {
		return ((T (*)(MailBoxManager*, uintptr_t))(Il2CppBase() + 0x42FEDF0))(this, email);
	}
	template <typename T = void> T AddEmail_1(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(MailBoxManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42FF5B0))(this, emails);
	}
	template <typename T = void> T RemoveEmail(uintptr_t email) {
		return ((T (*)(MailBoxManager*, uintptr_t))(Il2CppBase() + 0x42FF7AC))(this, email);
	}
	template <typename T = void> T RemoveEmail_1(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(MailBoxManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42FF88C))(this, emails);
	}
	template <typename T = void> T TrackGemAward(uintptr_t email, uintptr_t giftPackage) {
		return ((T (*)(MailBoxManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42FF9C0))(this, email, giftPackage);
	}
	template <typename T = void> T GetAward(uintptr_t email, uintptr_t callback) {
		return ((T (*)(MailBoxManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42FFA6C))(this, email, callback);
	}
	template <typename T = void> T GetAward_1(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(MailBoxManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42FFEF8))(this, emails);
	}
	template <typename T = void> T SetAwardByType_ID(uintptr_t emailType, int32_t id) {
		return ((T (*)(MailBoxManager*, uintptr_t, int32_t))(Il2CppBase() + 0x43000F0))(this, emailType, id);
	}
	template <typename T = void> T SetRead(uintptr_t email) {
		return ((T (*)(MailBoxManager*, uintptr_t))(Il2CppBase() + 0x43002C4))(this, email);
	}
	template <typename T = void> T SetRead_1(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(MailBoxManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x430040C))(this, emails);
	}
	template <typename T = uintptr_t> T GetGiftPackage(uintptr_t email) {
		return ((T (*)(MailBoxManager*, uintptr_t))(Il2CppBase() + 0x42FFC18))(this, email);
	}
	template <typename T = bool> T HasEmail(int32_t uid) {
		return ((T (*)(MailBoxManager*, int32_t))(Il2CppBase() + 0x4300524))(this, uid);
	}
	template <typename T = bool> T HasCurrentEmail(int32_t uid) {
		return ((T (*)(MailBoxManager*, int32_t))(Il2CppBase() + 0x43005C0))(this, uid);
	}
	template <typename T = bool> T HasCurrentEmail_1(Il2CppString* title, Il2CppString* sender, Il2CppString* details) {
		return ((T (*)(MailBoxManager*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4300808))(this, title, sender, details);
	}
	template <typename T = bool> T HasHistoryRemoteEmail(int32_t uid) {
		return ((T (*)(MailBoxManager*, int32_t))(Il2CppBase() + 0x430074C))(this, uid);
	}
	template <typename T = uintptr_t> T GetEmail(int32_t uid) {
		return ((T (*)(MailBoxManager*, int32_t))(Il2CppBase() + 0x43009E0))(this, uid);
	}
	template <typename T = void> T Save() {
		return ((T (*)(MailBoxManager*))(Il2CppBase() + 0x42FF50C))(this);
	}
	template <typename T = void> T CallInvoke(uintptr_t action) {
		return ((T (*)(MailBoxManager*, uintptr_t))(Il2CppBase() + 0x4300B68))(this, action);
	}
	template <typename T = void> T CallInvoke_1(void* action, uintptr_t t) {
		return ((T (*)(MailBoxManager*, void*, uintptr_t))(Il2CppBase() + 0x0))(this, action, t);
	}
	template <typename T = void> T CallInvoke_2(void* action, uintptr_t t, uintptr_t u) {
		return ((T (*)(MailBoxManager*, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, action, t, u);
	}
	template <typename T = void> T TAEmail(uintptr_t email, Il2CppString* status) {
		return ((T (*)(MailBoxManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x42FF08C))(this, email, status);
	}

};

}
