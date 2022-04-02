#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BattleScore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleScore"));
	}

	template <typename T = int32_t> T& totalScroe() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& enemyKill() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& enemyExKill() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& bossKill() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& roomPass() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& noHurtRoon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& roomExScroe() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& noHurtRoonEx() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& roomBossScroe() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& noHurtRoonBoss() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& passTimeScroe() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& coinScroe() {
		return *(T*)((uintptr_t)this + 0x3C);
	}


};

}
