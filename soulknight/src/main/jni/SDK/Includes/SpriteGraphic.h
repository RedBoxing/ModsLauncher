#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteGraphic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteGraphic"));
	}

	template <typename T = uintptr_t> T& atlasTexturue() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_spriteCanvasRenderer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_Refresh() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = uintptr_t> T FindSprite(Il2CppString* name) {
		return ((T (*)(SpriteGraphic*, Il2CppString*))(Il2CppBase() + 0x4296818))(this, name);
	}
	template <typename T = void> T InnerInit() {
		return ((T (*)(SpriteGraphic*))(Il2CppBase() + 0x4296A44))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SpriteGraphic*))(Il2CppBase() + 0x4296B14))(this);
	}
	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(SpriteGraphic*))(Il2CppBase() + 0x4296B74))(this);
	}
	template <typename T = void> T OnRectTransformDimensionsChange() {
		return ((T (*)(SpriteGraphic*))(Il2CppBase() + 0x4296C60))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SpriteGraphic*))(Il2CppBase() + 0x4296CC4))(this);
	}
	template <typename T = void> T Refresh(uintptr_t mesh) {
		return ((T (*)(SpriteGraphic*, uintptr_t))(Il2CppBase() + 0x4296D28))(this, mesh);
	}
	template <typename T = bool> T InnerRefresh() {
		return ((T (*)(SpriteGraphic*))(Il2CppBase() + 0x4296DA8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpriteGraphic*))(Il2CppBase() + 0x4296EDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(SpriteGraphic*))(Il2CppBase() + 0x4296FC0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_mainTexture() {
		return ((T (*)(SpriteGraphic*))(Il2CppBase() + 0x4296FC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnRectTransformDimensionsChange() {
		return ((T (*)(SpriteGraphic*))(Il2CppBase() + 0x4296FD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEnable() {
		return ((T (*)(SpriteGraphic*))(Il2CppBase() + 0x4296FD8))(this);
	}

};

}
