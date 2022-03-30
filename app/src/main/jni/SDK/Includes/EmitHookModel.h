#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EmitHookModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmitHookModel"));
	}

	template <typename T = float> T& aimTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& emitDelay() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& hookSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& flyTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& dragPlayerMinDistance() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& aimPrefab() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& aimLinePrefab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& meleeAtkBullet() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& meleeAttackDistance() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& meleeAttackAudioClip() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& CDReduce() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& hookEmitAudioClip() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& hookFlyAudioClip() {
		return *(T*)((uintptr_t)this + 0x78);
	}


};

}
