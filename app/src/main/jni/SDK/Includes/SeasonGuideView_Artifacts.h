#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SeasonGuideViewArtifacts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonGuideView_Artifacts"));
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
	template <typename T = Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*> T& textKeyList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& _initContentFontSize() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T InitView() {
		return ((T (*)(SeasonGuideViewArtifacts*))(Il2CppBase() + 0x181C4F4))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(SeasonGuideViewArtifacts*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x181D270))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(SeasonGuideViewArtifacts*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x181D390))(this, objects);
	}
	template <typename T = void> T SetContentIndex(int32_t index) {
		return ((T (*)(SeasonGuideViewArtifacts*, int32_t))(Il2CppBase() + 0x181C940))(this, index);
	}
	template <typename T = void> T InitViewb__10_0() {
		return ((T (*)(SeasonGuideViewArtifacts*))(Il2CppBase() + 0x181E2D4))(this);
	}
	template <typename T = void> T InitViewb__10_1() {
		return ((T (*)(SeasonGuideViewArtifacts*))(Il2CppBase() + 0x181E2E0))(this);
	}
	template <typename T = void> T InitViewb__10_2() {
		return ((T (*)(SeasonGuideViewArtifacts*))(Il2CppBase() + 0x181E2EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(SeasonGuideViewArtifacts*))(Il2CppBase() + 0x181E374))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(SeasonGuideViewArtifacts*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x181E37C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(SeasonGuideViewArtifacts*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x181E384))(this, P0);
	}

};

}
