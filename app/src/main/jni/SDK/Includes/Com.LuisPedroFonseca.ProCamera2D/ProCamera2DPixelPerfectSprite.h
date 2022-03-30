#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DPixelPerfectSprite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DPixelPerfectSprite"));
	}

	template <typename T = bool> T& IsAMovingObject() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& IsAChildSprite() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = Il2CppVector2> T& LocalPosition() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& SpriteScale() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& _sprite() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _pixelPerfectPlugin() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& _initialScale() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _prevSpriteScale() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& _pmOrder() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DPixelPerfectSprite*))(Il2CppBase() + 0x2C25430))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ProCamera2DPixelPerfectSprite*))(Il2CppBase() + 0x2C25658))(this);
	}
	template <typename T = void> T PostMove(float deltaTime) {
		return ((T (*)(ProCamera2DPixelPerfectSprite*, float))(Il2CppBase() + 0x2C25BF8))(this, deltaTime);
	}
	template <typename T = int32_t> T get_PMOrder() {
		return ((T (*)(ProCamera2DPixelPerfectSprite*))(Il2CppBase() + 0x2C25D20))(this);
	}
	template <typename T = void> T set_PMOrder(int32_t value) {
		return ((T (*)(ProCamera2DPixelPerfectSprite*, int32_t))(Il2CppBase() + 0x2C25D80))(this, value);
	}
	template <typename T = void> T Step() {
		return ((T (*)(ProCamera2DPixelPerfectSprite*))(Il2CppBase() + 0x2C25C8C))(this);
	}
	template <typename T = void> T GetPixelPerfectPlugin() {
		return ((T (*)(ProCamera2DPixelPerfectSprite*))(Il2CppBase() + 0x2C254C4))(this);
	}
	template <typename T = void> T GetSprite() {
		return ((T (*)(ProCamera2DPixelPerfectSprite*))(Il2CppBase() + 0x2C2556C))(this);
	}
	template <typename T = void> T SetAsPixelPerfect() {
		return ((T (*)(ProCamera2DPixelPerfectSprite*))(Il2CppBase() + 0x2C256B8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ProCamera2DPixelPerfectSprite*))(Il2CppBase() + 0x2C25DF4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DPixelPerfectSprite*))(Il2CppBase() + 0x2C25EF8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(ProCamera2DPixelPerfectSprite*))(Il2CppBase() + 0x2C25F00))(this);
	}

};

}
