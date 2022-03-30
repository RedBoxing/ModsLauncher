#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowDialogTextSelect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowDialogTextSelect"));
	}

	template <typename T = uintptr_t> T& text1() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& text2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowDialogTextSelect*))(Il2CppBase() + 0x4593FA8))(this);
	}
	template <typename T = void> static T ShowDialogTextSelect(uintptr_t parent, uintptr_t textParam, uintptr_t onConfirm, uintptr_t onCancel, bool pauseGame) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4594138))(0, parent, textParam, onConfirm, onCancel, pauseGame);
	}
	template <typename T = void> static T ShowDialogTextSelect_1(uintptr_t parent, uintptr_t textParam, uintptr_t onConfirm, bool pauseGame) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x45944A0))(0, parent, textParam, onConfirm, pauseGame);
	}
	template <typename T = void> T ShowAnim() {
		return ((T (*)(UIWindowDialogTextSelect*))(Il2CppBase() + 0x459489C))(this);
	}
	template <typename T = void> T CloseAnim() {
		return ((T (*)(UIWindowDialogTextSelect*))(Il2CppBase() + 0x4594964))(this);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(UIWindowDialogTextSelect*))(Il2CppBase() + 0x4594A1C))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(UIWindowDialogTextSelect*, bool))(Il2CppBase() + 0x4594958))(this, value);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowDialogTextSelect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4594A24))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowDialogTextSelect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4594AA0))(this, objects);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(UIWindowDialogTextSelect*, uintptr_t))(Il2CppBase() + 0x4594B1C))(this, navigationEvent);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(UIWindowDialogTextSelect*))(Il2CppBase() + 0x4594BDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowAnim() {
		return ((T (*)(UIWindowDialogTextSelect*))(Il2CppBase() + 0x4594BE0))(this);
	}
	template <typename T = void> T iFixBaseProxy_CloseAnim() {
		return ((T (*)(UIWindowDialogTextSelect*))(Il2CppBase() + 0x4594BE8))(this);
	}

};

}
