#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactsAchievementListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactsAchievementListener"));
	}

	template <typename T = uintptr_t> static T& Inst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ArtifactsAchievementListener*))(Il2CppBase() + 0x41732CC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ArtifactsAchievementListener*))(Il2CppBase() + 0x4173360))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ArtifactsAchievementListener*))(Il2CppBase() + 0x417348C))(this);
	}
	template <typename T = void> T ResetGodPowerKills() {
		return ((T (*)(ArtifactsAchievementListener*))(Il2CppBase() + 0x41735B8))(this);
	}

};

}
