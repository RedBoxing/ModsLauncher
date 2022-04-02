#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi {

class PlayGamesClientConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi", "PlayGamesClientConfiguration"));
	}

	template <typename T = uintptr_t> static T& DefaultConfiguration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mEnableSavedGames() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mScopes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& mRequestAuthCode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mForceRefresh() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& mHidePopups() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& mRequestEmail() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = bool> T& mRequestIdToken() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& mAccountName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mInvitationDelegate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mMatchDelegate() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T get_EnableSavedGames() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x153B1AC))(this);
	}
	template <typename T = bool> T get_IsHidingPopups() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x153B1B4))(this);
	}
	template <typename T = bool> T get_IsRequestingAuthCode() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x153B1BC))(this);
	}
	template <typename T = bool> T get_IsForcingRefresh() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x153B1C4))(this);
	}
	template <typename T = bool> T get_IsRequestingEmail() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x153B1CC))(this);
	}
	template <typename T = bool> T get_IsRequestingIdToken() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x153B1D4))(this);
	}
	template <typename T = Il2CppString*> T get_AccountName() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x153B1DC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Scopes() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x153B1E4))(this);
	}
	template <typename T = uintptr_t> T get_InvitationDelegate() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x153B1EC))(this);
	}
	template <typename T = uintptr_t> T get_MatchDelegate() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x153B1F4))(this);
	}

};

}
