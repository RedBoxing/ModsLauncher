#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BulletPattern {

class EExtraBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BulletPattern", "EExtraBullet"));
	}

	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& releasePositionTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T ReleaseBullet(uintptr_t controller) {
		return ((T (*)(EExtraBullet*, uintptr_t))(Il2CppBase() + 0x238B588))(this, controller);
	}

};

}
