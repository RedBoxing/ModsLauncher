#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor.Enemy {

class EnemyFlashHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor.Enemy", "EnemyFlashHandler"));
	}

	template <typename T = float> static T& FlashProbability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Factor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& EventNames() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T MakeEffect(Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(EnemyFlashHandler*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B1C520))(this, eventName, target);
	}
	template <typename T = bool> T CanEnemyFlash(uintptr_t target) {
		return ((T (*)(EnemyFlashHandler*, uintptr_t))(Il2CppBase() + 0x1B1C5D0))(this, target);
	}
	template <typename T = uintptr_t> T get_Factor() {
		return ((T (*)(EnemyFlashHandler*))(Il2CppBase() + 0x1B1C6B4))(this);
	}
	template <typename T = void*> T get_EventNames() {
		return ((T (*)(EnemyFlashHandler*))(Il2CppBase() + 0x1B1C6BC))(this);
	}

};

}
