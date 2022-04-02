#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIBuffBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIBuffBar"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ui_loading() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buff_img_list() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buff_tip_list() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<int32_t>*> T& random_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<int32_t>*> T& buff_index() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& buff_grid() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& item_buff() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& text_tip() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& focus_index() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& buffCount() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& can_click() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& select_buff_tips() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& targetFinger() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIBuffBar*))(Il2CppBase() + 0x41A037C))(this);
	}
	template <typename T = void> T AddEvent() {
		return ((T (*)(UIBuffBar*))(Il2CppBase() + 0x41A0694))(this);
	}
	template <typename T = void> T RemoveEvent() {
		return ((T (*)(UIBuffBar*))(Il2CppBase() + 0x41A0778))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIBuffBar*))(Il2CppBase() + 0x41A085C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIBuffBar*))(Il2CppBase() + 0x41A08BC))(this);
	}
	template <typename T = void> T OnHighlightChanged(uintptr_t last, uintptr_t current) {
		return ((T (*)(UIBuffBar*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41A1148))(this, last, current);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIBuffBar*))(Il2CppBase() + 0x41A1568))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIBuffBar*))(Il2CppBase() + 0x41A15C4))(this);
	}
	template <typename T = void> T BtnClick(int32_t value) {
		return ((T (*)(UIBuffBar*, int32_t))(Il2CppBase() + 0x41A1724))(this, value);
	}
	template <typename T = void> T OnSelectBuff(uintptr_t e) {
		return ((T (*)(UIBuffBar*, uintptr_t))(Il2CppBase() + 0x41A1F98))(this, e);
	}
	template <typename T = void> T ShowSelectAnim(int32_t selectIdx) {
		return ((T (*)(UIBuffBar*, int32_t))(Il2CppBase() + 0x41A1D78))(this, selectIdx);
	}
	template <typename T = void> T FocusOn(int32_t value) {
		return ((T (*)(UIBuffBar*, int32_t))(Il2CppBase() + 0x41A1414))(this, value);
	}
	template <typename T = void> T StartLoad() {
		return ((T (*)(UIBuffBar*))(Il2CppBase() + 0x41A20C8))(this);
	}
	template <typename T = void> T GetBuffIndex() {
		return ((T (*)(UIBuffBar*))(Il2CppBase() + 0x41A0B28))(this);
	}
	template <typename T = bool> T IsBuffValid(uintptr_t buff) {
		return ((T (*)(UIBuffBar*, uintptr_t))(Il2CppBase() + 0x41A2198))(this, buff);
	}
	template <typename T = void> T LoadBuffList() {
		return ((T (*)(UIBuffBar*))(Il2CppBase() + 0x41A213C))(this);
	}
	template <typename T = void> T SaveBuffList() {
		return ((T (*)(UIBuffBar*))(Il2CppBase() + 0x41A1D1C))(this);
	}

};

}
