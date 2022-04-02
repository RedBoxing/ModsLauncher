#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampSacrificEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampSacrificEffect"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& explodeItems() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& weaponSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& weaponTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& weaponTargetPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& weaponMoveTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& itemExplodeTimeRange() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& itemExplodeDistanceRange() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& itemTargetPosition() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector2> T& itemTargetTimeRange() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector2> T& itemTargetDistanceRange() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& hitObject() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& weaponExplodeClip() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Init(int32_t count, uintptr_t sprite, uintptr_t spriteTransform) {
		return ((T (*)(SwampSacrificEffect*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18B835C))(this, count, sprite, spriteTransform);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(SwampSacrificEffect*))(Il2CppBase() + 0x18B8AC8))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(SwampSacrificEffect*))(Il2CppBase() + 0x18B8B98))(this);
	}

};

}
