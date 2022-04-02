#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampBossUltimateFloor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampBossUltimateFloor"));
	}

	template <typename T = uintptr_t> T& animRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& fadePropertyName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _fadePropertyId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& showDuration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& fadeTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SwampBossUltimateFloor*))(Il2CppBase() + 0x42AAEE0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SwampBossUltimateFloor*))(Il2CppBase() + 0x42AAF4C))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(SwampBossUltimateFloor*))(Il2CppBase() + 0x42AB0E8))(this);
	}

};

}
