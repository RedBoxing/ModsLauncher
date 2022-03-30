#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBulletSpawnTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBulletSpawnTrigger"));
	}

	template <typename T = uintptr_t> T& targetEmitter() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ArtifactBulletSpawnTrigger*))(Il2CppBase() + 0x1C9BAE8))(this);
	}
	template <typename T = void> T EmitBullet(uintptr_t emitInfo) {
		return ((T (*)(ArtifactBulletSpawnTrigger*, uintptr_t))(Il2CppBase() + 0x1C9BBC4))(this, emitInfo);
	}
	template <typename T = void> T Awakeb__1_0(uintptr_t bulletObject, float chargeAmount) {
		return ((T (*)(ArtifactBulletSpawnTrigger*, uintptr_t, float))(Il2CppBase() + 0x1C9BCBC))(this, bulletObject, chargeAmount);
	}

};

}
