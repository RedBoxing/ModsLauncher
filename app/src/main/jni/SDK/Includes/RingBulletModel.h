#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RingBulletModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RingBulletModel"));
	}

	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& releaseTimes() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& releaseDuration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& releaseTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& releasePositionOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = float> T get_AngleInBetween() {
		return ((T (*)(RingBulletModel*))(Il2CppBase() + 0x1B857A0))(this);
	}

};

}
