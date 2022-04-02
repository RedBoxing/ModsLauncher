#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectTV
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectTV"));
	}

	template <typename T = uintptr_t> T& text_gems() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& gems_icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& importemt_tab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& show_tab() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC8638))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC8744))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectTV*, uintptr_t))(Il2CppBase() + 0x1DC8900))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectTV*, uintptr_t))(Il2CppBase() + 0x1DC8B00))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectTV*, uintptr_t))(Il2CppBase() + 0x1DC8CC4))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC91CC))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC922C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC92B8))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC9318))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectTV*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DC9378))(this, controller, ext_info);
	}
	template <typename T = void> T BtnClick1() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC93F0))(this);
	}
	template <typename T = void> T BtnClick2() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC9864))(this);
	}
	template <typename T = void> T ShowUILoading() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC9690))(this);
	}
	template <typename T = void> T HideUILoading() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC98DC))(this);
	}
	template <typename T = void> T OnAdRewardSuccess() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC99FC))(this);
	}
	template <typename T = void> T BtnClick1b__14_0() {
		return ((T (*)(ObjectTV*))(Il2CppBase() + 0x1DC9CAC))(this);
	}

};

}
