#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowAchievementTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowAchievementTips"));
	}

	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowAchievementTips*))(Il2CppBase() + 0x4586008))(this);
	}
	template <typename T = void> T ShowTips() {
		return ((T (*)(UIWindowAchievementTips*))(Il2CppBase() + 0x4586130))(this);
	}
	template <typename T = uintptr_t> T ShowWait() {
		return ((T (*)(UIWindowAchievementTips*))(Il2CppBase() + 0x4586354))(this);
	}
	template <typename T = void> static T ShowWindow(int32_t achievement_id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4586434))(0, achievement_id);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIWindowAchievementTips*))(Il2CppBase() + 0x4586694))(this);
	}

};

}
