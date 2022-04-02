#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DLimitDistance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DLimitDistance"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& LimitHorizontalCameraDistance() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& MaxHorizontalTargetDistance() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& LimitVerticalCameraDistance() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& MaxVerticalTargetDistance() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _pdcOrder() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DLimitDistance*))(Il2CppBase() + 0x2C1F2F8))(this);
	}
	template <typename T = Il2CppVector3> T AdjustDelta(float deltaTime, Il2CppVector3 originalDelta) {
		return ((T (*)(ProCamera2DLimitDistance*, float, Il2CppVector3))(Il2CppBase() + 0x2C1F380))(this, deltaTime, originalDelta);
	}
	template <typename T = int32_t> T get_PDCOrder() {
		return ((T (*)(ProCamera2DLimitDistance*))(Il2CppBase() + 0x2C1FA58))(this);
	}
	template <typename T = void> T set_PDCOrder(int32_t value) {
		return ((T (*)(ProCamera2DLimitDistance*, int32_t))(Il2CppBase() + 0x2C1FAB8))(this, value);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DLimitDistance*))(Il2CppBase() + 0x2C1FBB0))(this);
	}

};

}
