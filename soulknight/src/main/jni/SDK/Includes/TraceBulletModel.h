#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TraceBulletModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraceBulletModel"));
	}

	template <typename T = uintptr_t> T& mainBullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& shockBullet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& traceBullet() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& relativeTransform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& mainBulletReleaseOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& releaseCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& traceBulletAngle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& moveCurve() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& moveDelay() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& moveAmount() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& moveDuration() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& scanRadius() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& targetMask() {
		return *(T*)((uintptr_t)this + 0x80);
	}


};

}
