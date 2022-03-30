#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactActionConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactActionConfig"));
	}

	template <typename T = uintptr_t> T& actionComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& chargeAttack() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& maxChargeTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& consumeByCharge() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& addConsumeByCharge() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& noChargeEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& dislikeHandcut() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& createdActionComponent() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T get_isConsumeByCharge() {
		return ((T (*)(ArtifactActionConfig*))(Il2CppBase() + 0x1C959BC))(this);
	}
	template <typename T = uintptr_t> T get_createdActionComponent() {
		return ((T (*)(ArtifactActionConfig*))(Il2CppBase() + 0x1C95A34))(this);
	}
	template <typename T = void> T set_createdActionComponent(uintptr_t value) {
		return ((T (*)(ArtifactActionConfig*, uintptr_t))(Il2CppBase() + 0x1C95A3C))(this, value);
	}
	template <typename T = uintptr_t> T Create(uintptr_t parent) {
		return ((T (*)(ArtifactActionConfig*, uintptr_t))(Il2CppBase() + 0x1C95A44))(this, parent);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(ArtifactActionConfig*))(Il2CppBase() + 0x1C95D4C))(this);
	}

};

}
