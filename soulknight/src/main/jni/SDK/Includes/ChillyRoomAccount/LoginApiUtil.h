#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoomAccount {

class LoginApiUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoomAccount", "LoginApiUtil"));
	}


	template <typename T = uintptr_t> static T GetLoginType(Il2CppString* account) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E75B1C))(0, account);
	}
	template <typename T = uintptr_t> static T GetBindTypeByAccount(Il2CppString* account) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E75BD0))(0, account);
	}
	template <typename T = uintptr_t> static T GetRpcEnum(uintptr_t loginType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E75D64))(0, loginType);
	}
	template <typename T = uintptr_t> static T GetBindTypeByAccountType(uintptr_t loginType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E75C34))(0, loginType);
	}
	template <typename T = void*> static T TryRSAEncryptAccountPassword(Il2CppString* account, Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E75E48))(0, account, password);
	}

};

}
