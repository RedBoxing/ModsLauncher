#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DCameraWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DCameraWindow"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppRect> T& CameraWindowRect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppRect> T& _cameraWindowRectInWorldCoords() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _pdcOrder() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DCameraWindow*))(Il2CppBase() + 0x2C1A8FC))(this);
	}
	template <typename T = Il2CppVector3> T AdjustDelta(float deltaTime, Il2CppVector3 originalDelta) {
		return ((T (*)(ProCamera2DCameraWindow*, float, Il2CppVector3))(Il2CppBase() + 0x2C1A980))(this, deltaTime, originalDelta);
	}
	template <typename T = int32_t> T get_PDCOrder() {
		return ((T (*)(ProCamera2DCameraWindow*))(Il2CppBase() + 0x2C1B064))(this);
	}
	template <typename T = void> T set_PDCOrder(int32_t value) {
		return ((T (*)(ProCamera2DCameraWindow*, int32_t))(Il2CppBase() + 0x2C1B0C4))(this, value);
	}
	template <typename T = Il2CppRect> T GetRectAroundTransf(Il2CppRect rectNormalized, Il2CppVector2 rectSize, uintptr_t transf) {
		return ((T (*)(ProCamera2DCameraWindow*, Il2CppRect, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x2C1AE3C))(this, rectNormalized, rectSize, transf);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DCameraWindow*))(Il2CppBase() + 0x2C1B200))(this);
	}

};

}
