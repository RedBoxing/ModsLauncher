#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Games {

class Games
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Games", "Games"));
	}

	template <typename T = Il2CppString*> static T& CLASS_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T get_EXTRA_PLAYER_IDS() {
		return ((T (*)(void *))(Il2CppBase() + 0x20767C4))(0);
	}
	template <typename T = Il2CppString*> static T get_EXTRA_STATUS() {
		return ((T (*)(void *))(Il2CppBase() + 0x2076858))(0);
	}
	template <typename T = uintptr_t> static T get_SCOPE_GAMES() {
		return ((T (*)(void *))(Il2CppBase() + 0x20768EC))(0);
	}
	template <typename T = uintptr_t> static T get_API() {
		return ((T (*)(void *))(Il2CppBase() + 0x2076994))(0);
	}
	template <typename T = uintptr_t> static T get_GamesMetadata() {
		return ((T (*)(void *))(Il2CppBase() + 0x2076A3C))(0);
	}
	template <typename T = uintptr_t> static T get_Achievements() {
		return ((T (*)(void *))(Il2CppBase() + 0x2076AE4))(0);
	}
	template <typename T = uintptr_t> static T get_Events() {
		return ((T (*)(void *))(Il2CppBase() + 0x2076B8C))(0);
	}
	template <typename T = uintptr_t> static T get_Leaderboards() {
		return ((T (*)(void *))(Il2CppBase() + 0x2076C34))(0);
	}
	template <typename T = uintptr_t> static T get_Invitations() {
		return ((T (*)(void *))(Il2CppBase() + 0x2076CDC))(0);
	}
	template <typename T = uintptr_t> static T get_TurnBasedMultiplayer() {
		return ((T (*)(void *))(Il2CppBase() + 0x2076D84))(0);
	}
	template <typename T = uintptr_t> static T get_RealTimeMultiplayer() {
		return ((T (*)(void *))(Il2CppBase() + 0x2076E2C))(0);
	}
	template <typename T = uintptr_t> static T get_Players() {
		return ((T (*)(void *))(Il2CppBase() + 0x2076ED4))(0);
	}
	template <typename T = uintptr_t> static T get_Notifications() {
		return ((T (*)(void *))(Il2CppBase() + 0x2076F7C))(0);
	}
	template <typename T = uintptr_t> static T get_Snapshots() {
		return ((T (*)(void *))(Il2CppBase() + 0x2077024))(0);
	}
	template <typename T = uintptr_t> static T get_Stats() {
		return ((T (*)(void *))(Il2CppBase() + 0x20770CC))(0);
	}
	template <typename T = Il2CppString*> static T getAppId(uintptr_t arg_GoogleApiClient_1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2077174))(0, arg_GoogleApiClient_1);
	}
	template <typename T = Il2CppString*> static T getCurrentAccountName(uintptr_t arg_GoogleApiClient_1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x207728C))(0, arg_GoogleApiClient_1);
	}
	template <typename T = int32_t> static T getSdkVariant(uintptr_t arg_GoogleApiClient_1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x20773A4))(0, arg_GoogleApiClient_1);
	}
	template <typename T = uintptr_t> static T getSettingsIntent(uintptr_t arg_GoogleApiClient_1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x20774BC))(0, arg_GoogleApiClient_1);
	}
	template <typename T = void> static T setGravityForPopups(uintptr_t arg_GoogleApiClient_1, int32_t arg_int_2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x20775D4))(0, arg_GoogleApiClient_1, arg_int_2);
	}
	template <typename T = void> static T setViewForPopups(uintptr_t arg_GoogleApiClient_1, uintptr_t arg_object_2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2077760))(0, arg_GoogleApiClient_1, arg_object_2);
	}
	template <typename T = void*> static T signOut(uintptr_t arg_GoogleApiClient_1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x20778CC))(0, arg_GoogleApiClient_1);
	}

};

}
