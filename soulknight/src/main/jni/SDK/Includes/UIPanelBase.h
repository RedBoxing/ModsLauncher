#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIPanelBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPanelBase"));
	}

	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIPanelBase*))(Il2CppBase() + 0x4230B54))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIPanelBase*))(Il2CppBase() + 0x4230BB0))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(UIPanelBase*))(Il2CppBase() + 0x4230C14))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(UIPanelBase*))(Il2CppBase() + 0x4230C7C))(this);
	}
	template <typename T = void> T AddEvent() {
		return ((T (*)(UIPanelBase*))(Il2CppBase() + 0x4230CE4))(this);
	}
	template <typename T = void> T RemoveEvent() {
		return ((T (*)(UIPanelBase*))(Il2CppBase() + 0x4230D40))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIPanelBase*))(Il2CppBase() + 0x4230D9C))(this);
	}

};

}
