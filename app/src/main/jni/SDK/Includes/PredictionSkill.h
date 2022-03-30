#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PredictionSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PredictionSkill"));
	}

	template <typename T = uintptr_t> T& _targetRigidbody() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _collider2DBuffer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _releaseCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(PredictionSkill*))(Il2CppBase() + 0x1B84FE8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PredictionSkill*))(Il2CppBase() + 0x1B85204))(this);
	}
	template <typename T = Il2CppVector3> T GetReleasePosition() {
		return ((T (*)(PredictionSkill*))(Il2CppBase() + 0x1B853A4))(this);
	}
	template <typename T = void> T InstantiateBullet(Il2CppVector3 releasePosition) {
		return ((T (*)(PredictionSkill*, Il2CppVector3))(Il2CppBase() + 0x1B85578))(this, releasePosition);
	}

};

}
