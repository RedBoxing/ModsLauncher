#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicBonePile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicBonePile"));
	}

	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& spriteTransform() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& spriteModels() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector2> T& xRange() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector2> T& yRange() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& shakeCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& showDamageText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& hurtEffectCountRange() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& hurtEffectDestroyCountRange() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& effectInstantiateRadius() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& boneEffectPrefab() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& effectOffset() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& active() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& _shaker() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& _currentIndex() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& _hasDestroyed() {
		return *(T*)((uintptr_t)this + 0xC4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelicBonePile*))(Il2CppBase() + 0x42B475C))(this);
	}
	template <typename T = bool> T Hit(int32_t damage, uintptr_t source_object, int32_t camp) {
		return ((T (*)(RelicBonePile*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x42B48C0))(this, damage, source_object, camp);
	}
	template <typename T = void> T BoxDestroy(uintptr_t source_object) {
		return ((T (*)(RelicBonePile*, uintptr_t))(Il2CppBase() + 0x42B4C8C))(this, source_object);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RelicBonePile*))(Il2CppBase() + 0x42B5454))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(RelicBonePile*))(Il2CppBase() + 0x42B54F4))(this);
	}
	template <typename T = void> T DestroyBox() {
		return ((T (*)(RelicBonePile*))(Il2CppBase() + 0x42B4D9C))(this);
	}
	template <typename T = void> T SetActive() {
		return ((T (*)(RelicBonePile*))(Il2CppBase() + 0x42B55B8))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Hit(int32_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(RelicBonePile*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x42B562C))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_BoxDestroy(uintptr_t P0) {
		return ((T (*)(RelicBonePile*, uintptr_t))(Il2CppBase() + 0x42B5634))(this, P0);
	}

};

}
