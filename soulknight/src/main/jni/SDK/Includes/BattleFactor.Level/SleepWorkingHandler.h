#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor.Level {

class SleepWorkingHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor.Level", "SleepWorkingHandler"));
	}

	template <typename T = uintptr_t> T& Factor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& EventNames() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Factor() {
		return ((T (*)(SleepWorkingHandler*))(Il2CppBase() + 0x1B1E208))(this);
	}
	template <typename T = void*> T get_EventNames() {
		return ((T (*)(SleepWorkingHandler*))(Il2CppBase() + 0x1B1E210))(this);
	}
	template <typename T = void> T MakeEffect(Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(SleepWorkingHandler*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B1E218))(this, eventName, target);
	}
	template <typename T = bool> static T CanRandomizeLevel(uintptr_t gameMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B1E574))(0, gameMode);
	}
	template <typename T = int32_t> static T GetLevelCount(uintptr_t targetGameMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B1E5D8))(0, targetGameMode);
	}
	template <typename T = uintptr_t> static T GetRandom(uintptr_t levelInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B1E64C))(0, levelInfo);
	}

};

}
