#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowMechDialog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowMechDialog"));
	}

	template <typename T = uintptr_t> T& onConfirm() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onCancel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& materialRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& materialProto() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& imgMech() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& txMechName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& txHealth() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& txDefence() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& txSpeed() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mechInfo() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& enoughMaterial() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowMechDialog*))(Il2CppBase() + 0x44AAD4C))(this);
	}
	template <typename T = uintptr_t> static T ShowWindow(Il2CppString* mechName, uintptr_t parent, uintptr_t onConfirm, uintptr_t onCancel) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44AAFD0))(0, mechName, parent, onConfirm, onCancel);
	}
	template <typename T = void> T RefreshMaterials() {
		return ((T (*)(UIWindowMechDialog*))(Il2CppBase() + 0x44AB2A4))(this);
	}
	template <typename T = void> T OnClick_Confirm() {
		return ((T (*)(UIWindowMechDialog*))(Il2CppBase() + 0x44AB804))(this);
	}
	template <typename T = void> T OnClick_Cancel() {
		return ((T (*)(UIWindowMechDialog*))(Il2CppBase() + 0x44AB914))(this);
	}

};

}
