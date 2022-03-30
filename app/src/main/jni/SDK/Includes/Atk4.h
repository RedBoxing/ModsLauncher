#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Atk4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Atk4"));
	}

	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& scatterCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& scatterMaxAngle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& angryCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& angryScatterCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& angryScatterMaxAngle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& releaseDelay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& IsReleasing() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& releasePositionOffset() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& _releasePosition() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& _releaseAngle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _camp() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _sourceObject() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _currentReleaseIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _isAngry() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = bool> T get_IsReleasing() {
		return ((T (*)(Atk4*))(Il2CppBase() + 0x1DDC530))(this);
	}
	template <typename T = void> T set_IsReleasing(bool value) {
		return ((T (*)(Atk4*, bool))(Il2CppBase() + 0x1DDEEF8))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Atk4*))(Il2CppBase() + 0x1DDC538))(this);
	}
	template <typename T = void> T ReleaseBullet(uintptr_t targetTransform, uintptr_t sourceTransform, uintptr_t generalModel) {
		return ((T (*)(Atk4*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DDE7BC))(this, targetTransform, sourceTransform, generalModel);
	}
	template <typename T = void> T ReleaseBullet_1() {
		return ((T (*)(Atk4*))(Il2CppBase() + 0x1DDEF04))(this);
	}

};

}
