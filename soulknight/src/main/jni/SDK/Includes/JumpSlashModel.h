#pragma once
#include "Il2Cpp/Il2Cpp.h"

class JumpSlashModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JumpSlashModel"));
	}

	template <typename T = uintptr_t> T& targetMask() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& scanRadius() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& moveCurve() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& moveInitDelay() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& moveDuration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& moveAmount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& angryBullet() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& shockBullet() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& releaseTransform() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& afterReleaseWait() {
		return *(T*)((uintptr_t)this + 0x7C);
	}


};

}
