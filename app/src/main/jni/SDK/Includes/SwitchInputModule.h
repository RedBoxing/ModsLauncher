#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwitchInputModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwitchInputModule"));
	}

	template <typename T = float> T& m_InputActionsPerSecond() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_RepeatDelay() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_ConsecutiveMoveCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector2> T& m_LastMoveVector() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_NextActionTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_PrevActionTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_InputPointerEvent() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Process() {
		return ((T (*)(SwitchInputModule*))(Il2CppBase() + 0x18C0118))(this);
	}

};

}
