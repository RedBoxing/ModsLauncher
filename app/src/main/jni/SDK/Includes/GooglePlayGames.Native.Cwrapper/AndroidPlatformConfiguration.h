#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class AndroidPlatformConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "AndroidPlatformConfiguration"));
	}


	template <typename T = void> static T AndroidPlatformConfiguration_SetOnLaunchedWithSnapshot(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CCAFC))(0, self, callback, callback_arg);
	}
	template <typename T = uintptr_t> static T AndroidPlatformConfiguration_Construct() {
		return ((T (*)(void *))(Il2CppBase() + 0x35CCBB8))(0);
	}
	template <typename T = void> static T AndroidPlatformConfiguration_SetOptionalIntentHandlerForUI(uintptr_t self, uintptr_t intent_handler, uintptr_t intent_handler_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CCC44))(0, self, intent_handler, intent_handler_arg);
	}
	template <typename T = void> static T AndroidPlatformConfiguration_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CCD00))(0, self);
	}
	template <typename T = bool> static T AndroidPlatformConfiguration_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CCD9C))(0, self);
	}
	template <typename T = void> static T AndroidPlatformConfiguration_SetActivity(uintptr_t self, uintptr_t android_app_activity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CCE40))(0, self, android_app_activity);
	}
	template <typename T = void> static T AndroidPlatformConfiguration_SetOnLaunchedWithQuest(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CCEEC))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T AndroidPlatformConfiguration_SetOptionalViewForPopups(uintptr_t self, uintptr_t android_view) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CCFA8))(0, self, android_view);
	}

};

}
