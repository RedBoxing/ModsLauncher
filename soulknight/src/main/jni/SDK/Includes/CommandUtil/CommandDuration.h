#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CommandUtil {

class CommandDuration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CommandUtil", "CommandDuration"));
	}

	template <typename T = void*> T& todoWithProgress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _t() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T Update(float dt) {
		return ((T (*)(CommandDuration*, float))(Il2CppBase() + 0x4273140))(this, dt);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(CommandDuration*))(Il2CppBase() + 0x427323C))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(CommandDuration*))(Il2CppBase() + 0x42732A0))(this);
	}
	template <typename T = uintptr_t> static T Delay(float d) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4273308))(0, d);
	}
	template <typename T = uintptr_t> static T Progress(float d, void* progress) {
		return ((T (*)(void *, float, void*))(Il2CppBase() + 0x42733CC))(0, d, progress);
	}

};

}
