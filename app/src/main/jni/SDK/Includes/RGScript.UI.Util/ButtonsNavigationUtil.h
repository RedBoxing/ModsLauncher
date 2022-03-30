#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.Util {

class ButtonsNavigationUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.Util", "ButtonsNavigationUtil"));
	}

	template <typename T = uintptr_t> T& buttonsParent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cursorSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& cursorSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& cursorScale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& cursorLocalPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _buttons() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _selectedButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _cursor() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ButtonsNavigationUtil*))(Il2CppBase() + 0x4540C08))(this);
	}
	template <typename T = uintptr_t> T MakeNavigation() {
		return ((T (*)(ButtonsNavigationUtil*))(Il2CppBase() + 0x4540D7C))(this);
	}
	template <typename T = bool> T IsObjectAChild(uintptr_t o) {
		return ((T (*)(ButtonsNavigationUtil*, uintptr_t))(Il2CppBase() + 0x4540E5C))(this, o);
	}
	template <typename T = void> T SelectButton(uintptr_t button) {
		return ((T (*)(ButtonsNavigationUtil*, uintptr_t))(Il2CppBase() + 0x4540FD4))(this, button);
	}
	template <typename T = void> T DoKeyboardThings() {
		return ((T (*)(ButtonsNavigationUtil*))(Il2CppBase() + 0x453E598))(this);
	}

};

}
