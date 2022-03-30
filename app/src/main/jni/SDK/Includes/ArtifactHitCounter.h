#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactHitCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactHitCounter"));
	}

	template <typename T = int32_t> T& hitCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Init(uintptr_t weapon, int32_t param) {
		return ((T (*)(ArtifactHitCounter*, uintptr_t, int32_t))(Il2CppBase() + 0x1CA38A0))(this, weapon, param);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(ArtifactHitCounter*))(Il2CppBase() + 0x1CA39F8))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t data) {
		return ((T (*)(ArtifactHitCounter*, uintptr_t))(Il2CppBase() + 0x1CA3B2C))(this, data);
	}
	template <typename T = void> T OnBattleStart(uintptr_t data) {
		return ((T (*)(ArtifactHitCounter*, uintptr_t))(Il2CppBase() + 0x1CA3D08))(this, data);
	}
	template <typename T = bool> T Satisfied() {
		return ((T (*)(ArtifactHitCounter*))(Il2CppBase() + 0x1CA3D84))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ArtifactHitCounter*))(Il2CppBase() + 0x1CA3DEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Init(uintptr_t P0, int32_t P1) {
		return ((T (*)(ArtifactHitCounter*, uintptr_t, int32_t))(Il2CppBase() + 0x1CA3E4C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Destroy() {
		return ((T (*)(ArtifactHitCounter*))(Il2CppBase() + 0x1CA3E50))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Satisfied() {
		return ((T (*)(ArtifactHitCounter*))(Il2CppBase() + 0x1CA3E54))(this);
	}
	template <typename T = void> T iFixBaseProxy_Reset() {
		return ((T (*)(ArtifactHitCounter*))(Il2CppBase() + 0x1CA3E58))(this);
	}

};

}
