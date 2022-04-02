#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowDialogInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowDialogInput"));
	}

	template <typename T = uintptr_t> T& placeholder() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& inputContent() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& input() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& helpBtnTf() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& onConfirmInput() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& inputDialogParam() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowDialogInput*))(Il2CppBase() + 0x4593624))(this);
	}
	template <typename T = void> T OnClickConfirm() {
		return ((T (*)(UIWindowDialogInput*))(Il2CppBase() + 0x459395C))(this);
	}
	template <typename T = void> T OnClickHelp() {
		return ((T (*)(UIWindowDialogInput*))(Il2CppBase() + 0x4593B18))(this);
	}
	template <typename T = void> static T ShowDialogInput(uintptr_t parent, uintptr_t inputParam, void* onConfirm, uintptr_t onCancel, bool pauseGame) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*, uintptr_t, bool))(Il2CppBase() + 0x4593B94))(0, parent, inputParam, onConfirm, onCancel, pauseGame);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(UIWindowDialogInput*))(Il2CppBase() + 0x4593FA4))(this);
	}

};

}
