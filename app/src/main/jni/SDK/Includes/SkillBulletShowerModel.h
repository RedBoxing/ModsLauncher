#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillBulletShowerModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillBulletShowerModel"));
	}

	template <typename T = uintptr_t> T& audio() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bulletInfoInspector() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& emitCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& emitWave() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& emitInterval() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& angleSpan() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& emitEfxPrefab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& emitPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& marksLeft() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& marksRight() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& rechargeLostHP() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& accumulated_lost_hp_proportion() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& recharge() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = bool> T get_rechargeComplete() {
		return ((T (*)(SkillBulletShowerModel*))(Il2CppBase() + 0x1B9CE6C))(this);
	}
	template <typename T = float> T get_accumulated_lost_hp_proportion() {
		return ((T (*)(SkillBulletShowerModel*))(Il2CppBase() + 0x1B9D534))(this);
	}
	template <typename T = void> T set_accumulated_lost_hp_proportion(float value) {
		return ((T (*)(SkillBulletShowerModel*, float))(Il2CppBase() + 0x1B9D53C))(this, value);
	}
	template <typename T = int32_t> T get_recharge() {
		return ((T (*)(SkillBulletShowerModel*))(Il2CppBase() + 0x1B9D544))(this);
	}
	template <typename T = void> T set_recharge(int32_t value) {
		return ((T (*)(SkillBulletShowerModel*, int32_t))(Il2CppBase() + 0x1B9D54C))(this, value);
	}

};

}
