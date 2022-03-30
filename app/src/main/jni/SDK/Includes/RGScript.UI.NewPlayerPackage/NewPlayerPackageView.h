#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.NewPlayerPackage {

class NewPlayerPackageView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.NewPlayerPackage", "NewPlayerPackageView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& purchaseGroups() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _endDate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& contentRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& DurDay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T ShowWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x44FCD08))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NewPlayerPackageView*))(Il2CppBase() + 0x44FD118))(this);
	}
	template <typename T = void> T RefreshItemsActive() {
		return ((T (*)(NewPlayerPackageView*))(Il2CppBase() + 0x44FE39C))(this);
	}
	template <typename T = uintptr_t> T RefreshBGWidth() {
		return ((T (*)(NewPlayerPackageView*))(Il2CppBase() + 0x44FE40C))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(NewPlayerPackageView*))(Il2CppBase() + 0x44FCF20))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(NewPlayerPackageView*))(Il2CppBase() + 0x44FE630))(this);
	}
	template <typename T = void> T OnClick_Buy(uintptr_t btnBuy) {
		return ((T (*)(NewPlayerPackageView*, uintptr_t))(Il2CppBase() + 0x44FE734))(this, btnBuy);
	}
	template <typename T = void> T OnPurchaseDone(bool isSuccess) {
		return ((T (*)(NewPlayerPackageView*, bool))(Il2CppBase() + 0x44FEAA8))(this, isSuccess);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(NewPlayerPackageView*))(Il2CppBase() + 0x44FE574))(this);
	}
	template <typename T = void> T RefreshPackage(uintptr_t group) {
		return ((T (*)(NewPlayerPackageView*, uintptr_t))(Il2CppBase() + 0x44FEB30))(this, group);
	}
	template <typename T = uintptr_t> T GetPurchaseGroup(uintptr_t btnBuy) {
		return ((T (*)(NewPlayerPackageView*, uintptr_t))(Il2CppBase() + 0x44FE970))(this, btnBuy);
	}
	template <typename T = uintptr_t> T CountingDown() {
		return ((T (*)(NewPlayerPackageView*))(Il2CppBase() + 0x44FE4C0))(this);
	}
	template <typename T = bool> static T CanBuyPkg(int32_t pkgIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x44FE0C4))(0, pkgIdx);
	}
	template <typename T = bool> static T CanBuyAnyPkg() {
		return ((T (*)(void *))(Il2CppBase() + 0x44FEE30))(0);
	}

};

}
