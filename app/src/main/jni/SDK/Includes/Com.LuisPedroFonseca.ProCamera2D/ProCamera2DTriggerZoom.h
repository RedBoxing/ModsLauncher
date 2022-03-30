#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DTriggerZoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DTriggerZoom"));
	}

	template <typename T = Il2CppString*> static T& TriggerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& SetSizeAsMultiplier() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = float> T& TargetZoom() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& ZoomSmoothness() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& ExclusiveInfluencePercentage() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& ResetSizeOnExit() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& ResetSizeSmoothness() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& _startCamSize() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& _initialCamSize() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& _targetCamSize() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& _targetCamSizeSmoothed() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& _previousCamSize() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& _zoomVelocity() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& _initialCamDepth() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ProCamera2DTriggerZoom*))(Il2CppBase() + 0x2C318B4))(this);
	}
	template <typename T = void> T EnteredTrigger() {
		return ((T (*)(ProCamera2DTriggerZoom*))(Il2CppBase() + 0x2C319B8))(this);
	}
	template <typename T = void> T ExitedTrigger() {
		return ((T (*)(ProCamera2DTriggerZoom*))(Il2CppBase() + 0x2C31BA0))(this);
	}
	template <typename T = uintptr_t> T InsideTriggerRoutine() {
		return ((T (*)(ProCamera2DTriggerZoom*))(Il2CppBase() + 0x2C31AEC))(this);
	}
	template <typename T = uintptr_t> T OutsideTriggerRoutine() {
		return ((T (*)(ProCamera2DTriggerZoom*))(Il2CppBase() + 0x2C31C38))(this);
	}
	template <typename T = void> T UpdateScreenSize(float smoothness) {
		return ((T (*)(ProCamera2DTriggerZoom*, float))(Il2CppBase() + 0x2C31D44))(this, smoothness);
	}
	template <typename T = void> T iFixBaseProxy_EnteredTrigger() {
		return ((T (*)(ProCamera2DTriggerZoom*))(Il2CppBase() + 0x2C31ED8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ExitedTrigger() {
		return ((T (*)(ProCamera2DTriggerZoom*))(Il2CppBase() + 0x2C31EE0))(this);
	}

};

}
