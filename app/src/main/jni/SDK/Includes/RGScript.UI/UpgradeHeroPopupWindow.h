#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI {

class UpgradeHeroPopupWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI", "UpgradeHeroPopupWindow"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& additionSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& arrowLight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& arrowDark() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& upgradeClip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _maskImage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _maskButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _background() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _additions() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _arrows() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _stars() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _upgradeButton() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _heroLevelMax() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _effect() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _characterIndex() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _skinIndex() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& GrayColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UpgradeHeroPopupWindow*))(Il2CppBase() + 0x453E8DC))(this);
	}
	template <typename T = void> static T FixIconScale(uintptr_t icon) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x453EDF4))(0, icon);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UpgradeHeroPopupWindow*))(Il2CppBase() + 0x453EF68))(this);
	}
	template <typename T = void> static T ShowFirstGetHeroItemDialog() {
		return ((T (*)(void *))(Il2CppBase() + 0x453FD6C))(0);
	}
	template <typename T = void> T OnUpgradeButtonClicked() {
		return ((T (*)(UpgradeHeroPopupWindow*))(Il2CppBase() + 0x453FED4))(this);
	}
	template <typename T = void> T Show(int32_t characterIndex, int32_t skinIndex) {
		return ((T (*)(UpgradeHeroPopupWindow*, int32_t, int32_t))(Il2CppBase() + 0x45405D0))(this, characterIndex, skinIndex);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(UpgradeHeroPopupWindow*))(Il2CppBase() + 0x45407A8))(this);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(UpgradeHeroPopupWindow*))(Il2CppBase() + 0x4540984))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(UpgradeHeroPopupWindow*, bool))(Il2CppBase() + 0x454098C))(this, value);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UpgradeHeroPopupWindow*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4540998))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UpgradeHeroPopupWindow*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4540A08))(this, objects);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(UpgradeHeroPopupWindow*, uintptr_t))(Il2CppBase() + 0x4540A78))(this, navigationEvent);
	}
	template <typename T = void> T Showb__22_0() {
		return ((T (*)(UpgradeHeroPopupWindow*))(Il2CppBase() + 0x4540B7C))(this);
	}
	template <typename T = void> T Hideb__23_0() {
		return ((T (*)(UpgradeHeroPopupWindow*))(Il2CppBase() + 0x4540BD4))(this);
	}

};

}
