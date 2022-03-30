#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossCreator"));
	}

	template <typename T = uintptr_t> T& boss() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& subspecies_boss_rate() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& subspecies_boss_list() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& distributions() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& onInstantiateGate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& onShowGate() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<void*>*> T& onAfterBossCreates1() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> T& onAfterBossCreate2() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& onCreateBoss() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T add_onInstantiateGate(void* value) {
		return ((T (*)(BossCreator*, void*))(Il2CppBase() + 0x1DE8004))(this, value);
	}
	template <typename T = void> T remove_onInstantiateGate(void* value) {
		return ((T (*)(BossCreator*, void*))(Il2CppBase() + 0x1DE80F0))(this, value);
	}
	template <typename T = void> T add_onShowGate(uintptr_t value) {
		return ((T (*)(BossCreator*, uintptr_t))(Il2CppBase() + 0x1DE81DC))(this, value);
	}
	template <typename T = void> T remove_onShowGate(uintptr_t value) {
		return ((T (*)(BossCreator*, uintptr_t))(Il2CppBase() + 0x1DE82C8))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BossCreator*))(Il2CppBase() + 0x1DE83B4))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(BossCreator*, int32_t))(Il2CppBase() + 0x1DE8410))(this, seed);
	}
	template <typename T = uintptr_t> T CreateBoss(uintptr_t bossProto, bool increaseCount) {
		return ((T (*)(BossCreator*, uintptr_t, bool))(Il2CppBase() + 0x1DE8C00))(this, bossProto, increaseCount);
	}
	template <typename T = void> T SetIndex(uintptr_t boss, int32_t index) {
		return ((T (*)(BossCreator*, uintptr_t, int32_t))(Il2CppBase() + 0x1DE90EC))(this, boss, index);
	}
	template <typename T = void> T AfterCreateBoss(Il2CppString* boss_name1, Il2CppString* boss_name2) {
		return ((T (*)(BossCreator*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DE928C))(this, boss_name1, boss_name2);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(BossCreator*, int32_t))(Il2CppBase() + 0x1DE9400))(this, P0);
	}

};

}
