#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopModeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopModeData"));
	}

	template <typename T = int32_t> T& flagLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& plutusLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& firstHire() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& petIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& allDead() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& followInBattle() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = float> static T& MaxHpFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_MaxMercenariesCount() {
		return ((T (*)(TroopModeData*))(Il2CppBase() + 0x440DC54))(this);
	}
	template <typename T = int32_t> T get_levelIndex() {
		return ((T (*)(TroopModeData*))(Il2CppBase() + 0x4415510))(this);
	}
	template <typename T = float> T get_hpFactor() {
		return ((T (*)(TroopModeData*))(Il2CppBase() + 0x4415584))(this);
	}

};

}
