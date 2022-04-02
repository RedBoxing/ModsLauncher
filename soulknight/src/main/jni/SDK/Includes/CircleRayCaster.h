#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CircleRayCaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CircleRayCaster"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& RayBuffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& TargetLayerMask() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ObstacleLayerMask() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> static T& castDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_RayBuffer() {
		return ((T (*)(CircleRayCaster*))(Il2CppBase() + 0x1E767C8))(this);
	}
	template <typename T = int32_t> T get_TargetLayerMask() {
		return ((T (*)(CircleRayCaster*))(Il2CppBase() + 0x1E767D0))(this);
	}
	template <typename T = int32_t> T get_ObstacleLayerMask() {
		return ((T (*)(CircleRayCaster*))(Il2CppBase() + 0x1E767D8))(this);
	}
	template <typename T = uintptr_t> T Cast(uintptr_t sourceTransform, float radius) {
		return ((T (*)(CircleRayCaster*, uintptr_t, float))(Il2CppBase() + 0x1E76864))(this, sourceTransform, radius);
	}

};

}
