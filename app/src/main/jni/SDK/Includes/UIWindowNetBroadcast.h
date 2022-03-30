#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowNetBroadcast
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowNetBroadcast"));
	}

	template <typename T = Il2CppString*> static T& PrefabName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& Shown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowNetBroadcast*))(Il2CppBase() + 0x44B99F0))(this);
	}
	template <typename T = void> static T TryShowWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x44B9B1C))(0);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(UIWindowNetBroadcast*))(Il2CppBase() + 0x44B9F60))(this);
	}

};

}
