#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampBossGroundEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampBossGroundEffect"));
	}

	template <typename T = float> T& showTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& fadeInTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& parallaxTexture() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bubbleParticle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& targetFadeValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& initFadeValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _fadeInCounter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _showCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _hasFadeIn() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(SwampBossGroundEffect*))(Il2CppBase() + 0x42AAB6C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SwampBossGroundEffect*))(Il2CppBase() + 0x42AAC40))(this);
	}

};

}
