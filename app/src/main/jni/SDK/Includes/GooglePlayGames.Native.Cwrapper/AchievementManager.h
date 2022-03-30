#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class AchievementManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "AchievementManager"));
	}


	template <typename T = void> static T AchievementManager_FetchAll(uintptr_t self, uintptr_t data_source, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CB1B0))(0, self, data_source, callback, callback_arg);
	}
	template <typename T = void> static T AchievementManager_Reveal(uintptr_t self, Il2CppString* achievement_id) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x35CB27C))(0, self, achievement_id);
	}
	template <typename T = void> static T AchievementManager_Unlock(uintptr_t self, Il2CppString* achievement_id) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x35CB33C))(0, self, achievement_id);
	}
	template <typename T = void> static T AchievementManager_ShowAllUI(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CB3FC))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T AchievementManager_SetStepsAtLeast(uintptr_t self, Il2CppString* achievement_id, uint32_t steps) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uint32_t))(Il2CppBase() + 0x35CB4B8))(0, self, achievement_id, steps);
	}
	template <typename T = void> static T AchievementManager_Increment(uintptr_t self, Il2CppString* achievement_id, uint32_t steps) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uint32_t))(Il2CppBase() + 0x35CB580))(0, self, achievement_id, steps);
	}
	template <typename T = void> static T AchievementManager_Fetch(uintptr_t self, uintptr_t data_source, Il2CppString* achievement_id, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CB648))(0, self, data_source, achievement_id, callback, callback_arg);
	}
	template <typename T = void> static T AchievementManager_FetchAllResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CB730))(0, self);
	}
	template <typename T = uintptr_t> static T AchievementManager_FetchAllResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CB7CC))(0, self);
	}
	template <typename T = uintptr_t> static T AchievementManager_FetchAllResponse_GetData_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CB868))(0, self);
	}
	template <typename T = uintptr_t> static T AchievementManager_FetchAllResponse_GetData_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CB904))(0, self, index);
	}
	template <typename T = void> static T AchievementManager_FetchResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CB9B0))(0, self);
	}
	template <typename T = uintptr_t> static T AchievementManager_FetchResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CBA4C))(0, self);
	}
	template <typename T = uintptr_t> static T AchievementManager_FetchResponse_GetData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CBAE8))(0, self);
	}

};

}
