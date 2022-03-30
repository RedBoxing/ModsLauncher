#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIMessageBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIMessageBar"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& the_text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& showing() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _levelIconImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _levelIconConfig() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _backgroundObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _levelText() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIMessageBar*))(Il2CppBase() + 0x434AB1C))(this);
	}
	template <typename T = void> T ShowMessage(Il2CppString* message, float time) {
		return ((T (*)(UIMessageBar*, Il2CppString*, float))(Il2CppBase() + 0x434ADD0))(this, message, time);
	}
	template <typename T = void> T ShowLevelIndex(int32_t sceneIndex, int32_t branchIndex, Il2CppString* message, float time) {
		return ((T (*)(UIMessageBar*, int32_t, int32_t, Il2CppString*, float))(Il2CppBase() + 0x434B088))(this, sceneIndex, branchIndex, message, time);
	}
	template <typename T = void> T HideMessage() {
		return ((T (*)(UIMessageBar*))(Il2CppBase() + 0x434B568))(this);
	}
	template <typename T = void> T ShowSignpost() {
		return ((T (*)(UIMessageBar*))(Il2CppBase() + 0x434B618))(this);
	}
	template <typename T = void> T ShowAllDead() {
		return ((T (*)(UIMessageBar*))(Il2CppBase() + 0x434B86C))(this);
	}
	template <typename T = void> T ShowRoomStart() {
		return ((T (*)(UIMessageBar*))(Il2CppBase() + 0x434B9A0))(this);
	}

};

}
