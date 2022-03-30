#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DLimitSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DLimitSpeed"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& LimitHorizontalSpeed() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& MaxHorizontalSpeed() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& LimitVerticalSpeed() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& MaxVerticalSpeed() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& CurrentSpeedHorizontal() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& CurrentSpeedVertical() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _pdcOrder() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DLimitSpeed*))(Il2CppBase() + 0x2C1FBB8))(this);
	}
	template <typename T = Il2CppVector3> T AdjustDelta(float deltaTime, Il2CppVector3 originalDelta) {
		return ((T (*)(ProCamera2DLimitSpeed*, float, Il2CppVector3))(Il2CppBase() + 0x2C1FC40))(this, deltaTime, originalDelta);
	}
	template <typename T = int32_t> T get_PDCOrder() {
		return ((T (*)(ProCamera2DLimitSpeed*))(Il2CppBase() + 0x2C1FE48))(this);
	}
	template <typename T = void> T set_PDCOrder(int32_t value) {
		return ((T (*)(ProCamera2DLimitSpeed*, int32_t))(Il2CppBase() + 0x2C1FEA8))(this, value);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DLimitSpeed*))(Il2CppBase() + 0x2C1FFA0))(this);
	}

};

}
