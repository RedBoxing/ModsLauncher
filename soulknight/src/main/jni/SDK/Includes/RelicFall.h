#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicFall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicFall"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelicFall*))(Il2CppBase() + 0x42BEE68))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RelicFall*))(Il2CppBase() + 0x42BF06C))(this);
	}
	template <typename T = void> T OnCharacterCreate(uintptr_t eventBase) {
		return ((T (*)(RelicFall*, uintptr_t))(Il2CppBase() + 0x42BF270))(this, eventBase);
	}
	template <typename T = void> T OnEnemyCreate(uintptr_t eventBase) {
		return ((T (*)(RelicFall*, uintptr_t))(Il2CppBase() + 0x42BF39C))(this, eventBase);
	}
	template <typename T = void> T OnBossCreate(uintptr_t eventBase) {
		return ((T (*)(RelicFall*, uintptr_t))(Il2CppBase() + 0x42BF4C4))(this, eventBase);
	}
	template <typename T = void> T OnPetStart(uintptr_t e) {
		return ((T (*)(RelicFall*, uintptr_t))(Il2CppBase() + 0x42BF5D8))(this, e);
	}
	template <typename T = void> T OnEnemySplit(uintptr_t eventBase) {
		return ((T (*)(RelicFall*, uintptr_t))(Il2CppBase() + 0x42BF7AC))(this, eventBase);
	}

};

}
