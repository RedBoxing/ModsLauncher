#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class CustomButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "CustomButton"));
	}

	template <typename T = uintptr_t> T& _disabledHighlightedSprite() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _disabledHighlightedColor() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& _disabledHighlightedTrigger() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& _autoNavUp() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& _autoNavDown() {
		return *(T*)((uintptr_t)this + 0x101);
	}
	template <typename T = bool> T& _autoNavLeft() {
		return *(T*)((uintptr_t)this + 0x102);
	}
	template <typename T = bool> T& _autoNavRight() {
		return *(T*)((uintptr_t)this + 0x103);
	}
	template <typename T = bool> T& isHighlightDisabled() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& _CancelEvent() {
		return *(T*)((uintptr_t)this + 0x108);
	}

	template <typename T = uintptr_t> T get_disabledHighlightedSprite() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21EBD5C))(this);
	}
	template <typename T = void> T set_disabledHighlightedSprite(uintptr_t value) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21EBDBC))(this, value);
	}
	template <typename T = uintptr_t> T get_disabledHighlightedColor() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21EBE30))(this);
	}
	template <typename T = void> T set_disabledHighlightedColor(uintptr_t value) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21EBE94))(this, value);
	}
	template <typename T = Il2CppString*> T get_disabledHighlightedTrigger() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21EBF30))(this);
	}
	template <typename T = void> T set_disabledHighlightedTrigger(Il2CppString* value) {
		return ((T (*)(CustomButton*, Il2CppString*))(Il2CppBase() + 0x21EBF90))(this, value);
	}
	template <typename T = bool> T get_autoNavUp() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21EC004))(this);
	}
	template <typename T = void> T set_autoNavUp(bool value) {
		return ((T (*)(CustomButton*, bool))(Il2CppBase() + 0x21EC064))(this, value);
	}
	template <typename T = bool> T get_autoNavDown() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21EC0DC))(this);
	}
	template <typename T = void> T set_autoNavDown(bool value) {
		return ((T (*)(CustomButton*, bool))(Il2CppBase() + 0x21EC13C))(this, value);
	}
	template <typename T = bool> T get_autoNavLeft() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21EC1B4))(this);
	}
	template <typename T = void> T set_autoNavLeft(bool value) {
		return ((T (*)(CustomButton*, bool))(Il2CppBase() + 0x21EC214))(this, value);
	}
	template <typename T = bool> T get_autoNavRight() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21EC28C))(this);
	}
	template <typename T = void> T set_autoNavRight(bool value) {
		return ((T (*)(CustomButton*, bool))(Il2CppBase() + 0x21EC2EC))(this, value);
	}
	template <typename T = bool> T get_isDisabled() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21EC364))(this);
	}
	template <typename T = void> T add__CancelEvent(uintptr_t value) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21EC3DC))(this, value);
	}
	template <typename T = void> T remove__CancelEvent(uintptr_t value) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21EC4CC))(this, value);
	}
	template <typename T = void> T add_CancelEvent(uintptr_t value) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21EC5BC))(this, value);
	}
	template <typename T = void> T remove_CancelEvent(uintptr_t value) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21EC634))(this, value);
	}
	template <typename T = uintptr_t> T FindSelectableOnLeft() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21EC6AC))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnRight() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21EC7D4))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnUp() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21EC8FC))(this);
	}
	template <typename T = uintptr_t> T FindSelectableOnDown() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21ECA24))(this);
	}
	template <typename T = void> T OnCanvasGroupChanged() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21ECB4C))(this);
	}
	template <typename T = void> T DoStateTransition(uintptr_t state, bool instant) {
		return ((T (*)(CustomButton*, uintptr_t, bool))(Il2CppBase() + 0x21ECDC0))(this, state, instant);
	}
	template <typename T = void> T StartColorTween(uintptr_t targetColor, bool instant) {
		return ((T (*)(CustomButton*, uintptr_t, bool))(Il2CppBase() + 0x21ECF50))(this, targetColor, instant);
	}
	template <typename T = void> T DoSpriteSwap(uintptr_t newSprite) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21ED0F8))(this, newSprite);
	}
	template <typename T = void> T TriggerAnimation(Il2CppString* triggername) {
		return ((T (*)(CustomButton*, Il2CppString*))(Il2CppBase() + 0x21ED208))(this, triggername);
	}
	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21ED3FC))(this, eventData);
	}
	template <typename T = void> T OnDeselect(uintptr_t eventData) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21ED484))(this, eventData);
	}
	template <typename T = void> T Press() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21ED50C))(this);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21ED5C0))(this, eventData);
	}
	template <typename T = void> T OnSubmit(uintptr_t eventData) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21ED6DC))(this, eventData);
	}
	template <typename T = uintptr_t> T OnFinishSubmit() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21ED7E0))(this);
	}
	template <typename T = void> T EvaluateHightlightDisabled(bool isSelected) {
		return ((T (*)(CustomButton*, bool))(Il2CppBase() + 0x21ECCD8))(this, isSelected);
	}
	template <typename T = void> T OnCancel(uintptr_t eventData) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21ED8C0))(this, eventData);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnLeft() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21ED95C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnRight() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21ED964))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnUp() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21ED96C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindSelectableOnDown() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21ED974))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnCanvasGroupChanged() {
		return ((T (*)(CustomButton*))(Il2CppBase() + 0x21ED97C))(this);
	}
	template <typename T = void> T iFixBaseProxy_DoStateTransition(uintptr_t P0, bool P1) {
		return ((T (*)(CustomButton*, uintptr_t, bool))(Il2CppBase() + 0x21ED984))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnSelect(uintptr_t P0) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21ED990))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDeselect(uintptr_t P0) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21ED998))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnPointerClick(uintptr_t P0) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21ED9A0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnSubmit(uintptr_t P0) {
		return ((T (*)(CustomButton*, uintptr_t))(Il2CppBase() + 0x21ED9A8))(this, P0);
	}

};

}
