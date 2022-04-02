#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIBtnMaskDown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIBtnMaskDown"));
	}

	template <typename T = int32_t> T& char_index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& skin_index() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& skin_mode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& btn_confirm() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& btn_levelup() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& text_levelup_1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& text_levelup_2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& share_icon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ui_chose_hero() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& tryTicket() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& tryTicketText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& tryMode() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UIBtnMaskDown*))(Il2CppBase() + 0x419B6F0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIBtnMaskDown*))(Il2CppBase() + 0x419B7C4))(this);
	}
	template <typename T = void> T RefreshRMBProductDesc() {
		return ((T (*)(UIBtnMaskDown*))(Il2CppBase() + 0x419BA28))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIBtnMaskDown*))(Il2CppBase() + 0x419C760))(this);
	}
	template <typename T = void> T ShowBtnChar(int32_t f_char_index) {
		return ((T (*)(UIBtnMaskDown*, int32_t))(Il2CppBase() + 0x419C834))(this, f_char_index);
	}
	template <typename T = void> T ShowBtnPet(int32_t f_pet_index) {
		return ((T (*)(UIBtnMaskDown*, int32_t))(Il2CppBase() + 0x419D3F8))(this, f_pet_index);
	}
	template <typename T = void> T ShowBtnMech(uintptr_t mech, int32_t mechIndex, bool materialEnough) {
		return ((T (*)(UIBtnMaskDown*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x419D844))(this, mech, mechIndex, materialEnough);
	}
	template <typename T = void> T ShowBtnCharSkin(int32_t f_char_index, int32_t f_skin_index) {
		return ((T (*)(UIBtnMaskDown*, int32_t, int32_t))(Il2CppBase() + 0x419DC90))(this, f_char_index, f_skin_index);
	}
	template <typename T = void> T ReSetMashDown() {
		return ((T (*)(UIBtnMaskDown*))(Il2CppBase() + 0x419D164))(this);
	}
	template <typename T = void> T BtnLevelUp() {
		return ((T (*)(UIBtnMaskDown*))(Il2CppBase() + 0x419E808))(this);
	}
	template <typename T = bool> T IsBtnLevelupActive() {
		return ((T (*)(UIBtnMaskDown*))(Il2CppBase() + 0x419E8AC))(this);
	}
	template <typename T = bool> T IsBtnConfirmActive() {
		return ((T (*)(UIBtnMaskDown*))(Il2CppBase() + 0x419EC10))(this);
	}
	template <typename T = Il2CppString*> T TransValueToId(int32_t f_char_index) {
		return ((T (*)(UIBtnMaskDown*, int32_t))(Il2CppBase() + 0x419C4DC))(this, f_char_index);
	}
	template <typename T = bool> T ShowTryTicket(bool heroUnlock, bool skillUnlock) {
		return ((T (*)(UIBtnMaskDown*, bool, bool))(Il2CppBase() + 0x419D2B0))(this, heroUnlock, skillUnlock);
	}
	template <typename T = void> T SetTextFont(bool isChargingPoint) {
		return ((T (*)(UIBtnMaskDown*, bool))(Il2CppBase() + 0x419BF68))(this, isChargingPoint);
	}

};

}
