#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UiNavigationManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UiNavigationManager"));
	}

	template <typename T = uintptr_t> T& eventSystem() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& standaloneInputModule() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& switchInputModule() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& highlight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& targetSync() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector2> T& highlightSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& heightlightSizeScene() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& lastSelect() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& currentSelect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& currentSelectEventSystem() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& currentSelectType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& currentScrollRect() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector2> T& scrollNormalizedPosition() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector2> T& verticalRange() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector2> T& horizontalRange() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& scrollSpeed() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& selectAudioClip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& immediate() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& highlightInfo() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& loopTweener() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& anchorPosTweener() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& sizeDeltaTweener() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& lastSelectable() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = uintptr_t> T get_GetEventSystem() {
		return ((T (*)(UiNavigationManager*))(Il2CppBase() + 0x462B488))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UiNavigationManager*))(Il2CppBase() + 0x462B580))(this);
	}
	template <typename T = uintptr_t> T MoveHighlight() {
		return ((T (*)(UiNavigationManager*))(Il2CppBase() + 0x462B6C0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UiNavigationManager*))(Il2CppBase() + 0x462B7A0))(this);
	}
	template <typename T = uintptr_t> T SyncCurrent() {
		return ((T (*)(UiNavigationManager*))(Il2CppBase() + 0x462B7FC))(this);
	}
	template <typename T = bool> T IsImmediate() {
		return ((T (*)(UiNavigationManager*))(Il2CppBase() + 0x462B8DC))(this);
	}

};

}
