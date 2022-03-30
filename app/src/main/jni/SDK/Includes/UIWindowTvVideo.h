#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowTvVideo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowTvVideo"));
	}

	template <typename T = uintptr_t> T& switchAudio() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& startConfig() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& imNoSignal() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& imVideos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& videoPlayer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& tgChannelProto() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& trRemoteController() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& txTitle() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& txAuthor() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& txChannel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& showingConfig() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = bool> T get_pauseWhenShow() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C3B20))(this);
	}
	template <typename T = Il2CppVector2> T get_showPosition() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C3B80))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C3C04))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C4104))(this);
	}
	template <typename T = uintptr_t> static T ShowWindow(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45C4640))(0, parent);
	}
	template <typename T = void> T OnVideoShow() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C485C))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C4164))(this);
	}
	template <typename T = void> T OnSelectChannel(uintptr_t config, int32_t index) {
		return ((T (*)(UIWindowTvVideo*, uintptr_t, int32_t))(Il2CppBase() + 0x45C48FC))(this, config, index);
	}
	template <typename T = void> T OnClickTv() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C4C3C))(this);
	}
	template <typename T = void> T CloseAnim() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C4CD4))(this);
	}
	template <typename T = void> T Awakeb__14_0(uintptr_t source) {
		return ((T (*)(UIWindowTvVideo*, uintptr_t))(Il2CppBase() + 0x45C4DEC))(this, source);
	}
	template <typename T = bool> T iFixBaseProxy_get_pauseWhenShow() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C4E44))(this);
	}
	template <typename T = Il2CppVector2> T iFixBaseProxy_get_showPosition() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C4E4C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C4E54))(this);
	}
	template <typename T = void> T iFixBaseProxy_CloseAnim() {
		return ((T (*)(UIWindowTvVideo*))(Il2CppBase() + 0x45C4E5C))(this);
	}

};

}
