#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class CameraCollisionState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "CameraCollisionState"));
	}

	template <typename T = bool> T& VTopLeft() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& HTopLeft() {
		return *(T*)((uintptr_t)this + 0x1);
	}
	template <typename T = bool> T& VTopRight() {
		return *(T*)((uintptr_t)this + 0x2);
	}
	template <typename T = bool> T& HTopRight() {
		return *(T*)((uintptr_t)this + 0x3);
	}
	template <typename T = bool> T& VBottomLeft() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& HBottomLeft() {
		return *(T*)((uintptr_t)this + 0x5);
	}
	template <typename T = bool> T& VBottomRight() {
		return *(T*)((uintptr_t)this + 0x6);
	}
	template <typename T = bool> T& HBottomRight() {
		return *(T*)((uintptr_t)this + 0x7);
	}


};

}
