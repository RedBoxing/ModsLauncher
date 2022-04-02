#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class CustomSlider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "CustomSlider"));
	}

	template <typename T = uintptr_t> T& _disabledHighlightedSprite() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _disabledHighlightedColor() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppString*> T& _disabledHighlightedTrigger() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& _autoNavUp() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& _autoNavDown() {
		return *(T*)((uintptr_t)this + 0x161);
	}
	template <typename T = bool> T& _autoNavLeft() {
		return *(T*)((uintptr_t)this + 0x162);
	}
	template <typename T = bool> T& _autoNavRight() {
		return *(T*)((uintptr_t)this + 0x163);
	}
	template <typename T = bool> T& isHighlightDisabled() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& _CancelEvent() {
		return *(T*)((uintptr_t)this + 0x168);
	}

	template <typename T = uintptr_t> T get_disabledHighlightedSprite() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EDB5C))(this);
	}
	template <typename T = void> T set_disabledHighlightedSprite(uintptr_t value) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EDBBC))(this, value);
	}
	template <typename T = uintptr_t> T get_disabledHighlightedColor() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EDC30))(this);
	}
	template <typename T = void> T set_disabledHighlightedColor(uintptr_t value) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EDC9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_disabledHighlightedTrigger() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EDD40))(this);
	}
	template <typename T = void> T set_disabledHighlightedTrigger(Il2CppString* value) {
		return ((T (*)(CustomSlider*, Il2CppString*))(Il2CppBase() + 0x21EDDA0))(this, value);
	}
	template <typename T = bool> T get_autoNavUp() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EDE14))(this);
	}
	template <typename T = void> T set_autoNavUp(bool value) {
		return ((T (*)(CustomSlider*, bool))(Il2CppBase() + 0x21EDE74))(this, value);
	}
	template <typename T = bool> T get_autoNavDown() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EDEEC))(this);
	}
	template <typename T = void> T set_autoNavDown(bool value) {
		return ((T (*)(CustomSlider*, bool))(Il2CppBase() + 0x21EDF4C))(this, value);
	}
	template <typename T = bool> T get_autoNavLeft() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EDFC4))(this);
	}
	template <typename T = void> T set_autoNavLeft(bool value) {
		return ((T (*)(CustomSlider*, bool))(Il2CppBase() + 0x21EE024))(this, value);
	}
	template <typename T = bool> T get_autoNavRight() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EE09C))(this);
	}
	template <typename T = void> T set_autoNavRight(bool value) {
		return ((T (*)(CustomSlider*, bool))(Il2CppBase() + 0x21EE0FC))(this, value);
	}
	template <typename T = bool> T get_isDisabled() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EE174))(this);
	}
	template <typename T = void> T add__CancelEvent(uintptr_t value) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EE1EC))(this, value);
	}
	template <typename T = void> T remove__CancelEvent(uintptr_t value) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EE2DC))(this, value);
	}
	template <typename T = void> T add_CancelEvent(uintptr_t value) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EE3CC))(this, value);
	}
	template <typename T = void> T remove_CancelEvent(uintptr_t value) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EE444))(this, value);
	}
	template <typename T = uintptr_t> T FindSelectableOnLeft() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EE4BC))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnRight() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EE5E4))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnUp() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EE70C))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnDown() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EE834))(this);
	}
	template <typename T = void> T OnCanvasGroupChanged() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EE95C))(this);
	}
	template <typename T = void> T DoStateTransition(uintptr_t state, bool instant) {
		return ((T (*)(CustomSlider*, uintptr_t, bool))(Il2CppBase() + 0x21EEBD0))(this, state, instant);
	}
	template <typename T = void> T StartColorTween(uintptr_t targetColor, bool instant) {
		return ((T (*)(CustomSlider*, uintptr_t, bool))(Il2CppBase() + 0x21EED68))(this, targetColor, instant);
	}
	template <typename T = void> T DoSpriteSwap(uintptr_t newSprite) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EEF10))(this, newSprite);
	}
	template <typename T = void> T TriggerAnimation(Il2CppString* triggername) {
		return ((T (*)(CustomSlider*, Il2CppString*))(Il2CppBase() + 0x21EF020))(this, triggername);
	}
	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EF214))(this, eventData);
	}
	template <typename T = void> T OnDeselect(uintptr_t eventData) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EF29C))(this, eventData);
	}
	template <typename T = void> T EvaluateHightlightDisabled(bool isSelected) {
		return ((T (*)(CustomSlider*, bool))(Il2CppBase() + 0x21EEAE8))(this, isSelected);
	}
	template <typename T = void> T OnCancel(uintptr_t eventData) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EF324))(this, eventData);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnLeft() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EF3C0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnRight() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EF3C8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnUp() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EF3D0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnDown() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EF3D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnCanvasGroupChanged() {
		return ((T (*)(CustomSlider*))(Il2CppBase() + 0x21EF3E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_DoStateTransition(uintptr_t P0, bool P1) {
		return ((T (*)(CustomSlider*, uintptr_t, bool))(Il2CppBase() + 0x21EF3E8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnSelect(uintptr_t P0) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EF3F4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDeselect(uintptr_t P0) {
		return ((T (*)(CustomSlider*, uintptr_t))(Il2CppBase() + 0x21EF3FC))(this, P0);
	}

};

}
