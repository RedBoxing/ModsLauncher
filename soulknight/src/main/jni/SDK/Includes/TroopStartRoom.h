#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopStartRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopStartRoom"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& mercenaryDistribute() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mercenaryRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mercenaries() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_mercenaryCount() {
		return ((T (*)(TroopStartRoom*))(Il2CppBase() + 0x4415FB8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TroopStartRoom*))(Il2CppBase() + 0x44160DC))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(TroopStartRoom*, int32_t))(Il2CppBase() + 0x4416190))(this, seed);
	}
	template <typename T = void> T CreateMercenaries(int32_t count) {
		return ((T (*)(TroopStartRoom*, int32_t))(Il2CppBase() + 0x4416260))(this, count);
	}
	template <typename T = void> T RefreshMercenaries() {
		return ((T (*)(TroopStartRoom*))(Il2CppBase() + 0x4414EC0))(this);
	}
	template <typename T = void> T CompleteMercenaries() {
		return ((T (*)(TroopStartRoom*))(Il2CppBase() + 0x440E24C))(this);
	}
	template <typename T = void> T CheckTrinityAchievement() {
		return ((T (*)(TroopStartRoom*))(Il2CppBase() + 0x441655C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(TroopStartRoom*, uintptr_t))(Il2CppBase() + 0x441698C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(TroopStartRoom*, uintptr_t))(Il2CppBase() + 0x4416AE8))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(TroopStartRoom*, int32_t))(Il2CppBase() + 0x4416CB0))(this, P0);
	}

};

}
