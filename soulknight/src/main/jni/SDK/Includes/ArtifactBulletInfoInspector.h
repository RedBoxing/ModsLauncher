#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBulletInfoInspector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBulletInfoInspector"));
	}

	template <typename T = uintptr_t> T& damageType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& damageFactor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& addAtkFactor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& critFactor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& addCritFactor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& repelFactor() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& throughCountFactor() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArtifactBulletInfoInspector*))(Il2CppBase() + 0x1C9BA04))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_Clone() {
		return ((T (*)(ArtifactBulletInfoInspector*))(Il2CppBase() + 0x1C9BA68))(this);
	}

};

}
