#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames {

class TokenClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "TokenClient"));
	}


	template <typename T = Il2CppString*> T GetEmail() {
		return ((T (*)(TokenClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetAuthCode() {
		return ((T (*)(TokenClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(TokenClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(TokenClient*, bool, void*))(Il2CppBase() + 0x0))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = void> T Signout() {
		return ((T (*)(TokenClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetRequestAuthCode(bool flag, bool forceRefresh) {
		return ((T (*)(TokenClient*, bool, bool))(Il2CppBase() + 0x0))(this, flag, forceRefresh);
	}
	template <typename T = void> T SetRequestEmail(bool flag) {
		return ((T (*)(TokenClient*, bool))(Il2CppBase() + 0x0))(this, flag);
	}
	template <typename T = void> T SetRequestIdToken(bool flag) {
		return ((T (*)(TokenClient*, bool))(Il2CppBase() + 0x0))(this, flag);
	}
	template <typename T = void> T SetWebClientId(Il2CppString* webClientId) {
		return ((T (*)(TokenClient*, Il2CppString*))(Il2CppBase() + 0x0))(this, webClientId);
	}
	template <typename T = void> T SetAccountName(Il2CppString* accountName) {
		return ((T (*)(TokenClient*, Il2CppString*))(Il2CppBase() + 0x0))(this, accountName);
	}
	template <typename T = void> T AddOauthScopes(Il2CppArray<uintptr_t>* scopes) {
		return ((T (*)(TokenClient*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, scopes);
	}
	template <typename T = void> T SetHidePopups(bool flag) {
		return ((T (*)(TokenClient*, bool))(Il2CppBase() + 0x0))(this, flag);
	}
	template <typename T = void> T FetchTokens(bool silent, void* callback) {
		return ((T (*)(TokenClient*, bool, void*))(Il2CppBase() + 0x0))(this, silent, callback);
	}

};

}
