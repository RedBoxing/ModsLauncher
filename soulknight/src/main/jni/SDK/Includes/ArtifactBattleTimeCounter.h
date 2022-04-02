#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBattleTimeCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBattleTimeCounter"));
	}

	template <typename T = float> T& battleStartTimestamp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Init(uintptr_t weapon, int32_t param) {
		return ((T (*)(ArtifactBattleTimeCounter*, uintptr_t, int32_t))(Il2CppBase() + 0x1C9840C))(this, weapon, param);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(ArtifactBattleTimeCounter*))(Il2CppBase() + 0x1C9859C))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t data) {
		return ((T (*)(ArtifactBattleTimeCounter*, uintptr_t))(Il2CppBase() + 0x1C986E4))(this, data);
	}
	template <typename T = bool> T Satisfied() {
		return ((T (*)(ArtifactBattleTimeCounter*))(Il2CppBase() + 0x1C98760))(this);
	}
	template <typename T = void> T iFixBaseProxy_Init(uintptr_t P0, int32_t P1) {
		return ((T (*)(ArtifactBattleTimeCounter*, uintptr_t, int32_t))(Il2CppBase() + 0x1C987E8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Destroy() {
		return ((T (*)(ArtifactBattleTimeCounter*))(Il2CppBase() + 0x1C987EC))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Satisfied() {
		return ((T (*)(ArtifactBattleTimeCounter*))(Il2CppBase() + 0x1C987F0))(this);
	}

};

}
