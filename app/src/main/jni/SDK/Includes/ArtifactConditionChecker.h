#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactConditionChecker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactConditionChecker"));
	}

	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _param() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Init(uintptr_t weapon, int32_t param) {
		return ((T (*)(ArtifactConditionChecker*, uintptr_t, int32_t))(Il2CppBase() + 0x1C9851C))(this, weapon, param);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(ArtifactConditionChecker*))(Il2CppBase() + 0x1C98688))(this);
	}
	template <typename T = bool> T Satisfied() {
		return ((T (*)(ArtifactConditionChecker*))(Il2CppBase() + 0x1C987F4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ArtifactConditionChecker*))(Il2CppBase() + 0x1CA0250))(this);
	}

};

}
