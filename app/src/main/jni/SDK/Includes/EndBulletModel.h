#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EndBulletModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EndBulletModel"));
	}

	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& extraBulletCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& bulletInitAngleOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extraBulletBuff() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& bulletIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& explodeRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
