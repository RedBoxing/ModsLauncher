#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DebugConsole
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugConsole"));
	}

	template <typename T = uintptr_t> T& DebugGui() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& defaultGuiPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& defaultGuiScale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& normal() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& warning() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& error() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& maxMessages() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& lineSpacing() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& messages() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& guis() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& colors() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& draggable() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& visible() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = bool> T& pixelCorrect() {
		return *(T*)((uintptr_t)this + 0x8A);
	}
	template <typename T = uintptr_t> static T& s_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& guisCreated() {
		return *(T*)((uintptr_t)this + 0x8B);
	}
	template <typename T = float> T& screenHeight() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& connectedToMouse() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = bool> static T get_isVisible() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DE3D8))(0);
	}
	template <typename T = void> static T set_isVisible(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x42DE7BC))(0, value);
	}
	template <typename T = bool> static T get_isDraggable() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DF008))(0);
	}
	template <typename T = void> static T set_isDraggable(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x42DF0B4))(0, value);
	}
	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DE484))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DebugConsole*))(Il2CppBase() + 0x42DF88C))(this);
	}
	template <typename T = void> T InitGuis() {
		return ((T (*)(DebugConsole*))(Il2CppBase() + 0x42DF16C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DebugConsole*))(Il2CppBase() + 0x42DF93C))(this);
	}
	template <typename T = void> static T Log(Il2CppString* message, Il2CppString* color) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42DFBB0))(0, message, color);
	}
	template <typename T = void> static T Log_1(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42DFD4C))(0, message);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x42DFEF4))(0);
	}
	template <typename T = void> T AddMessage(Il2CppString* message, Il2CppString* color) {
		return ((T (*)(DebugConsole*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42DFC80))(this, message, color);
	}
	template <typename T = void> T AddMessage_1(Il2CppString* message) {
		return ((T (*)(DebugConsole*, Il2CppString*))(Il2CppBase() + 0x42DFE04))(this, message);
	}
	template <typename T = void> T ClearMessages() {
		return ((T (*)(DebugConsole*))(Il2CppBase() + 0x42DFFA0))(this);
	}
	template <typename T = void> T ClearScreen() {
		return ((T (*)(DebugConsole*))(Il2CppBase() + 0x42DEDD4))(this);
	}
	template <typename T = void> T Prune() {
		return ((T (*)(DebugConsole*))(Il2CppBase() + 0x42E0048))(this);
	}
	template <typename T = void> T Display() {
		return ((T (*)(DebugConsole*))(Il2CppBase() + 0x42DE8E4))(this);
	}

};

}
