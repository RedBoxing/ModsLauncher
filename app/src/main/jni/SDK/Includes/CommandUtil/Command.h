#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CommandUtil {

class Command
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CommandUtil", "Command"));
	}

	template <typename T = uintptr_t> T& todo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& todoWithTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T Update(float dt) {
		return ((T (*)(Command*, float))(Il2CppBase() + 0x4272D70))(this, dt);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(Command*))(Il2CppBase() + 0x4272E40))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(Command*))(Il2CppBase() + 0x4272E9C))(this);
	}
	template <typename T = uintptr_t> static T New(uintptr_t todo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4272EFC))(0, todo);
	}
	template <typename T = uintptr_t> static T New_1(void* func) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4272FB4))(0, func);
	}

};

}
