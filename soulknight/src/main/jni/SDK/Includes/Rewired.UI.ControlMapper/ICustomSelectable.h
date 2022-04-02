#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class ICustomSelectable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "ICustomSelectable"));
	}


	template <typename T = uintptr_t> T get_disabledHighlightedSprite() {
		return ((T (*)(ICustomSelectable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_disabledHighlightedSprite(uintptr_t value) {
		return ((T (*)(ICustomSelectable*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_disabledHighlightedColor() {
		return ((T (*)(ICustomSelectable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_disabledHighlightedColor(uintptr_t value) {
		return ((T (*)(ICustomSelectable*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T get_disabledHighlightedTrigger() {
		return ((T (*)(ICustomSelectable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_disabledHighlightedTrigger(Il2CppString* value) {
		return ((T (*)(ICustomSelectable*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_autoNavUp() {
		return ((T (*)(ICustomSelectable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_autoNavUp(bool value) {
		return ((T (*)(ICustomSelectable*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_autoNavDown() {
		return ((T (*)(ICustomSelectable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_autoNavDown(bool value) {
		return ((T (*)(ICustomSelectable*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_autoNavLeft() {
		return ((T (*)(ICustomSelectable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_autoNavLeft(bool value) {
		return ((T (*)(ICustomSelectable*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_autoNavRight() {
		return ((T (*)(ICustomSelectable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_autoNavRight(bool value) {
		return ((T (*)(ICustomSelectable*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_CancelEvent(uintptr_t value) {
		return ((T (*)(ICustomSelectable*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_CancelEvent(uintptr_t value) {
		return ((T (*)(ICustomSelectable*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
