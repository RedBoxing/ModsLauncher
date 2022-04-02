#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BulletPattern {

class StarFishBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BulletPattern", "StarFishBullet"));
	}

	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& releaseDuration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mainBullet() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& scatterBullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isReleasing() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& releasingIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& releaseController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& releasePosition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& targetAngle() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T ReleaseBullet(uintptr_t sourceController) {
		return ((T (*)(StarFishBullet*, uintptr_t))(Il2CppBase() + 0x238CA00))(this, sourceController);
	}
	template <typename T = void> T Update() {
		return ((T (*)(StarFishBullet*))(Il2CppBase() + 0x238CB20))(this);
	}
	template <typename T = void> T ReleaseScatterBullet() {
		return ((T (*)(StarFishBullet*))(Il2CppBase() + 0x238CE58))(this);
	}
	template <typename T = void> T ReleaseFinalBullet() {
		return ((T (*)(StarFishBullet*))(Il2CppBase() + 0x238CBFC))(this);
	}

};

}
