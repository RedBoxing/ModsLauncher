#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class Builder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "Builder"));
	}


	template <typename T = void> static T GameServices_Builder_SetOnAuthActionStarted(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CDFC0))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T GameServices_Builder_AddOauthScope(uintptr_t self, Il2CppString* scope) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x35CE07C))(0, self, scope);
	}
	template <typename T = void> static T GameServices_Builder_SetLogging(uintptr_t self, uintptr_t callback, uintptr_t callback_arg, uintptr_t min_level) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CE13C))(0, self, callback, callback_arg, min_level);
	}
	template <typename T = uintptr_t> static T GameServices_Builder_Construct() {
		return ((T (*)(void *))(Il2CppBase() + 0x35CE208))(0);
	}
	template <typename T = void> static T GameServices_Builder_EnableSnapshots(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CE294))(0, self);
	}
	template <typename T = void> static T GameServices_Builder_SetOnLog(uintptr_t self, uintptr_t callback, uintptr_t callback_arg, uintptr_t min_level) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CE330))(0, self, callback, callback_arg, min_level);
	}
	template <typename T = void> static T GameServices_Builder_SetDefaultOnLog(uintptr_t self, uintptr_t min_level) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CE3FC))(0, self, min_level);
	}
	template <typename T = void> static T GameServices_Builder_SetOnAuthActionFinished(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CE4A8))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T GameServices_Builder_SetOnTurnBasedMatchEvent(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CE564))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T GameServices_Builder_SetOnQuestCompleted(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CE620))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T GameServices_Builder_SetOnMultiplayerInvitationEvent(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CE6DC))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T GameServices_Builder_SetShowConnectingPopup(uintptr_t self, bool flag) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x35CE798))(0, self, flag);
	}
	template <typename T = uintptr_t> static T GameServices_Builder_Create(uintptr_t self, uintptr_t platform) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CE844))(0, self, platform);
	}
	template <typename T = void> static T GameServices_Builder_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CE8F0))(0, self);
	}

};

}
