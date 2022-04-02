#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DynamicConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicConfig"));
	}

	template <typename T = int32_t> T& broadcastVersion() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& hasBroadcast() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& broadcastTitle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& broadcastMsg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& broadcastUrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& hasImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& showHireRoom() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _config() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_config() {
		return ((T (*)(void *))(Il2CppBase() + 0x42F032C))(0);
	}
	template <typename T = Il2CppString*> static T get_ServerPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x42F0538))(0);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x42F05BC))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x42F0458))(0);
	}
	template <typename T = void> static T RequestConfigFromNet() {
		return ((T (*)(void *))(Il2CppBase() + 0x42F068C))(0);
	}
	template <typename T = void> static T SetConfig(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42F07BC))(0, config);
	}
	template <typename T = void> T OnLoad() {
		return ((T (*)(DynamicConfig*))(Il2CppBase() + 0x42F0868))(this);
	}
	template <typename T = int32_t> static T get_BroadcastVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x42F08C4))(0);
	}
	template <typename T = void> static T set_BroadcastVersion(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42F0950))(0, value);
	}

};

}
