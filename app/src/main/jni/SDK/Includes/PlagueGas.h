#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlagueGas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlagueGas"));
	}

	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& can_hit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& is_end() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& damageRange() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& damageRangeFactor() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& onInit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _imgTransform() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _particleTransform() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& _initImgScale() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& _initParticleScale() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlagueGas*))(Il2CppBase() + 0x43948BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlagueGas*))(Il2CppBase() + 0x43949B8))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(PlagueGas*))(Il2CppBase() + 0x4394A68))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PlagueGas*))(Il2CppBase() + 0x4394B94))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(PlagueGas*, uintptr_t))(Il2CppBase() + 0x439515C))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(PlagueGas*))(Il2CppBase() + 0x4395390))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(PlagueGas*))(Il2CppBase() + 0x4395228))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(PlagueGas*))(Il2CppBase() + 0x43953F0))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(PlagueGas*, float))(Il2CppBase() + 0x43952C8))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(PlagueGas*, float))(Il2CppBase() + 0x439549C))(this, totalTime);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(PlagueGas*))(Il2CppBase() + 0x43955A8))(this);
	}

};

}
