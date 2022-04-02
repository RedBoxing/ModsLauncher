#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactSectorEmitterMod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactSectorEmitterMod"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& emitCountByAtkSequence() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& emitAngle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& damageFactor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sizeFactor() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T OnGetEmitCount(int32_t atkSequence, int32_t oriEmitCount) {
		return ((T (*)(ArtifactSectorEmitterMod*, int32_t, int32_t))(Il2CppBase() + 0x1CA87C4))(this, atkSequence, oriEmitCount);
	}
	template <typename T = float> T OnGetEmitAngle(int32_t atkSequence, float oriAngle) {
		return ((T (*)(ArtifactSectorEmitterMod*, int32_t, float))(Il2CppBase() + 0x1CA88D4))(this, atkSequence, oriAngle);
	}
	template <typename T = float> T GetDamageFactor(int32_t atkSequence) {
		return ((T (*)(ArtifactSectorEmitterMod*, int32_t))(Il2CppBase() + 0x1CA89F0))(this, atkSequence);
	}
	template <typename T = float> T GetSizeFactor(int32_t atkSequence) {
		return ((T (*)(ArtifactSectorEmitterMod*, int32_t))(Il2CppBase() + 0x1CA8AF8))(this, atkSequence);
	}

};

}
