#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Other {

class NetMemberInfoManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Other", "NetMemberInfoManager"));
	}

	template <typename T = Il2CppString*> static T& LastRoomId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppDictionary<int32_t, Il2CppString*>*>*> static T& NetUserDataDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppDictionary<int32_t, void*>*>*> static T& NetUserHeroDataDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> static T get_CurrectRoomId() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E736C))(0);
	}
	template <typename T = int32_t> static T get_UserDataCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E7420))(0);
	}
	template <typename T = void> static T AddUserData(int32_t netId, Il2CppString* data, uintptr_t emHero, int32_t skinIndex, bool isLocalPlayer) {
		return ((T (*)(void *, int32_t, Il2CppString*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x44E757C))(0, netId, data, emHero, skinIndex, isLocalPlayer);
	}
	template <typename T = void> static T RemoveUserData(int32_t netId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x44E7BE8))(0, netId);
	}
	template <typename T = Il2CppString*> static T GetUserData(int32_t netId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x44E7E34))(0, netId);
	}
	template <typename T = void*> static T GetUserHeroData(int32_t netId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x44E7F6C))(0, netId);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetAllMemberInfos() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E80A8))(0);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E82E0))(0);
	}
	template <typename T = bool> static T Vaild() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E84B8))(0);
	}
	template <typename T = void*> static T GetLocalData() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E85F4))(0);
	}

};

}
