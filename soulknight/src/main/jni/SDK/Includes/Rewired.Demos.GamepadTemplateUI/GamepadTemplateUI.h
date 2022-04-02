#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos.GamepadTemplateUI {

class GamepadTemplateUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos.GamepadTemplateUI", "GamepadTemplateUI"));
	}

	template <typename T = float> static T& stickRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& leftStick() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rightStick() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& leftStickX() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& leftStickY() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& leftStickButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& rightStickX() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& rightStickY() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& rightStickButton() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& actionBottomRow1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& actionBottomRow2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& actionBottomRow3() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& actionTopRow1() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& actionTopRow2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& actionTopRow3() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& leftShoulder() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& leftTrigger() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& rightShoulder() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& rightTrigger() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& center1() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& center2() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& center3() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& dPadUp() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& dPadRight() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& dPadDown() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& dPadLeft() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _uiElementsArray() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _uiElements() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = void*> T& _tempTargetList() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _sticks() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = uintptr_t> T get_player() {
		return ((T (*)(GamepadTemplateUI*))(Il2CppBase() + 0x2068210))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GamepadTemplateUI*))(Il2CppBase() + 0x20682D4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GamepadTemplateUI*))(Il2CppBase() + 0x2068F70))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GamepadTemplateUI*))(Il2CppBase() + 0x20692A8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GamepadTemplateUI*))(Il2CppBase() + 0x20693C0))(this);
	}
	template <typename T = void> T DrawActiveElements() {
		return ((T (*)(GamepadTemplateUI*))(Il2CppBase() + 0x206947C))(this);
	}
	template <typename T = void> T ActivateElements(uintptr_t player, int32_t actionId) {
		return ((T (*)(GamepadTemplateUI*, uintptr_t, int32_t))(Il2CppBase() + 0x2069794))(this, player, actionId);
	}
	template <typename T = void> T DrawLabels() {
		return ((T (*)(GamepadTemplateUI*))(Il2CppBase() + 0x206902C))(this);
	}
	template <typename T = void> T DrawLabels_1(uintptr_t player, uintptr_t action) {
		return ((T (*)(GamepadTemplateUI*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2069E5C))(this, player, action);
	}
	template <typename T = void> T DrawLabel(uintptr_t uiElement, uintptr_t action, uintptr_t controllerMap, uintptr_t template, uintptr_t element) {
		return ((T (*)(GamepadTemplateUI*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x206A100))(this, uiElement, action, controllerMap, template, element);
	}
	template <typename T = uintptr_t> T GetStick(int32_t elementId) {
		return ((T (*)(GamepadTemplateUI*, int32_t))(Il2CppBase() + 0x2069D24))(this, elementId);
	}
	template <typename T = void> T OnControllerConnected(uintptr_t args) {
		return ((T (*)(GamepadTemplateUI*, uintptr_t))(Il2CppBase() + 0x206AA44))(this, args);
	}
	template <typename T = void> T OnControllerDisconnected(uintptr_t args) {
		return ((T (*)(GamepadTemplateUI*, uintptr_t))(Il2CppBase() + 0x206AAB8))(this, args);
	}

};

}
