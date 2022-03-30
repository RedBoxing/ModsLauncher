#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UltimateSkillModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UltimateSkillModel"));
	}

	template <typename T = uintptr_t> T& bossController() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& scaleLevelCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& characterMaskPrefab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& maskShowEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& triggerShowEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& buffTriggerPrefab() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& enlargeTriggerKey() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& shrinkTriggerKey() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& initWait() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& buffWait() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& explodeWait() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& swampFloorPrefab() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& explodeDamage() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& characterImgPath() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& counterPositionOffset() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& counterPrefab() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& explodeEffectPrefab() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& effectTransform() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& effectOffset() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& releaseClip() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& emitBulletInterval() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = Il2CppVector3> T get_EffectPosition() {
		return ((T (*)(UltimateSkillModel*))(Il2CppBase() + 0x1B8DAD0))(this);
	}

};

}
