#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NPCStateWhenChooseSkin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPCStateWhenChooseSkin"));
	}

	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NPCStateWhenChooseSkin*))(Il2CppBase() + 0x437E564))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(NPCStateWhenChooseSkin*))(Il2CppBase() + 0x437EB14))(this);
	}
	template <typename T = void> T Gray() {
		return ((T (*)(NPCStateWhenChooseSkin*))(Il2CppBase() + 0x437E6C0))(this);
	}
	template <typename T = void> T GrayBack(uintptr_t e) {
		return ((T (*)(NPCStateWhenChooseSkin*, uintptr_t))(Il2CppBase() + 0x437EC30))(this, e);
	}
	template <typename T = void> T Transparent() {
		return ((T (*)(NPCStateWhenChooseSkin*))(Il2CppBase() + 0x437E8E0))(this);
	}
	template <typename T = void> T TransparentBack(uintptr_t e) {
		return ((T (*)(NPCStateWhenChooseSkin*, uintptr_t))(Il2CppBase() + 0x437EE58))(this, e);
	}

};

}
