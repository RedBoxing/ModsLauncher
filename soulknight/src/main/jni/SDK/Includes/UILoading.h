#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UILoading
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UILoading"));
	}

	template <typename T = int32_t> static T& tipsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& remoteTipsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& canvas_anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& target_scene_name() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UILoading*))(Il2CppBase() + 0x433BA5C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UILoading*))(Il2CppBase() + 0x433BCA8))(this);
	}
	template <typename T = void> T UpdateRandomSeed() {
		return ((T (*)(UILoading*))(Il2CppBase() + 0x433C16C))(this);
	}
	template <typename T = void> T StartLoad() {
		return ((T (*)(UILoading*))(Il2CppBase() + 0x433A220))(this);
	}
	template <typename T = uintptr_t> T LoadScene() {
		return ((T (*)(UILoading*))(Il2CppBase() + 0x433C230))(this);
	}
	template <typename T = uintptr_t> T LoadBundle() {
		return ((T (*)(UILoading*))(Il2CppBase() + 0x433C310))(this);
	}
	template <typename T = void> T SendRandomSeed() {
		return ((T (*)(UILoading*))(Il2CppBase() + 0x433C3E0))(this);
	}

};

}
