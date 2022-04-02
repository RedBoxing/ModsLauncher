#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class CustomToggle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "CustomToggle"));
	}

	template <typename T = uintptr_t> T& _disabledHighlightedSprite() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _disabledHighlightedColor() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& _disabledHighlightedTrigger() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& _autoNavUp() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& _autoNavDown() {
		return *(T*)((uintptr_t)this + 0x121);
	}
	template <typename T = bool> T& _autoNavLeft() {
		return *(T*)((uintptr_t)this + 0x122);
	}
	template <typename T = bool> T& _autoNavRight() {
		return *(T*)((uintptr_t)this + 0x123);
	}
	template <typename T = bool> T& isHighlightDisabled() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& _CancelEvent() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = uintptr_t> T get_disabledHighlightedSprite() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21EF404))(this);
	}
	template <typename T = void> T set_disabledHighlightedSprite(uintptr_t value) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21EF464))(this, value);
	}
	template <typename T = uintptr_t> T get_disabledHighlightedColor() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21EF4D8))(this);
	}
	template <typename T = void> T set_disabledHighlightedColor(uintptr_t value) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21EF544))(this, value);
	}
	template <typename T = Il2CppString*> T get_disabledHighlightedTrigger() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21EF5E8))(this);
	}
	template <typename T = void> T set_disabledHighlightedTrigger(Il2CppString* value) {
		return ((T (*)(CustomToggle*, Il2CppString*))(Il2CppBase() + 0x21EF648))(this, value);
	}
	template <typename T = bool> T get_autoNavUp() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21EF6BC))(this);
	}
	template <typename T = void> T set_autoNavUp(bool value) {
		return ((T (*)(CustomToggle*, bool))(Il2CppBase() + 0x21EF71C))(this, value);
	}
	template <typename T = bool> T get_autoNavDown() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21EF794))(this);
	}
	template <typename T = void> T set_autoNavDown(bool value) {
		return ((T (*)(CustomToggle*, bool))(Il2CppBase() + 0x21EF7F4))(this, value);
	}
	template <typename T = bool> T get_autoNavLeft() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21EF86C))(this);
	}
	template <typename T = void> T set_autoNavLeft(bool value) {
		return ((T (*)(CustomToggle*, bool))(Il2CppBase() + 0x21EF8CC))(this, value);
	}
	template <typename T = bool> T get_autoNavRight() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21EF944))(this);
	}
	template <typename T = void> T set_autoNavRight(bool value) {
		return ((T (*)(CustomToggle*, bool))(Il2CppBase() + 0x21EF9A4))(this, value);
	}
	template <typename T = bool> T get_isDisabled() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21EFA1C))(this);
	}
	template <typename T = void> T add__CancelEvent(uintptr_t value) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21EFA94))(this, value);
	}
	template <typename T = void> T remove__CancelEvent(uintptr_t value) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21EFB84))(this, value);
	}
	template <typename T = void> T add_CancelEvent(uintptr_t value) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21EFC74))(this, value);
	}
	template <typename T = void> T remove_CancelEvent(uintptr_t value) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21EFCEC))(this, value);
	}
	template <typename T = uintptr_t> T FindSelectableOnLeft() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21EFD64))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnRight() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21EFE8C))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnUp() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21EFFB4))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnDown() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21F00DC))(this);
	}
	template <typename T = void> T OnCanvasGroupChanged() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21F0204))(this);
	}
	template <typename T = void> T DoStateTransition(uintptr_t state, bool instant) {
		return ((T (*)(CustomToggle*, uintptr_t, bool))(Il2CppBase() + 0x21F0478))(this, state, instant);
	}
	template <typename T = void> T StartColorTween(uintptr_t targetColor, bool instant) {
		return ((T (*)(CustomToggle*, uintptr_t, bool))(Il2CppBase() + 0x21F0610))(this, targetColor, instant);
	}
	template <typename T = void> T DoSpriteSwap(uintptr_t newSprite) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21F07B8))(this, newSprite);
	}
	template <typename T = void> T TriggerAnimation(Il2CppString* triggername) {
		return ((T (*)(CustomToggle*, Il2CppString*))(Il2CppBase() + 0x21F08C8))(this, triggername);
	}
	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21F0ABC))(this, eventData);
	}
	template <typename T = void> T OnDeselect(uintptr_t eventData) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21F0B44))(this, eventData);
	}
	template <typename T = void> T EvaluateHightlightDisabled(bool isSelected) {
		return ((T (*)(CustomToggle*, bool))(Il2CppBase() + 0x21F0390))(this, isSelected);
	}
	template <typename T = void> T OnCancel(uintptr_t eventData) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21F0BCC))(this, eventData);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnLeft() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21F0C68))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnRight() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21F0C70))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnUp() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21F0C78))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnDown() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21F0C80))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnCanvasGroupChanged() {
		return ((T (*)(CustomToggle*))(Il2CppBase() + 0x21F0C88))(this);
	}
	template <typename T = void> T iFixBaseProxy_DoStateTransition(uintptr_t P0, bool P1) {
		return ((T (*)(CustomToggle*, uintptr_t, bool))(Il2CppBase() + 0x21F0C90))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnSelect(uintptr_t P0) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21F0C9C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDeselect(uintptr_t P0) {
		return ((T (*)(CustomToggle*, uintptr_t))(Il2CppBase() + 0x21F0CA4))(this, P0);
	}

};

}
