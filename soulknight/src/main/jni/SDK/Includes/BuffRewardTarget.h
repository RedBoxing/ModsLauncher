#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffRewardTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffRewardTarget"));
	}

	template <typename T = uintptr_t> T& defaultIconSprite() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& skinSprites() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& iconSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& killEffectSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& easyCriticFactor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = uintptr_t> static T CreateRewardTarget(uintptr_t source, uintptr_t target, float easyCriticFactor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x459E568))(0, source, target, easyCriticFactor);
	}
	template <typename T = void> T PlayAnim(float sizeFactor) {
		return ((T (*)(BuffRewardTarget*, float))(Il2CppBase() + 0x459E9BC))(this, sizeFactor);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffRewardTarget*, uintptr_t))(Il2CppBase() + 0x459E948))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffRewardTarget*))(Il2CppBase() + 0x459EBB4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BuffRewardTarget*))(Il2CppBase() + 0x459EC14))(this);
	}
	template <typename T = void> T BuffEnd() {
		return ((T (*)(BuffRewardTarget*))(Il2CppBase() + 0x459ED00))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffEnd() {
		return ((T (*)(BuffRewardTarget*))(Il2CppBase() + 0x459F208))(this);
	}

};

}
