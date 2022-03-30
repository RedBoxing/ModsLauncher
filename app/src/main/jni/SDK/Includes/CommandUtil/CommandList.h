#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CommandUtil {

class CommandList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CommandUtil", "CommandList"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& commands() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& concurrently() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T Add(uintptr_t cmd) {
		return ((T (*)(CommandList*, uintptr_t))(Il2CppBase() + 0x4272920))(this, cmd);
	}
	template <typename T = void> T PutAtTop(uintptr_t cmd) {
		return ((T (*)(CommandList*, uintptr_t))(Il2CppBase() + 0x42734A8))(this, cmd);
	}
	template <typename T = void> T Kill(int32_t tag) {
		return ((T (*)(CommandList*, int32_t))(Il2CppBase() + 0x4273564))(this, tag);
	}
	template <typename T = bool> T Update(float dt) {
		return ((T (*)(CommandList*, float))(Il2CppBase() + 0x4272A70))(this, dt);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(CommandList*))(Il2CppBase() + 0x4273780))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(CommandList*))(Il2CppBase() + 0x427382C))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(CommandList*))(Il2CppBase() + 0x42738CC))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(CommandList*))(Il2CppBase() + 0x427396C))(this);
	}

};

}
