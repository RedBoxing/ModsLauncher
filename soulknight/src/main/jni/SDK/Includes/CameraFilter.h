#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CameraFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraFilter"));
	}

	template <typename T = uintptr_t> T& filter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& adjustUVByCameraMovement() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _camera() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& _oriCameraPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CameraFilter*))(Il2CppBase() + 0x1869614))(this);
	}
	template <typename T = void> T AdjustUVByCameraMovement() {
		return ((T (*)(CameraFilter*))(Il2CppBase() + 0x18696D8))(this);
	}
	template <typename T = void> T OnRenderImage(uintptr_t source, uintptr_t destination) {
		return ((T (*)(CameraFilter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1869954))(this, source, destination);
	}

};

}
