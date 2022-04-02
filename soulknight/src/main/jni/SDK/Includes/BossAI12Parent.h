#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI12Parent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI12Parent"));
	}

	template <typename T = uintptr_t> T& boss_info() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& boss1_obj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& boss2_obj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& single() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& boss_ai_1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& boss_ai_2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& boss_index() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& roomCleared() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& gate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& chest() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BossAI12Parent*))(Il2CppBase() + 0x2EAFDC4))(this);
	}
	template <typename T = void> T ShowBossInfo() {
		return ((T (*)(BossAI12Parent*))(Il2CppBase() + 0x2EB0280))(this);
	}
	template <typename T = uintptr_t> T DetectingBossInfo() {
		return ((T (*)(BossAI12Parent*))(Il2CppBase() + 0x2EB0EA4))(this);
	}
	template <typename T = uintptr_t> T GettingBossInChild() {
		return ((T (*)(BossAI12Parent*))(Il2CppBase() + 0x2EB01CC))(this);
	}
	template <typename T = void> T UpdateBossHp() {
		return ((T (*)(BossAI12Parent*))(Il2CppBase() + 0x2EADEEC))(this);
	}
	template <typename T = void> T BossDead(uintptr_t trDragon) {
		return ((T (*)(BossAI12Parent*, uintptr_t))(Il2CppBase() + 0x2EAE2FC))(this, trDragon);
	}
	template <typename T = void> T OnBossRoomClear() {
		return ((T (*)(BossAI12Parent*))(Il2CppBase() + 0x2EAE5C0))(this);
	}
	template <typename T = void> T CreateReward(uintptr_t trDragon) {
		return ((T (*)(BossAI12Parent*, uintptr_t))(Il2CppBase() + 0x2EB0F58))(this, trDragon);
	}
	template <typename T = void> T CreateTransferGate() {
		return ((T (*)(BossAI12Parent*))(Il2CppBase() + 0x2EB0558))(this);
	}
	template <typename T = void> T ShowTransferGate() {
		return ((T (*)(BossAI12Parent*))(Il2CppBase() + 0x2EB10D0))(this);
	}

};

}
