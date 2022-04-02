#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ParallaxTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParallaxTexture"));
	}

	template <typename T = uintptr_t> T& renderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& textureName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& hasYLimited() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& yOffsetRange() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& hasXLimited() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector2> T& xOffsetRange() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& initOffset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& showRadius() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& fadeName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _mainCamera() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _material() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _textureId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _fadeId() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = void> T Update() {
		return ((T (*)(ParallaxTexture*))(Il2CppBase() + 0x4570658))(this);
	}
	template <typename T = void> T Init(float initRadius) {
		return ((T (*)(ParallaxTexture*, float))(Il2CppBase() + 0x45709FC))(this, initRadius);
	}

};

}
