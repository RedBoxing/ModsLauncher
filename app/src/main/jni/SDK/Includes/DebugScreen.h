#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DebugScreen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugScreen"));
	}

	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& mFrameCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& mLastFrameTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> static T& mLastFps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DebugScreen*))(Il2CppBase() + 0x42E0998))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DebugScreen*))(Il2CppBase() + 0x42E09F4))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(DebugScreen*))(Il2CppBase() + 0x42E0C18))(this);
	}
	template <typename T = void> T DrawFps() {
		return ((T (*)(DebugScreen*))(Il2CppBase() + 0x42E0C78))(this);
	}
	template <typename T = void> T UpdateTick() {
		return ((T (*)(DebugScreen*))(Il2CppBase() + 0x42E0A54))(this);
	}
	template <typename T = int64_t> static T TickToMilliSec(int64_t tick) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x42E0EFC))(0, tick);
	}

};

}
