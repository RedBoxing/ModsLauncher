#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CircularEnlargeModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CircularEnlargeModel"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& angleInBetween() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& releaseTimes() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& centerSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& angularSpeed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& enlargeSpeed() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& maxRadius() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& releaseTransform() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = Il2CppVector3> T get_ReleasePosition() {
		return ((T (*)(CircularEnlargeModel*))(Il2CppBase() + 0x1B88BC8))(this);
	}

};

}
