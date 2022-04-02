#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShadowModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShadowModel"));
	}

	template <typename T = uintptr_t> T& shadowBodySprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sourceImgTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& shadowImgTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& sourceObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& shadowObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& projectionRatio() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& attachFloorCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& _objectShowThreshHold() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& _extraOffset() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& SpriteTransformBufferSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _spriteTransformBuffer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _spriteTransformList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& _exclusiveSpriteLayerSet() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = bool> T get_IsModelValid() {
		return ((T (*)(ShadowModel*))(Il2CppBase() + 0x182957C))(this);
	}
	template <typename T = void> T UpdateState() {
		return ((T (*)(ShadowModel*))(Il2CppBase() + 0x182967C))(this);
	}
	template <typename T = void> T Init(void* exclusiveSpriteLayers, float objectShowThreshHold) {
		return ((T (*)(ShadowModel*, void*, float))(Il2CppBase() + 0x182B42C))(this, exclusiveSpriteLayers, objectShowThreshHold);
	}
	template <typename T = void> T AddNewSpriteTransform() {
		return ((T (*)(ShadowModel*))(Il2CppBase() + 0x182BDC4))(this);
	}
	template <typename T = uintptr_t> T GetSpriteTransform() {
		return ((T (*)(ShadowModel*))(Il2CppBase() + 0x182BF68))(this);
	}
	template <typename T = void> T Flush(Il2CppVector3 extraOffset) {
		return ((T (*)(ShadowModel*, Il2CppVector3))(Il2CppBase() + 0x182B0EC))(this, extraOffset);
	}
	template <typename T = void> T ScanTransform(uintptr_t parentTransform, int32_t childCount, void* spriteTransforms) {
		return ((T (*)(ShadowModel*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x182C050))(this, parentTransform, childCount, spriteTransforms);
	}

};

}
