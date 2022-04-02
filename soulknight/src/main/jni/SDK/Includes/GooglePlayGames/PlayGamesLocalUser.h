#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames {

class PlayGamesLocalUser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesLocalUser"));
	}

	template <typename T = uintptr_t> T& mPlatform() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& emailAddress() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mStats() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Authenticate(void* callback) {
		return ((T (*)(PlayGamesLocalUser*, void*))(Il2CppBase() + 0x461420C))(this, callback);
	}
	template <typename T = void> T Authenticate_1(void* callback) {
		return ((T (*)(PlayGamesLocalUser*, void*))(Il2CppBase() + 0x4614310))(this, callback);
	}
	template <typename T = void> T Authenticate_2(void* callback, bool silent) {
		return ((T (*)(PlayGamesLocalUser*, void*, bool))(Il2CppBase() + 0x4614414))(this, callback, silent);
	}
	template <typename T = void> T Authenticate_3(void* callback, bool silent) {
		return ((T (*)(PlayGamesLocalUser*, void*, bool))(Il2CppBase() + 0x46145B0))(this, callback, silent);
	}
	template <typename T = void> T LoadFriends(void* callback) {
		return ((T (*)(PlayGamesLocalUser*, void*))(Il2CppBase() + 0x46147C8))(this, callback);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_friends() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x46149E0))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x4614BA0))(this);
	}
	template <typename T = bool> T get_authenticated() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x4614D40))(this);
	}
	template <typename T = bool> T get_underage() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x4614EB0))(this);
	}
	template <typename T = Il2CppString*> T get_userName() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x4614F10))(this);
	}
	template <typename T = Il2CppString*> T get_id() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x4615544))(this);
	}
	template <typename T = bool> T get_isFriend() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x46156E0))(this);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x4615740))(this);
	}
	template <typename T = Il2CppString*> T get_AvatarURL() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x46157A0))(this);
	}
	template <typename T = Il2CppString*> T get_Email() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x46158DC))(this);
	}
	template <typename T = void> T GetStats(void* callback) {
		return ((T (*)(PlayGamesLocalUser*, void*))(Il2CppBase() + 0x4615AD0))(this, callback);
	}

};

}
