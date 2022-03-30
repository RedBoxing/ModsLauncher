#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class PlayerMouseSpriteExample
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "PlayerMouseSpriteExample"));
	}

	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& horizontalAction() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& verticalAction() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& wheelAction() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& leftButtonAction() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& rightButtonAction() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& middleButtonAction() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& distanceFromCamera() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& spriteScale() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& pointerPrefab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& clickEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& hideHardwarePointer() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& pointer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mouse() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlayerMouseSpriteExample*))(Il2CppBase() + 0x267BC68))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayerMouseSpriteExample*))(Il2CppBase() + 0x267C1C0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PlayerMouseSpriteExample*))(Il2CppBase() + 0x267C75C))(this);
	}
	template <typename T = void> T CreateClickEffect(uintptr_t color) {
		return ((T (*)(PlayerMouseSpriteExample*, uintptr_t))(Il2CppBase() + 0x267C4AC))(this, color);
	}
	template <typename T = void> T OnScreenPositionChanged(Il2CppVector2 position) {
		return ((T (*)(PlayerMouseSpriteExample*, Il2CppVector2))(Il2CppBase() + 0x267C098))(this, position);
	}

};

}
