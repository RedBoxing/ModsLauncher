#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class AchievementManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "AchievementManager"));
	}

	template <typename T = uintptr_t> T& mServices() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T ShowAllUI(void* callback) {
		return ((T (*)(AchievementManager*, void*))(Il2CppBase() + 0x283CE1C))(this, callback);
	}
	template <typename T = void> T FetchAll(void* callback) {
		return ((T (*)(AchievementManager*, void*))(Il2CppBase() + 0x283CFF8))(this, callback);
	}
	template <typename T = void> static T InternalFetchAllCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x283CC14))(0, response, data);
	}
	template <typename T = void> T Fetch(Il2CppString* achId, void* callback) {
		return ((T (*)(AchievementManager*, Il2CppString*, void*))(Il2CppBase() + 0x283D500))(this, achId, callback);
	}
	template <typename T = void> static T InternalFetchCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x283CCE0))(0, response, data);
	}
	template <typename T = void> T Increment(Il2CppString* achievementId, uint32_t numSteps) {
		return ((T (*)(AchievementManager*, Il2CppString*, uint32_t))(Il2CppBase() + 0x283D6A8))(this, achievementId, numSteps);
	}
	template <typename T = void> T SetStepsAtLeast(Il2CppString* achivementId, uint32_t numSteps) {
		return ((T (*)(AchievementManager*, Il2CppString*, uint32_t))(Il2CppBase() + 0x283D780))(this, achivementId, numSteps);
	}
	template <typename T = void> T Reveal(Il2CppString* achievementId) {
		return ((T (*)(AchievementManager*, Il2CppString*))(Il2CppBase() + 0x283D858))(this, achievementId);
	}
	template <typename T = void> T Unlock(Il2CppString* achievementId) {
		return ((T (*)(AchievementManager*, Il2CppString*))(Il2CppBase() + 0x283D924))(this, achievementId);
	}

};

}
