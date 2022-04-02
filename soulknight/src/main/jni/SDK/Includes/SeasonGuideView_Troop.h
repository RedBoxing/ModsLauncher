#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SeasonGuideViewTroop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonGuideView_Troop"));
	}

	template <typename T = uintptr_t> T& TitleText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ContentText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& Contents() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ContentsRectTransform() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& TextContentRectTransform() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LeftBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& RightBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& showIndex() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& AfterReadGuide() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T InitView() {
		return ((T (*)(SeasonGuideViewTroop*))(Il2CppBase() + 0x181E38C))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(SeasonGuideViewTroop*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x181EDFC))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(SeasonGuideViewTroop*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x181EF1C))(this, objects);
	}
	template <typename T = void> T SetContentIndex(int32_t index) {
		return ((T (*)(SeasonGuideViewTroop*, int32_t))(Il2CppBase() + 0x181E7D8))(this, index);
	}
	template <typename T = void> T InitViewb__10_0() {
		return ((T (*)(SeasonGuideViewTroop*))(Il2CppBase() + 0x181F078))(this);
	}
	template <typename T = void> T InitViewb__10_1() {
		return ((T (*)(SeasonGuideViewTroop*))(Il2CppBase() + 0x181F084))(this);
	}
	template <typename T = void> T InitViewb__10_2() {
		return ((T (*)(SeasonGuideViewTroop*))(Il2CppBase() + 0x181F090))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(SeasonGuideViewTroop*))(Il2CppBase() + 0x181F118))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(SeasonGuideViewTroop*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x181F120))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(SeasonGuideViewTroop*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x181F128))(this, P0);
	}

};

}
