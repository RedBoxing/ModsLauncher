#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowFPS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowFPS"));
	}

	template <typename T = float> T& m_LastUpdateShowTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_UpdateShowDeltaTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_FrameUpdate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_FPS() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& fontStyle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& needShow() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ShowFPS*))(Il2CppBase() + 0x182D94C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ShowFPS*))(Il2CppBase() + 0x182DA30))(this);
	}
	template <typename T = void> T SwitchShowFPS(uintptr_t e) {
		return ((T (*)(ShowFPS*, uintptr_t))(Il2CppBase() + 0x182DB14))(this, e);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ShowFPS*))(Il2CppBase() + 0x182DBC8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ShowFPS*))(Il2CppBase() + 0x182DDAC))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(ShowFPS*))(Il2CppBase() + 0x182DE68))(this);
	}
	template <typename T = void> T SwitchShowFPS_1() {
		return ((T (*)(ShowFPS*))(Il2CppBase() + 0x182DFA8))(this);
	}

};

}
