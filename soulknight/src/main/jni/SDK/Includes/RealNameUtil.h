#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RealNameUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RealNameUtil"));
	}

	template <typename T = Il2CppString*> static T& UnKnownName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& AdultTicks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& Young() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& getRealName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& showType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> static T get_AccountId() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DED64))(0);
	}
	template <typename T = bool> static T TryGetBirthdayTicks(uintptr_t* birthTicks) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x44DEE8C))(0, birthTicks);
	}
	template <typename T = bool> static T TryGetBirthdayTicks_1(Il2CppString* accountId, uintptr_t* birthTicks) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x44DEF34))(0, accountId, birthTicks);
	}
	template <typename T = void> static T SetBirthdayTicks(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x44DF00C))(0, value);
	}
	template <typename T = void> static T SetBirthdayTicks_1(Il2CppString* accountId, int64_t value) {
		return ((T (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0x44DF0B4))(0, accountId, value);
	}
	template <typename T = bool> static T GetPersonID(Il2CppString* account, uintptr_t* id) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x44DF1EC))(0, account, id);
	}
	template <typename T = void> static T SetPersonID(Il2CppString* account, uint32_t ID) {
		return ((T (*)(void *, Il2CppString*, uint32_t))(Il2CppBase() + 0x44DF2C4))(0, account, ID);
	}
	template <typename T = void> static T OnPurchase(Il2CppString* itemKey) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44DF3FC))(0, itemKey);
	}
	template <typename T = void> static T TACommitRealNameInfo(bool isGte18, float gameTime, Il2CppString* idType, Il2CppString* scene) {
		return ((T (*)(void *, bool, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x44DF50C))(0, isGte18, gameTime, idType, scene);
	}
	template <typename T = void> static T TAClickRealName() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DF730))(0);
	}
	template <typename T = void> static T TACloseRealName() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DF7D8))(0);
	}
	template <typename T = void> static T TATourist() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DF880))(0);
	}
	template <typename T = void> static T TAAddition() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DF928))(0);
	}
	template <typename T = void> static T AddAfterChannelLoginCheckRealNameAndCountingTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DF9D0))(0);
	}
	template <typename T = void> static T ShowChannelCheckRealName() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DFA24))(0);
	}
	template <typename T = void> static T RequestChannelRealNameData() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DFA78))(0);
	}
	template <typename T = void> static T OnRealNameData(int32_t status, Il2CppString* realName, Il2CppString* idCard, Il2CppString* cardType, Il2CppString* leftTime) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x44DFACC))(0, status, realName, idCard, cardType, leftTime);
	}
	template <typename T = bool> static T IsChannelLogined() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DFB60))(0);
	}
	template <typename T = void> static T HandleDefaultRealNameConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DFBB8))(0);
	}
	template <typename T = bool> static T NeedShowWarm() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DFC98))(0);
	}

};

}
