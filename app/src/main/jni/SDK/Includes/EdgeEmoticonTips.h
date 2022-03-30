#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EdgeEmoticonTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EdgeEmoticonTips"));
	}

	template <typename T = float> T& delayDestroy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& masterCtrl() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& masterRenderer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& emoticonImg() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& rectTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& angleOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& emoticonTipsDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_canvas() {
		return ((T (*)(EdgeEmoticonTips*))(Il2CppBase() + 0x22ABB4C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EdgeEmoticonTips*))(Il2CppBase() + 0x22ABBF0))(this);
	}
	template <typename T = void> static T ShowEdgeEmotionTips(uintptr_t masterCtrl, uintptr_t rgCtrlBodyRenderer, int32_t emoticonId, int32_t seed, float delayDestroy) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x22ABD10))(0, masterCtrl, rgCtrlBodyRenderer, emoticonId, seed, delayDestroy);
	}
	template <typename T = void> T Show(uintptr_t masterCtrl, uintptr_t masterBodyRenderer, uintptr_t sp) {
		return ((T (*)(EdgeEmoticonTips*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x22AC3E0))(this, masterCtrl, masterBodyRenderer, sp);
	}
	template <typename T = void> T UpdatePosition(bool lerp) {
		return ((T (*)(EdgeEmoticonTips*, bool))(Il2CppBase() + 0x22AC700))(this, lerp);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EdgeEmoticonTips*))(Il2CppBase() + 0x22ACDD8))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(EdgeEmoticonTips*))(Il2CppBase() + 0x22AC4E0))(this);
	}
	template <typename T = uintptr_t> T Destroying(float delayTime) {
		return ((T (*)(EdgeEmoticonTips*, float))(Il2CppBase() + 0x22AC620))(this, delayTime);
	}

};

}
