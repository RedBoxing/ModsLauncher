#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PredictExplodeModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PredictExplodeModel"));
	}

	template <typename T = float> T& characterBaseRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& explodeBullet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& releaseDuration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& attackDelay() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& releaseCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& directlyHitPlayerRate() {
		return *(T*)((uintptr_t)this + 0x48);
	}


};

}
