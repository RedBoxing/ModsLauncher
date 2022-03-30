#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class DualShock4SpecialFeaturesExample
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "DualShock4SpecialFeaturesExample"));
	}

	template <typename T = int32_t> static T& maxTouches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& touchpadTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& lightObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& accelerometerTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& touches() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& unusedTouches() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isFlashing() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& textStyle() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T get_player() {
		return ((T (*)(DualShock4SpecialFeaturesExample*))(Il2CppBase() + 0x206437C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DualShock4SpecialFeaturesExample*))(Il2CppBase() + 0x2064440))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DualShock4SpecialFeaturesExample*))(Il2CppBase() + 0x20647EC))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(DualShock4SpecialFeaturesExample*))(Il2CppBase() + 0x2065AEC))(this);
	}
	template <typename T = void> T ResetOrientation() {
		return ((T (*)(DualShock4SpecialFeaturesExample*))(Il2CppBase() + 0x2065854))(this);
	}
	template <typename T = void> T SetRandomLightColor() {
		return ((T (*)(DualShock4SpecialFeaturesExample*))(Il2CppBase() + 0x2065658))(this);
	}
	template <typename T = void> T StartLightFlash() {
		return ((T (*)(DualShock4SpecialFeaturesExample*))(Il2CppBase() + 0x2065A24))(this);
	}
	template <typename T = void> T StopLightFlash() {
		return ((T (*)(DualShock4SpecialFeaturesExample*))(Il2CppBase() + 0x2065964))(this);
	}
	template <typename T = uintptr_t> T GetFirstDS4(uintptr_t player) {
		return ((T (*)(DualShock4SpecialFeaturesExample*, uintptr_t))(Il2CppBase() + 0x2064CF0))(this, player);
	}
	template <typename T = void> T InitializeTouchObjects() {
		return ((T (*)(DualShock4SpecialFeaturesExample*))(Il2CppBase() + 0x20644A0))(this);
	}
	template <typename T = void> T HandleTouchpad(uintptr_t ds4) {
		return ((T (*)(DualShock4SpecialFeaturesExample*, uintptr_t))(Il2CppBase() + 0x2065064))(this, ds4);
	}

};

}
