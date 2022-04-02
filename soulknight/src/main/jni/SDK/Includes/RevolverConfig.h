#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RevolverConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RevolverConfig"));
	}

	template <typename T = float> T& throwTime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& shootTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& shootDelayTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& afterShootTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& angleVelocity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& initPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sourceObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& sourceWeapon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& triggerInterval() {
		return *(T*)((uintptr_t)this + 0x4C);
	}


};

}
