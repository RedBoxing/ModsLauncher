#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HeavyPunchDrill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeavyPunchDrill"));
	}

	template <typename T = Il2CppString*> T& animBoolString() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& heavyPunch() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& followTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& animatorCache() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Init(uintptr_t heavyPunch, uintptr_t followTransform) {
		return ((T (*)(HeavyPunchDrill*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A32B00))(this, heavyPunch, followTransform);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(HeavyPunchDrill*))(Il2CppBase() + 0x1A32C20))(this);
	}
	template <typename T = void> T UpdatePosition() {
		return ((T (*)(HeavyPunchDrill*))(Il2CppBase() + 0x1A32DF8))(this);
	}
	template <typename T = bool> T get_isFollowExists() {
		return ((T (*)(HeavyPunchDrill*))(Il2CppBase() + 0x1A32CF8))(this);
	}
	template <typename T = void> T EndDrill() {
		return ((T (*)(HeavyPunchDrill*))(Il2CppBase() + 0x1A32EC4))(this);
	}

};

}
