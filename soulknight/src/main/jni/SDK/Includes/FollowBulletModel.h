#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FollowBulletModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FollowBulletModel"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& releaseRadius() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& releaseTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}


};

}
