#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowPlantPot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowPlantPot"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& buttons() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& pot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& text_gems() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& text_btn_price() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& payId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& levelup_clip() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& btn_confirm() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowPlantPot*))(Il2CppBase() + 0x4316860))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowPlantPot*))(Il2CppBase() + 0x431699C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowPlantPot*))(Il2CppBase() + 0x43169F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowPlantPot*))(Il2CppBase() + 0x4316A54))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t pot) {
		return ((T (*)(UIWindowPlantPot*, uintptr_t))(Il2CppBase() + 0x43170AC))(this, pot);
	}
	template <typename T = void> T ShowWindow_1() {
		return ((T (*)(UIWindowPlantPot*))(Il2CppBase() + 0x4317340))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UIWindowPlantPot*))(Il2CppBase() + 0x4317538))(this);
	}
	template <typename T = void> T OnClick_Unlock() {
		return ((T (*)(UIWindowPlantPot*))(Il2CppBase() + 0x4316DC0))(this);
	}
	template <typename T = void> T OnPurchase(bool isSuccess) {
		return ((T (*)(UIWindowPlantPot*, bool))(Il2CppBase() + 0x43176D0))(this, isSuccess);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWindowPlantPot*))(Il2CppBase() + 0x4316B70))(this);
	}

};

}
