#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIEdgeTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIEdgeTips"));
	}

	template <typename T = bool> T& forceHide() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& imIcon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& canvas() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& angleOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> static T MakeTips(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43300B8))(0, target);
	}
	template <typename T = void> T AddCallback() {
		return ((T (*)(UIEdgeTips*))(Il2CppBase() + 0x433022C))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(UIEdgeTips*))(Il2CppBase() + 0x4330644))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIEdgeTips*))(Il2CppBase() + 0x4330704))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIEdgeTips*))(Il2CppBase() + 0x433047C))(this);
	}
	template <typename T = void> T UpdatePosition(bool lerp) {
		return ((T (*)(UIEdgeTips*, bool))(Il2CppBase() + 0x4330874))(this, lerp);
	}
	template <typename T = void> T AddCallbackb__8_0() {
		return ((T (*)(UIEdgeTips*))(Il2CppBase() + 0x4330F68))(this);
	}

};

}
