#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogHelper"));
	}

	template <typename T = float> static T& openBusyDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& closeBusyDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _enabled() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& _busyTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _busyTimerRunning() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& drawWindowDelegate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& drawWindowFunction() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& windowProperties() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& currentActionId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& resultCallback() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = float> T get_busyTimer() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x2062220))(this);
	}
	template <typename T = bool> T get_enabled() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x2057C78))(this);
	}
	template <typename T = void> T set_enabled(bool value) {
		return ((T (*)(DialogHelper*, bool))(Il2CppBase() + 0x20622A8))(this, value);
	}
	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x20623C8))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(DialogHelper*, uintptr_t))(Il2CppBase() + 0x2062438))(this, value);
	}
	template <typename T = bool> T get_busy() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x205D560))(this);
	}
	template <typename T = void> T StartModal(int32_t queueActionId, uintptr_t type, uintptr_t windowProperties, void* resultCallback) {
		return ((T (*)(DialogHelper*, int32_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x205FEDC))(this, queueActionId, type, windowProperties, resultCallback);
	}
	template <typename T = void> T StartModal_1(int32_t queueActionId, uintptr_t type, uintptr_t windowProperties, void* resultCallback, float openBusyDelay) {
		return ((T (*)(DialogHelper*, int32_t, uintptr_t, uintptr_t, void*, float))(Il2CppBase() + 0x2060CD8))(this, queueActionId, type, windowProperties, resultCallback, openBusyDelay);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x205CCA8))(this);
	}
	template <typename T = void> T Draw() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x20624D4))(this);
	}
	template <typename T = void> T DrawConfirmButton() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x20626E0))(this);
	}
	template <typename T = void> T DrawConfirmButton_1(Il2CppString* title) {
		return ((T (*)(DialogHelper*, Il2CppString*))(Il2CppBase() + 0x205CE6C))(this, title);
	}
	template <typename T = void> T DrawConfirmButton_2(uintptr_t response) {
		return ((T (*)(DialogHelper*, uintptr_t))(Il2CppBase() + 0x2062838))(this, response);
	}
	template <typename T = void> T DrawConfirmButton_3(uintptr_t response, Il2CppString* title) {
		return ((T (*)(DialogHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x205D80C))(this, response, title);
	}
	template <typename T = void> T DrawCancelButton() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x205CFE4))(this);
	}
	template <typename T = void> T DrawCancelButton_1(Il2CppString* title) {
		return ((T (*)(DialogHelper*, Il2CppString*))(Il2CppBase() + 0x205DD14))(this, title);
	}
	template <typename T = void> T Confirm() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x205D5C8))(this);
	}
	template <typename T = void> T Confirm_1(uintptr_t response) {
		return ((T (*)(DialogHelper*, uintptr_t))(Il2CppBase() + 0x2062770))(this, response);
	}
	template <typename T = void> T Cancel() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x205D4A0))(this);
	}
	template <typename T = void> T DrawWindow(int32_t windowId) {
		return ((T (*)(DialogHelper*, int32_t))(Il2CppBase() + 0x2062950))(this, windowId);
	}
	template <typename T = void> T UpdateTimers() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x2062668))(this);
	}
	template <typename T = void> T StartBusyTimer(float time) {
		return ((T (*)(DialogHelper*, float))(Il2CppBase() + 0x2062A10))(this, time);
	}
	template <typename T = void> T Close() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x20628E0))(this);
	}
	template <typename T = void> T StateChanged(float delay) {
		return ((T (*)(DialogHelper*, float))(Il2CppBase() + 0x2062350))(this, delay);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x2062A98))(this);
	}
	template <typename T = void> T ResetTimers() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x2062B08))(this);
	}
	template <typename T = void> T FullReset() {
		return ((T (*)(DialogHelper*))(Il2CppBase() + 0x2060F30))(this);
	}

};

}
