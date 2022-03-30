#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.BattleFactor.LevelBattleFactor {

class BombGiftHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.BattleFactor.LevelBattleFactor", "BombGiftHandler"));
	}

	template <typename T = void*> T& EventNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Factor() {
		return ((T (*)(BombGiftHandler*))(Il2CppBase() + 0x1C2BBAC))(this);
	}
	template <typename T = void*> T get_EventNames() {
		return ((T (*)(BombGiftHandler*))(Il2CppBase() + 0x1C2BC0C))(this);
	}
	template <typename T = void> T MakeEffect(Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(BombGiftHandler*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1C2BC14))(this, eventName, target);
	}

};

}
