#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShadowPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShadowPool"));
	}

	template <typename T = Il2CppString*> T& bodyPath() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& imgPath() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& shadowPrefab() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector2> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& mountOffset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& projectionRatio() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& exclusiveSpriteLayers() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, float>*> T& mountCustomOffset() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& objectShowThreshHold() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bufferedShadowModels() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _inUsedShadowModels() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> static T& ShaderIdSpriteRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ShaderIdHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& ShaderIdSaturate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& ShaderIdCompleteFade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _removeShadowBuffer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = void*> T& _exclusiveSpriteLayerSet() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _delegateDic() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ShadowPool*))(Il2CppBase() + 0x1829104))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ShadowPool*))(Il2CppBase() + 0x182928C))(this);
	}
	template <typename T = void> T UseShadowModel(uintptr_t targetObject) {
		return ((T (*)(ShadowPool*, uintptr_t))(Il2CppBase() + 0x182A524))(this, targetObject);
	}
	template <typename T = Il2CppVector3> T GetExtraOffset(uintptr_t targetObject) {
		return ((T (*)(ShadowPool*, uintptr_t))(Il2CppBase() + 0x182ACDC))(this, targetObject);
	}
	template <typename T = void> T DisposeShadow(uintptr_t targetObject) {
		return ((T (*)(ShadowPool*, uintptr_t))(Il2CppBase() + 0x182B598))(this, targetObject);
	}
	template <typename T = void> T AssignToIceFloorReflection(uintptr_t iceFloorObject) {
		return ((T (*)(ShadowPool*, uintptr_t))(Il2CppBase() + 0x182B8FC))(this, iceFloorObject);
	}
	template <typename T = void> T ForceDisposeShadow(uintptr_t targetObject) {
		return ((T (*)(ShadowPool*, uintptr_t))(Il2CppBase() + 0x182A3B0))(this, targetObject);
	}

};

}
