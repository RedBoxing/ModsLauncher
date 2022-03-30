#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PurchaseConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseConfig"));
	}

	template <typename T = bool> static T& IsGooglePlayPaySdkInitSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& products() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& OnGetPayInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ProductCoinsAndroid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ProductCoinsIOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ConsumeableProductRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& ProductRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& NewPkg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T get_IsGooglePlayPaySdkInitSuccess() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BA1688))(0);
	}
	template <typename T = void> static T set_IsGooglePlayPaySdkInitSuccess(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1BA16F0))(0, value);
	}
	template <typename T = uintptr_t> static T get_products() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BA1760))(0);
	}
	template <typename T = void> static T set_products(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BA17C8))(0, value);
	}
	template <typename T = void> static T add_OnGetPayInfo(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BA1834))(0, value);
	}
	template <typename T = void> static T remove_OnGetPayInfo(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BA1964))(0, value);
	}
	template <typename T = void> static T InitializePurchase(Il2CppArray<uintptr_t>* productArray) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BA1A94))(0, productArray);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_ProductCoinTiers() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BA1E90))(0);
	}
	template <typename T = Il2CppString*> static T GetNewPkg(int32_t idx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1BA1F34))(0, idx);
	}
	template <typename T = Il2CppString*> static T GetKeyById(Il2CppString* id) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1BA2000))(0, id);
	}

};

}
