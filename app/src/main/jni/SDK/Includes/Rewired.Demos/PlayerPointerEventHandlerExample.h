#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class PlayerPointerEventHandlerExample
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "PlayerPointerEventHandlerExample"));
	}

	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& logLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& log() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Log(Il2CppString* o) {
		return ((T (*)(PlayerPointerEventHandlerExample*, Il2CppString*))(Il2CppBase() + 0x267C930))(this, o);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayerPointerEventHandlerExample*))(Il2CppBase() + 0x267CA4C))(this);
	}
	template <typename T = void> T OnPointerEnter(uintptr_t eventData) {
		return ((T (*)(PlayerPointerEventHandlerExample*, uintptr_t))(Il2CppBase() + 0x267CC58))(this, eventData);
	}
	template <typename T = void> T OnPointerExit(uintptr_t eventData) {
		return ((T (*)(PlayerPointerEventHandlerExample*, uintptr_t))(Il2CppBase() + 0x267D0B0))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(PlayerPointerEventHandlerExample*, uintptr_t))(Il2CppBase() + 0x267D3D4))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(PlayerPointerEventHandlerExample*, uintptr_t))(Il2CppBase() + 0x267D7C0))(this, eventData);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(PlayerPointerEventHandlerExample*, uintptr_t))(Il2CppBase() + 0x267DBA4))(this, eventData);
	}
	template <typename T = void> T OnScroll(uintptr_t eventData) {
		return ((T (*)(PlayerPointerEventHandlerExample*, uintptr_t))(Il2CppBase() + 0x267DF88))(this, eventData);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(PlayerPointerEventHandlerExample*, uintptr_t))(Il2CppBase() + 0x267E2AC))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(PlayerPointerEventHandlerExample*, uintptr_t))(Il2CppBase() + 0x267E690))(this, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(PlayerPointerEventHandlerExample*, uintptr_t))(Il2CppBase() + 0x267EA74))(this, eventData);
	}
	template <typename T = Il2CppString*> static T GetSourceName(uintptr_t playerEventData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x267CF8C))(0, playerEventData);
	}

};

}
