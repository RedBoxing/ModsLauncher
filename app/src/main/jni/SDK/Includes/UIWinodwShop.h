#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWinodwShop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWinodwShop"));
	}

	template <typename T = uintptr_t> T& higher_winodw() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& text_option2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& text_option3() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& text_option4() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& text_option5() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& use35000() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& adShown() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = bool> T& adUnreadyReported() {
		return *(T*)((uintptr_t)this + 0x6A);
	}
	template <typename T = uintptr_t> T& onBuyRebornCard() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& imgOptionAds() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& normalBtnSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& greenBtnSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& buyWay() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CDF68))(this);
	}
	template <typename T = void> T SetBuyWay(uintptr_t buyWay) {
		return ((T (*)(UIWinodwShop*, uintptr_t))(Il2CppBase() + 0x45CE4F8))(this, buyWay);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CE56C))(this);
	}
	template <typename T = void> T RefreshRMBProductDesc() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CE640))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CE938))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CE998))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CEA6C))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t value) {
		return ((T (*)(UIWinodwShop*, uintptr_t))(Il2CppBase() + 0x45CEAC8))(this, value);
	}
	template <typename T = void> T BtnBackClick() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CEED0))(this);
	}
	template <typename T = void> T BtnOption1Click() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CF1D4))(this);
	}
	template <typename T = void> T BtnOption2Click() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CF78C))(this);
	}
	template <typename T = void> T BtnOption3Click() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CF8C0))(this);
	}
	template <typename T = void> T BtnOption4Click() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CF9F4))(this);
	}
	template <typename T = void> T BtnOption5Click() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CFB38))(this);
	}
	template <typename T = void> T GetCoinVideo(bool value) {
		return ((T (*)(UIWinodwShop*, bool))(Il2CppBase() + 0x45CFC74))(this, value);
	}
	template <typename T = void> T BuyCoin1(bool value) {
		return ((T (*)(UIWinodwShop*, bool))(Il2CppBase() + 0x45D02C0))(this, value);
	}
	template <typename T = void> T BuyCoin2(bool value) {
		return ((T (*)(UIWinodwShop*, bool))(Il2CppBase() + 0x45D03B8))(this, value);
	}
	template <typename T = void> T BuyCoin3(bool value) {
		return ((T (*)(UIWinodwShop*, bool))(Il2CppBase() + 0x45D04B0))(this, value);
	}
	template <typename T = void> T BuyRebornCard(bool value) {
		return ((T (*)(UIWinodwShop*, bool))(Il2CppBase() + 0x45D05C8))(this, value);
	}
	template <typename T = void> T ShowUILoading() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45CF5B8))(this);
	}
	template <typename T = void> T HideUILoading() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45D01A0))(this);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45D0714))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(UIWinodwShop*, bool))(Il2CppBase() + 0x45D071C))(this, value);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWinodwShop*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45CEBFC))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWinodwShop*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45CEF68))(this, objects);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(UIWinodwShop*, uintptr_t))(Il2CppBase() + 0x45D0728))(this, navigationEvent);
	}
	template <typename T = void> T BtnOption1Clickb__22_0() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45D07F0))(this);
	}
	template <typename T = void> T BtnOption1Clickb__22_1() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45D07F8))(this);
	}
	template <typename T = void> T BtnOption1Clickb__22_2() {
		return ((T (*)(UIWinodwShop*))(Il2CppBase() + 0x45D07FC))(this);
	}

};

}
