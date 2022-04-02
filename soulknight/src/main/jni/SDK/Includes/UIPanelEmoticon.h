#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIPanelEmoticon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPanelEmoticon"));
	}

	template <typename T = uintptr_t> T& emoticon_root() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& emoticonState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& previewEmoticon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& previewEmoticonImg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& scrollViewRect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& grid() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& grid_no_frame() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& emoticonProto() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& emoticonBtn() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ignoreRectList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& needCheck() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& posList() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIPanelEmoticon*))(Il2CppBase() + 0x4230E0C))(this);
	}
	template <typename T = void> T AddEvent() {
		return ((T (*)(UIPanelEmoticon*))(Il2CppBase() + 0x42315EC))(this);
	}
	template <typename T = void> T RemoveEvent() {
		return ((T (*)(UIPanelEmoticon*))(Il2CppBase() + 0x4231718))(this);
	}
	template <typename T = void> T OnSelectEmoticon(uintptr_t e) {
		return ((T (*)(UIPanelEmoticon*, uintptr_t))(Il2CppBase() + 0x4231844))(this, e);
	}
	template <typename T = void> T OnSendEmoticon(uintptr_t e) {
		return ((T (*)(UIPanelEmoticon*, uintptr_t))(Il2CppBase() + 0x4231AB4))(this, e);
	}
	template <typename T = void> T InitEmoticon() {
		return ((T (*)(UIPanelEmoticon*))(Il2CppBase() + 0x42310CC))(this);
	}
	template <typename T = void> T OnEmoticonBtnClick() {
		return ((T (*)(UIPanelEmoticon*))(Il2CppBase() + 0x4232384))(this);
	}
	template <typename T = void> T ShowEmoticonSelectView(bool show) {
		return ((T (*)(UIPanelEmoticon*, bool))(Il2CppBase() + 0x4231DEC))(this, show);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIPanelEmoticon*))(Il2CppBase() + 0x423249C))(this);
	}
	template <typename T = void> T SetPreviewEmoticonImg(uintptr_t sp) {
		return ((T (*)(UIPanelEmoticon*, uintptr_t))(Il2CppBase() + 0x4231940))(this, sp);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIPanelEmoticon*))(Il2CppBase() + 0x42324FC))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(UIPanelEmoticon*, uintptr_t))(Il2CppBase() + 0x4232A14))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(UIPanelEmoticon*, uintptr_t))(Il2CppBase() + 0x4232B28))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(UIPanelEmoticon*, uintptr_t))(Il2CppBase() + 0x4232C3C))(this, eventData);
	}
	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(UIPanelEmoticon*, uintptr_t))(Il2CppBase() + 0x4232F18))(this, eventData);
	}
	template <typename T = void> T ShowEmoticonSelectViewb__17_0() {
		return ((T (*)(UIPanelEmoticon*))(Il2CppBase() + 0x4233144))(this);
	}

};

}
