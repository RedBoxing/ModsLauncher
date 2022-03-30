#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IngameDebugConsole {

class DebugLogPopup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IngameDebugConsole", "DebugLogPopup"));
	}

	template <typename T = uintptr_t> T& popupTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& halfSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& backgroundImage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& canvasGroup() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& debugManager() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& newInfoCountText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& newWarningCountText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& newErrorCountText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& newInfoCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& newWarningCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& newErrorCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& normalColor() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& alertColorInfo() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& alertColorWarning() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& alertColorError() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& isPopupBeingDragged() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& moveToPosCoroutine() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DebugLogPopup*))(Il2CppBase() + 0x1A40D30))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DebugLogPopup*))(Il2CppBase() + 0x1A40E8C))(this);
	}
	template <typename T = void> T OnViewportDimensionsChanged() {
		return ((T (*)(DebugLogPopup*))(Il2CppBase() + 0x1A3E53C))(this);
	}
	template <typename T = void> T NewInfoLogArrived() {
		return ((T (*)(DebugLogPopup*))(Il2CppBase() + 0x1A3F008))(this);
	}
	template <typename T = void> T NewWarningLogArrived() {
		return ((T (*)(DebugLogPopup*))(Il2CppBase() + 0x1A3F12C))(this);
	}
	template <typename T = void> T NewErrorLogArrived() {
		return ((T (*)(DebugLogPopup*))(Il2CppBase() + 0x1A3F248))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DebugLogPopup*))(Il2CppBase() + 0x1A41228))(this);
	}
	template <typename T = uintptr_t> T MoveToPosAnimation(Il2CppVector3 targetPos) {
		return ((T (*)(DebugLogPopup*, Il2CppVector3))(Il2CppBase() + 0x1A4138C))(this, targetPos);
	}
	template <typename T = void> T OnPointerClick(uintptr_t data) {
		return ((T (*)(DebugLogPopup*, uintptr_t))(Il2CppBase() + 0x1A3DC08))(this, data);
	}
	template <typename T = void> T Show() {
		return ((T (*)(DebugLogPopup*))(Il2CppBase() + 0x1A3F57C))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(DebugLogPopup*))(Il2CppBase() + 0x1A414B8))(this);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t data) {
		return ((T (*)(DebugLogPopup*, uintptr_t))(Il2CppBase() + 0x1A41570))(this, data);
	}
	template <typename T = void> T OnDrag(uintptr_t data) {
		return ((T (*)(DebugLogPopup*, uintptr_t))(Il2CppBase() + 0x1A41600))(this, data);
	}
	template <typename T = void> T OnEndDrag(uintptr_t data) {
		return ((T (*)(DebugLogPopup*, uintptr_t))(Il2CppBase() + 0x1A40FC4))(this, data);
	}

};

}
