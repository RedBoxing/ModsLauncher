#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PriestSkill3BodyEffectS7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriestSkill3BodyEffectS7"));
	}

	template <typename T = Il2CppString*> T& animBoolNameIsLight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& localPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& hideBulletWhileSurround() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& releasePositions() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _animBoolIdIsLight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _releaseIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isNormalMode() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T get_HideBulletWhileSurround() {
		return ((T (*)(PriestSkill3BodyEffectS7*))(Il2CppBase() + 0x43A57C8))(this);
	}
	template <typename T = Il2CppVector3> T get_BulletReleasePosition() {
		return ((T (*)(PriestSkill3BodyEffectS7*))(Il2CppBase() + 0x43A5828))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PriestSkill3BodyEffectS7*))(Il2CppBase() + 0x43A595C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PriestSkill3BodyEffectS7*))(Il2CppBase() + 0x43A59C8))(this);
	}
	template <typename T = void> T Init(uintptr_t controller) {
		return ((T (*)(PriestSkill3BodyEffectS7*, uintptr_t))(Il2CppBase() + 0x43A5A5C))(this, controller);
	}
	template <typename T = void> T ToNormalMode() {
		return ((T (*)(PriestSkill3BodyEffectS7*))(Il2CppBase() + 0x43A5B48))(this);
	}
	template <typename T = void> T ToShadowMode() {
		return ((T (*)(PriestSkill3BodyEffectS7*))(Il2CppBase() + 0x43A5BDC))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(PriestSkill3BodyEffectS7*))(Il2CppBase() + 0x43A5C6C))(this);
	}

};

}
