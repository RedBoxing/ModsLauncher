#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowDraw
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowDraw"));
	}

	template <typename T = uintptr_t> T& fullImgGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fullImg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& auth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& btnBackward() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& btnForward() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pageContents() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pageNodes() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _currentPageIdx() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& movePageSequence() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& pagesParent() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& pageLayoutRoot() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x4594BF0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x4595074))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x45950D0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x459512C))(this);
	}
	template <typename T = void> T OnClick_SwitchForword() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x4595408))(this);
	}
	template <typename T = void> T OnClick_SwitchBackword() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x4595730))(this);
	}
	template <typename T = void> T MovePage(int32_t offset) {
		return ((T (*)(UIWindowDraw*, int32_t))(Il2CppBase() + 0x459546C))(this, offset);
	}
	template <typename T = void> T RefreshForwardButton() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x4594F3C))(this);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x4595794))(this);
	}
	template <typename T = void> T CloseWindow(bool continueGame) {
		return ((T (*)(UIWindowDraw*, bool))(Il2CppBase() + 0x459520C))(this, continueGame);
	}
	template <typename T = void> T OnClick_ZoomOut() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x45957F8))(this);
	}
	template <typename T = void> T OnClick_Image(uintptr_t source) {
		return ((T (*)(UIWindowDraw*, uintptr_t))(Il2CppBase() + 0x45958A0))(this, source);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x4595D44))(this);
	}
	template <typename T = void> T MovePageb__18_0() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x4595E50))(this);
	}
	template <typename T = void> T MovePageb__18_1() {
		return ((T (*)(UIWindowDraw*))(Il2CppBase() + 0x4595ED8))(this);
	}

};

}
