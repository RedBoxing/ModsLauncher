#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletSplitConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletSplitConfig"));
	}

	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& scaleFactor() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& deviation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& damageFactor() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T GetSplitAngle(int32_t index) {
		return ((T (*)(BulletSplitConfig*, int32_t))(Il2CppBase() + 0x150CDFC))(this, index);
	}

};

}
