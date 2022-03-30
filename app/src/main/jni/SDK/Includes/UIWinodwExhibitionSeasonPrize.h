#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWinodwExhibitionSeasonPrize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWinodwExhibitionSeasonPrize"));
	}

	template <typename T = uintptr_t> T& PrizeImage() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& seasonTitleText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& PrizeText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& BgTransform() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ContentTextRectTransform() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& panelCondition() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& panelReward() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& AwardBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& AwardGa() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& conditionProto() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Season() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SeasonPrize() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> static T& showSeconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& hideSeconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T IsRewarded(uintptr_t season) {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*, uintptr_t))(Il2CppBase() + 0x45CA898))(this, season);
	}
	template <typename T = void> T SetReward(uintptr_t season) {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*, uintptr_t))(Il2CppBase() + 0x45CA9FC))(this, season);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*))(Il2CppBase() + 0x45CAB60))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45CB014))(this, objects);
	}
	template <typename T = void> T RefreshConditions() {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*))(Il2CppBase() + 0x45CB764))(this);
	}
	template <typename T = void> T RefreshProgress() {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*))(Il2CppBase() + 0x45CB46C))(this);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45CC3F4))(this, objects);
	}
	template <typename T = void> static T ShowWindow(uintptr_t season) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45CC634))(0, season);
	}
	template <typename T = void> T GetReward() {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*))(Il2CppBase() + 0x45CC854))(this);
	}
	template <typename T = void> T InitViewb__17_0() {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*))(Il2CppBase() + 0x45CCB68))(this);
	}
	template <typename T = void> T InitViewb__17_1() {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*))(Il2CppBase() + 0x45CCBCC))(this);
	}
	template <typename T = void> T n__0(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45CCC38))(this, objects);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*))(Il2CppBase() + 0x45CCC40))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45CCC48))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWinodwExhibitionSeasonPrize*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45CCC50))(this, P0);
	}

};

}
