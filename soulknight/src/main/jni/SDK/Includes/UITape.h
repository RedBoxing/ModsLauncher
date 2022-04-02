#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITape
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITape"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& allTapes() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& itemDatas() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& originAudio() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& btnLike() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& btnLeft() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& btnRight() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& btnPlay() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& btnPause() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& imLikeHeart() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& txTapeName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& sheep() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& playingIndex() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = bool> T get_pauseWhenShow() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C0EB4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C0F14))(this);
	}
	template <typename T = uintptr_t> static T ShowWindow(uintptr_t sheep) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41C1424))(0, sheep);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C1588))(this);
	}
	template <typename T = void> T RefreshTape() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C1760))(this);
	}
	template <typename T = void> T OnSelectionChanged(int32_t index) {
		return ((T (*)(UITape*, int32_t))(Il2CppBase() + 0x41C1E08))(this, index);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C2C8C))(this);
	}
	template <typename T = void> T OnClickConfirm() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C2CF0))(this);
	}
	template <typename T = void> T OnClickClose() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C2D6C))(this);
	}
	template <typename T = void> T OnClickLeft() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C2F4C))(this);
	}
	template <typename T = void> T OnClickRight() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C2FEC))(this);
	}
	template <typename T = int32_t> T get_selectIndex() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C308C))(this);
	}
	template <typename T = bool> T get_isPlaying() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C2118))(this);
	}
	template <typename T = void> T set_isPlaying(bool value) {
		return ((T (*)(UITape*, bool))(Il2CppBase() + 0x41C3100))(this, value);
	}
	template <typename T = void> T OnClickPause() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C32F4))(this);
	}
	template <typename T = void> T OnClickPlay() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C3364))(this);
	}
	template <typename T = void> T OnClickLike() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C33E4))(this);
	}
	template <typename T = void> T RefreshLike() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C2B6C))(this);
	}
	template <typename T = uintptr_t> T GetTapeData(uintptr_t tapeProto) {
		return ((T (*)(UITape*, uintptr_t))(Il2CppBase() + 0x41C1C58))(this, tapeProto);
	}
	template <typename T = void> static T LoadBgm(Il2CppString* bgmName, bool needPlay, void* onLoad) {
		return ((T (*)(void *, Il2CppString*, bool, void*))(Il2CppBase() + 0x41C2768))(0, bgmName, needPlay, onLoad);
	}
	template <typename T = void> static T LoadRandomBgm(Il2CppList<uintptr_t>* randomList, bool needPlay, void* onLoad) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, bool, void*))(Il2CppBase() + 0x41C21A4))(0, randomList, needPlay, onLoad);
	}
	template <typename T = void> static T LoadBgmWithIntro(Il2CppString* intro, Il2CppString* loop, float silenceLength, bool needPlay, void* onLoad) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, float, bool, void*))(Il2CppBase() + 0x41C3684))(0, intro, loop, silenceLength, needPlay, onLoad);
	}
	template <typename T = Il2CppString*> static T BgmBundleName(Il2CppString* bgmName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x41C354C))(0, bgmName);
	}
	template <typename T = uintptr_t> T GetTapeData_1(int32_t index) {
		return ((T (*)(UITape*, int32_t))(Il2CppBase() + 0x41C2020))(this, index);
	}
	template <typename T = bool> T RefreshTapeb__17_0(uintptr_t x) {
		return ((T (*)(UITape*, uintptr_t))(Il2CppBase() + 0x41C383C))(this, x);
	}
	template <typename T = bool> T iFixBaseProxy_get_pauseWhenShow() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C3894))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C389C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(UITape*))(Il2CppBase() + 0x41C38A4))(this);
	}

};

}
