#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SnakeBulletModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SnakeBulletModel"));
	}

	template <typename T = uintptr_t> T& snakeBullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& snakeSpiralCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& snakeOverallDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& snakeCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& circularBullet() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& circularBulletCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& circularBulletTimes() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& circularBulletDuration() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& releaseOffset() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& releaseTransform() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = float> T get_SnakeDuration() {
		return ((T (*)(SnakeBulletModel*))(Il2CppBase() + 0x1B8A9F4))(this);
	}
	template <typename T = float> T get_SnakeAngle() {
		return ((T (*)(SnakeBulletModel*))(Il2CppBase() + 0x1B8AA5C))(this);
	}
	template <typename T = float> T get_CircularAngle() {
		return ((T (*)(SnakeBulletModel*))(Il2CppBase() + 0x1B8AACC))(this);
	}
	template <typename T = Il2CppVector3> T get_ReleasePosition() {
		return ((T (*)(SnakeBulletModel*))(Il2CppBase() + 0x1B8AB3C))(this);
	}

};

}
