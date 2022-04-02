#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ShakePreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ShakePreset"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& Strength() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Vibrato() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Randomness() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Smoothness() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& InitialAngle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IgnoreTimeScale() {
		return *(T*)((uintptr_t)this + 0x34);
	}


};

}
