#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MuseumAchievementShow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MuseumAchievementShow"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& exclusiveIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ShowAchievement() {
		return ((T (*)(MuseumAchievementShow*))(Il2CppBase() + 0x437ADCC))(this);
	}

};

}
