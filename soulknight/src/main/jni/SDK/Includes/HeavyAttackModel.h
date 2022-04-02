#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HeavyAttackModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeavyAttackModel"));
	}

	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& prepareDuration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& bulletEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& releaseTransform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& hammerBulletInfo() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& polyBullet() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& hammerPositionOffset() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& shoutEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& shoutEffectOffset() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& shoutDelay() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& afterReleaseDelay() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& clip() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = float> T get_ReleaseDuration() {
		return ((T (*)(HeavyAttackModel*))(Il2CppBase() + 0x1B94154))(this);
	}

};

}
