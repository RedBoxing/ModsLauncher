#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class CinematicTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "CinematicTarget"));
	}

	template <typename T = uintptr_t> T& TargetTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& EaseInDuration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& HoldDuration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Zoom() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& EaseType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& SendMessageName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& SendMessageParam() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
