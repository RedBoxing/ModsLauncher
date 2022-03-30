#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class CameraTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "CameraTarget"));
	}

	template <typename T = uintptr_t> T& TargetTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& TargetInfluenceH() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& TargetInfluenceV() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& TargetOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& _targetPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T set_TargetInfluence(float value) {
		return ((T (*)(CameraTarget*, float))(Il2CppBase() + 0x207CDA0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_TargetPosition() {
		return ((T (*)(CameraTarget*))(Il2CppBase() + 0x207CE14))(this);
	}
	template <typename T = void> T set_TargetPosition(Il2CppVector3 value) {
		return ((T (*)(CameraTarget*, Il2CppVector3))(Il2CppBase() + 0x207CEF8))(this, value);
	}

};

}
