#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NewSkinTipController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewSkinTipController"));
	}

	template <typename T = uintptr_t> T& newSkinConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& newTipImages() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& leftNewSkinObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rightNewSkinObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& titleNewSkinObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& titleMoveTargetY() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& titleTransform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& moveDuration() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<int32_t>*> T& _newSkinTargets() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NewSkinTipController*))(Il2CppBase() + 0x45212C0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NewSkinTipController*))(Il2CppBase() + 0x4521470))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(NewSkinTipController*))(Il2CppBase() + 0x4521694))(this);
	}
	template <typename T = void> T OnChoseSkinChangeSelection(uintptr_t e) {
		return ((T (*)(NewSkinTipController*, uintptr_t))(Il2CppBase() + 0x4521844))(this, e);
	}
	template <typename T = void> T SetRedPoint(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(NewSkinTipController*, uintptr_t, int32_t))(Il2CppBase() + 0x4521C7C))(this, hero, skinIndex);
	}
	template <typename T = Il2CppString*> static T GetEventName(int32_t hero, int32_t skinIndex) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x45220F0))(0, hero, skinIndex);
	}
	template <typename T = int32_t> static T GetPrevSkinIndex(int32_t currentIndex, void* skinList) {
		return ((T (*)(void *, int32_t, void*))(Il2CppBase() + 0x45221D0))(0, currentIndex, skinList);
	}
	template <typename T = int32_t> static T GetNextSkinIndex(int32_t currentIndex, void* skinList) {
		return ((T (*)(void *, int32_t, void*))(Il2CppBase() + 0x45222F8))(0, currentIndex, skinList);
	}
	template <typename T = bool> static T isSkipSkin(int32_t index, void* skinList) {
		return ((T (*)(void *, int32_t, void*))(Il2CppBase() + 0x4522420))(0, index, skinList);
	}
	template <typename T = void> T SelectTrack(bool selectNew) {
		return ((T (*)(NewSkinTipController*, bool))(Il2CppBase() + 0x4521AD0))(this, selectNew);
	}

};

}
