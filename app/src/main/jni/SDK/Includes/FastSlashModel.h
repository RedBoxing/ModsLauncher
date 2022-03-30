#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FastSlashModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FastSlashModel"));
	}

	template <typename T = float> T& scanRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& moveAmount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& maxReleaseCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& targetLayerMask() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& releaseTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& shockOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& shockBullet() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& extraBullet() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& extraBulletCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& clip() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& clipDuration() {
		return *(T*)((uintptr_t)this + 0x78);
	}


};

}
