#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIRoomDecorateUnlock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIRoomDecorateUnlock"));
	}

	template <typename T = uintptr_t> T& trMaterialList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& itemMaterial() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& decorateItem() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& blueprint_proto() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& selectedBlueprint() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& title_text() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIRoomDecorateUnlock*))(Il2CppBase() + 0x4239B6C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIRoomDecorateUnlock*))(Il2CppBase() + 0x4239CF8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIRoomDecorateUnlock*))(Il2CppBase() + 0x4239D54))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIRoomDecorateUnlock*))(Il2CppBase() + 0x4239DB0))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t decorateItem, Il2CppString* title_name) {
		return ((T (*)(UIRoomDecorateUnlock*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x423A10C))(this, decorateItem, title_name);
	}
	template <typename T = void> T ShowWindow_1() {
		return ((T (*)(UIRoomDecorateUnlock*))(Il2CppBase() + 0x423B3E4))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UIRoomDecorateUnlock*))(Il2CppBase() + 0x423B5DC))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIRoomDecorateUnlock*))(Il2CppBase() + 0x4239EBC))(this);
	}
	template <typename T = void> T OnClick_Unlock() {
		return ((T (*)(UIRoomDecorateUnlock*))(Il2CppBase() + 0x423B774))(this);
	}
	template <typename T = void> T FlushMaterials(uintptr_t blueprint) {
		return ((T (*)(UIRoomDecorateUnlock*, uintptr_t))(Il2CppBase() + 0x423A2E4))(this, blueprint);
	}

};

}
