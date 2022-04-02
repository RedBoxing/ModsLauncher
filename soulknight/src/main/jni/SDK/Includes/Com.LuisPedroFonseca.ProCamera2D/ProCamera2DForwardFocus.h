#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DForwardFocus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DForwardFocus"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& EPSILON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& Progressive() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& SpeedMultiplier() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& TransitionSmoothness() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& MaintainInfluenceOnStop() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& LeftFocus() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& RightFocus() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& TopFocus() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& BottomFocus() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& _hVel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& _hVelSmooth() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& _vVel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _vVelSmooth() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& _targetHVel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& _targetVVel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& _isFirstHorizontalCameraMovement() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& _isFirstVerticalCameraMovement() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = bool> T& __enabled() {
		return *(T*)((uintptr_t)this + 0x92);
	}
	template <typename T = int32_t> T& _prmOrder() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DForwardFocus*))(Il2CppBase() + 0x2C1D9AC))(this);
	}
	template <typename T = void> T PreMove(float deltaTime) {
		return ((T (*)(ProCamera2DForwardFocus*, float))(Il2CppBase() + 0x2C1DB00))(this, deltaTime);
	}
	template <typename T = int32_t> T get_PrMOrder() {
		return ((T (*)(ProCamera2DForwardFocus*))(Il2CppBase() + 0x2C1E44C))(this);
	}
	template <typename T = void> T set_PrMOrder(int32_t value) {
		return ((T (*)(ProCamera2DForwardFocus*, int32_t))(Il2CppBase() + 0x2C1E4AC))(this, value);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(ProCamera2DForwardFocus*))(Il2CppBase() + 0x2C1E520))(this);
	}
	template <typename T = uintptr_t> T Enable() {
		return ((T (*)(ProCamera2DForwardFocus*))(Il2CppBase() + 0x2C1DA4C))(this);
	}
	template <typename T = void> T ApplyInfluence(float deltaTime) {
		return ((T (*)(ProCamera2DForwardFocus*, float))(Il2CppBase() + 0x2C1DBA0))(this, deltaTime);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DForwardFocus*))(Il2CppBase() + 0x2C1E658))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReset() {
		return ((T (*)(ProCamera2DForwardFocus*))(Il2CppBase() + 0x2C1E660))(this);
	}

};

}
