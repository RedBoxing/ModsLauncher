#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SDKManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SDKManager"));
	}

	template <typename T = uintptr_t> static T& m_StoreController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_StoreExtensionProvider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& OnPurchaseCoinDone() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& OnPurchaseRoleDone() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& OnRestoreRole() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& purchaseInProgress() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& initFailMsg() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& hasChecked() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isValid() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> T& google_play() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SDKManager*))(Il2CppBase() + 0x180EE20))(this);
	}
	template <typename T = void> T InitFacebook() {
		return ((T (*)(SDKManager*))(Il2CppBase() + 0x180EFFC))(this);
	}
	template <typename T = void> T InitAppflyer() {
		return ((T (*)(SDKManager*))(Il2CppBase() + 0x180F190))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(SDKManager*, bool))(Il2CppBase() + 0x180FDA0))(this, pauseStatus);
	}
	template <typename T = void> T InitializePurchasing() {
		return ((T (*)(SDKManager*))(Il2CppBase() + 0x180F9A8))(this);
	}
	template <typename T = bool> T IsStoreInitialized() {
		return ((T (*)(SDKManager*))(Il2CppBase() + 0x180FF78))(this);
	}
	template <typename T = void> T SetRestore(void* OnRestore) {
		return ((T (*)(SDKManager*, void*))(Il2CppBase() + 0x1810024))(this, OnRestore);
	}
	template <typename T = void> T BuyCoin(int32_t index, void* OnPurchaseDone, uintptr_t buyWay) {
		return ((T (*)(SDKManager*, int32_t, void*, uintptr_t))(Il2CppBase() + 0x1810098))(this, index, OnPurchaseDone, buyWay);
	}
	template <typename T = void> T BuyRole(Il2CppString* resId, void* OnPurchaseDone, uintptr_t buyWay) {
		return ((T (*)(SDKManager*, Il2CppString*, void*, uintptr_t))(Il2CppBase() + 0x1810998))(this, resId, OnPurchaseDone, buyWay);
	}
	template <typename T = void> T BuyProductID(Il2CppString* productId, uintptr_t buyWay) {
		return ((T (*)(SDKManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x18101DC))(this, productId, buyWay);
	}
	template <typename T = void> T RestorePurchases() {
		return ((T (*)(SDKManager*))(Il2CppBase() + 0x1810AC4))(this);
	}
	template <typename T = void> T OnInitialized(uintptr_t controller, uintptr_t extensions) {
		return ((T (*)(SDKManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1810E44))(this, controller, extensions);
	}
	template <typename T = void> T OnInitializeFailed(uintptr_t error) {
		return ((T (*)(SDKManager*, uintptr_t))(Il2CppBase() + 0x1810F34))(this, error);
	}
	template <typename T = uintptr_t> T ProcessPurchase(uintptr_t product) {
		return ((T (*)(SDKManager*, uintptr_t))(Il2CppBase() + 0x181109C))(this, product);
	}
	template <typename T = uintptr_t> T ProcessPurchase_1(uintptr_t args) {
		return ((T (*)(SDKManager*, uintptr_t))(Il2CppBase() + 0x1811248))(this, args);
	}
	template <typename T = void> T OnPurchaseFailed(uintptr_t product, uintptr_t failureReason) {
		return ((T (*)(SDKManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18112D8))(this, product, failureReason);
	}
	template <typename T = Il2CppString*> T GetPriceDiscription(Il2CppString* productid, bool use_bmf) {
		return ((T (*)(SDKManager*, Il2CppString*, bool))(Il2CppBase() + 0x181196C))(this, productid, use_bmf);
	}
	template <typename T = Il2CppString*> T GetPriceDiscriptionGem(int32_t index, bool use_bmf) {
		return ((T (*)(SDKManager*, int32_t, bool))(Il2CppBase() + 0x1812008))(this, index, use_bmf);
	}
	template <typename T = bool> T CheckSignatrue() {
		return ((T (*)(SDKManager*))(Il2CppBase() + 0x180F1EC))(this);
	}
	template <typename T = void> T WayToJustice() {
		return ((T (*)(SDKManager*))(Il2CppBase() + 0x1812754))(this);
	}
	template <typename T = void> T JusticeExecuted() {
		return ((T (*)(SDKManager*))(Il2CppBase() + 0x18127E4))(this);
	}
	template <typename T = void> T LoginGooglePlay(void* onLogin) {
		return ((T (*)(SDKManager*, void*))(Il2CppBase() + 0x1812844))(this, onLogin);
	}
	template <typename T = void> T GetAchievement(Il2CppString* value) {
		return ((T (*)(SDKManager*, Il2CppString*))(Il2CppBase() + 0x18129B8))(this, value);
	}
	template <typename T = void> T ShowAchievement() {
		return ((T (*)(SDKManager*))(Il2CppBase() + 0x1812A44))(this);
	}
	template <typename T = void> T DoOnSignIn(bool value) {
		return ((T (*)(SDKManager*, bool))(Il2CppBase() + 0x1812AB8))(this, value);
	}
	template <typename T = void> T BuyProductIDb__16_0(Il2CppString* id) {
		return ((T (*)(SDKManager*, Il2CppString*))(Il2CppBase() + 0x1812D74))(this, id);
	}
	template <typename T = void> T BuyProductIDb__16_1(Il2CppString* id) {
		return ((T (*)(SDKManager*, Il2CppString*))(Il2CppBase() + 0x1813020))(this, id);
	}

};

}
