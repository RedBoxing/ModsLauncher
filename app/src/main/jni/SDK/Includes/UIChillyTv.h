#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIChillyTv
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIChillyTv"));
	}

	template <typename T = uintptr_t> T& switchAudio() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& startConfig() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& tgChannelProto() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& trRemoteController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& txTitle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& txAuthor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& showingConfig() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = bool> T get_pauseWhenShow() {
		return ((T (*)(UIChillyTv*))(Il2CppBase() + 0x41B4410))(this);
	}
	template <typename T = Il2CppVector2> T get_showPosition() {
		return ((T (*)(UIChillyTv*))(Il2CppBase() + 0x41B4470))(this);
	}
	template <typename T = bool> static T get_HasTvConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B44F4))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIChillyTv*))(Il2CppBase() + 0x41B4638))(this);
	}
	template <typename T = uintptr_t> static T ShowWindow(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41B48D4))(0, parent);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIChillyTv*))(Il2CppBase() + 0x41B4AB0))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIChillyTv*))(Il2CppBase() + 0x41B4B10))(this);
	}
	template <typename T = void> T OnSelectChannel(uintptr_t config) {
		return ((T (*)(UIChillyTv*, uintptr_t))(Il2CppBase() + 0x41B4FF4))(this, config);
	}
	template <typename T = void> T LoadUrl(uintptr_t configItem) {
		return ((T (*)(UIChillyTv*, uintptr_t))(Il2CppBase() + 0x41B5218))(this, configItem);
	}
	template <typename T = void> static T StatisticShow(uintptr_t configItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41B5288))(0, configItem);
	}
	template <typename T = bool> static T get_IsChannelValid() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B45E0))(0);
	}
	template <typename T = void> T CloseAnim() {
		return ((T (*)(UIChillyTv*))(Il2CppBase() + 0x41B5458))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_pauseWhenShow() {
		return ((T (*)(UIChillyTv*))(Il2CppBase() + 0x41B5570))(this);
	}
	template <typename T = Il2CppVector2> T iFixBaseProxy_get_showPosition() {
		return ((T (*)(UIChillyTv*))(Il2CppBase() + 0x41B5578))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(UIChillyTv*))(Il2CppBase() + 0x41B5580))(this);
	}
	template <typename T = void> T iFixBaseProxy_CloseAnim() {
		return ((T (*)(UIChillyTv*))(Il2CppBase() + 0x41B5588))(this);
	}

};

}
