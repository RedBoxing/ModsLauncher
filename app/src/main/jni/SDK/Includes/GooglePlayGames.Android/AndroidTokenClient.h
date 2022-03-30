#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Android {

class AndroidTokenClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Android", "AndroidTokenClient"));
	}

	template <typename T = Il2CppString*> static T& TokenFragmentClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& requestEmail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& requestAuthCode() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& requestIdToken() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& oauthScopes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& webClientId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& forceRefresh() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& hidePopups() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = Il2CppString*> T& accountName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& email() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& authCode() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& idToken() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> static T CreateInvisibleView() {
		return ((T (*)(void *))(Il2CppBase() + 0x443FAA4))(0);
	}
	template <typename T = uintptr_t> static T GetActivity() {
		return ((T (*)(void *))(Il2CppBase() + 0x443E148))(0);
	}
	template <typename T = void> T SetRequestAuthCode(bool flag, bool forceRefresh) {
		return ((T (*)(AndroidTokenClient*, bool, bool))(Il2CppBase() + 0x443FCB8))(this, flag, forceRefresh);
	}
	template <typename T = void> T SetRequestEmail(bool flag) {
		return ((T (*)(AndroidTokenClient*, bool))(Il2CppBase() + 0x443FD40))(this, flag);
	}
	template <typename T = void> T SetRequestIdToken(bool flag) {
		return ((T (*)(AndroidTokenClient*, bool))(Il2CppBase() + 0x443FDB8))(this, flag);
	}
	template <typename T = void> T SetWebClientId(Il2CppString* webClientId) {
		return ((T (*)(AndroidTokenClient*, Il2CppString*))(Il2CppBase() + 0x443FE30))(this, webClientId);
	}
	template <typename T = void> T SetHidePopups(bool flag) {
		return ((T (*)(AndroidTokenClient*, bool))(Il2CppBase() + 0x443FEA4))(this, flag);
	}
	template <typename T = void> T SetAccountName(Il2CppString* accountName) {
		return ((T (*)(AndroidTokenClient*, Il2CppString*))(Il2CppBase() + 0x443FF1C))(this, accountName);
	}
	template <typename T = void> T AddOauthScopes(Il2CppArray<uintptr_t>* scopes) {
		return ((T (*)(AndroidTokenClient*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x443FF90))(this, scopes);
	}
	template <typename T = void> T Signout() {
		return ((T (*)(AndroidTokenClient*))(Il2CppBase() + 0x4440088))(this);
	}
	template <typename T = Il2CppString*> T GetEmail() {
		return ((T (*)(AndroidTokenClient*))(Il2CppBase() + 0x44401CC))(this);
	}
	template <typename T = Il2CppString*> T GetAuthCode() {
		return ((T (*)(AndroidTokenClient*))(Il2CppBase() + 0x444022C))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(AndroidTokenClient*))(Il2CppBase() + 0x444028C))(this);
	}
	template <typename T = void> T FetchTokens(bool silent, void* callback) {
		return ((T (*)(AndroidTokenClient*, bool, void*))(Il2CppBase() + 0x44402EC))(this, silent, callback);
	}
	template <typename T = void> T DoFetchToken(bool silent, void* callback) {
		return ((T (*)(AndroidTokenClient*, bool, void*))(Il2CppBase() + 0x4440444))(this, silent, callback);
	}
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(AndroidTokenClient*, bool, void*))(Il2CppBase() + 0x4440F00))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = void> T DoGetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(AndroidTokenClient*, bool, void*))(Il2CppBase() + 0x4441058))(this, reAuthenticateIfNeeded, callback);
	}

};

}
