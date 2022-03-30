#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired {

class InputManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired", "InputManager"));
	}

	template <typename T = bool> T& ignoreRecompile() {
		return *(T*)((uintptr_t)this + 0x4E);
	}

	template <typename T = void> T OnInitialized() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x268D228))(this);
	}
	template <typename T = void> T OnDeinitialized() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x268D34C))(this);
	}
	template <typename T = void> T DetectPlatform() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x268D468))(this);
	}
	template <typename T = void> T CheckRecompile() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x268D6FC))(this);
	}
	template <typename T = uintptr_t> T GetExternalTools() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x268D758))(this);
	}
	template <typename T = bool> T CheckDeviceName(Il2CppString* searchPattern, Il2CppString* deviceName, Il2CppString* deviceModel) {
		return ((T (*)(InputManager*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x268D5D4))(this, searchPattern, deviceName, deviceModel);
	}
	template <typename T = void> T SubscribeEvents() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x268D288))(this);
	}
	template <typename T = void> T UnsubscribeEvents() {
		return ((T (*)(InputManager*))(Il2CppBase() + 0x268D3AC))(this);
	}
	template <typename T = void> T OnSceneLoaded(uintptr_t scene, uintptr_t mode) {
		return ((T (*)(InputManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x268D7F8))(this, scene, mode);
	}

};

}
