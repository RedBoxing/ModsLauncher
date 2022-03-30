#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowShopLimit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowShopLimit"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& purchaseGroups() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _endDate() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> static T ShowWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x432D244))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowShopLimit*))(Il2CppBase() + 0x432D654))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(UIWindowShopLimit*))(Il2CppBase() + 0x432D45C))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(UIWindowShopLimit*))(Il2CppBase() + 0x432DE80))(this);
	}
	template <typename T = void> T OnClick_Buy(uintptr_t btnBuy) {
		return ((T (*)(UIWindowShopLimit*, uintptr_t))(Il2CppBase() + 0x432DF84))(this, btnBuy);
	}
	template <typename T = void> T OnPurchaseDone(bool isSuccess) {
		return ((T (*)(UIWindowShopLimit*, bool))(Il2CppBase() + 0x432E268))(this, isSuccess);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIWindowShopLimit*))(Il2CppBase() + 0x432DDC4))(this);
	}
	template <typename T = void> T RefreshPackage(uintptr_t group) {
		return ((T (*)(UIWindowShopLimit*, uintptr_t))(Il2CppBase() + 0x432E2F0))(this, group);
	}
	template <typename T = uintptr_t> T GetPurchaseGroup(uintptr_t btnBuy) {
		return ((T (*)(UIWindowShopLimit*, uintptr_t))(Il2CppBase() + 0x432E130))(this, btnBuy);
	}
	template <typename T = uintptr_t> T CountingDown() {
		return ((T (*)(UIWindowShopLimit*))(Il2CppBase() + 0x432DD10))(this);
	}

};

}
