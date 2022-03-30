#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.ChooseHero {

class ChooseHeroModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.ChooseHero", "ChooseHeroModel"));
	}

	template <typename T = uintptr_t> T& newSkinConfig() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T RefreshAttributes() {
		return ((T (*)(ChooseHeroModel*))(Il2CppBase() + 0x44E934C))(this);
	}
	template <typename T = void> T RefreshConfirmButtonState() {
		return ((T (*)(ChooseHeroModel*))(Il2CppBase() + 0x44E95AC))(this);
	}
	template <typename T = void> T MakeSkinDataList() {
		return ((T (*)(ChooseHeroModel*))(Il2CppBase() + 0x44E9824))(this);
	}
	template <typename T = void> T OnShow(uintptr_t extraParams) {
		return ((T (*)(ChooseHeroModel*, uintptr_t))(Il2CppBase() + 0x44E9CFC))(this, extraParams);
	}
	template <typename T = void> T OnHide(uintptr_t extraParams) {
		return ((T (*)(ChooseHeroModel*, uintptr_t))(Il2CppBase() + 0x44EA204))(this, extraParams);
	}
	template <typename T = void> T OnSkinChanged(int32_t cellIndex) {
		return ((T (*)(ChooseHeroModel*, int32_t))(Il2CppBase() + 0x44EA34C))(this, cellIndex);
	}
	template <typename T = void> T UnlockSkill() {
		return ((T (*)(ChooseHeroModel*))(Il2CppBase() + 0x44EA580))(this);
	}
	template <typename T = void> T UnlockHero() {
		return ((T (*)(ChooseHeroModel*))(Il2CppBase() + 0x44EA8D4))(this);
	}
	template <typename T = void> T UnlockSkin() {
		return ((T (*)(ChooseHeroModel*))(Il2CppBase() + 0x44EAB70))(this);
	}
	template <typename T = void> T OnIAPRestoreHero() {
		return ((T (*)(ChooseHeroModel*))(Il2CppBase() + 0x44EAE9C))(this);
	}
	template <typename T = void> T OnIAPRestoreSkin(uintptr_t extraParams) {
		return ((T (*)(ChooseHeroModel*, uintptr_t))(Il2CppBase() + 0x44EAF6C))(this, extraParams);
	}
	template <typename T = void> T OnIAPRestoreSkill(uintptr_t extraParams) {
		return ((T (*)(ChooseHeroModel*, uintptr_t))(Il2CppBase() + 0x44EB12C))(this, extraParams);
	}
	template <typename T = void> T OnConfirmButtonClicked() {
		return ((T (*)(ChooseHeroModel*))(Il2CppBase() + 0x44EB21C))(this);
	}
	template <typename T = void> T ProcessMessage(uintptr_t message) {
		return ((T (*)(ChooseHeroModel*, uintptr_t))(Il2CppBase() + 0x44EB61C))(this, message);
	}

};

}
