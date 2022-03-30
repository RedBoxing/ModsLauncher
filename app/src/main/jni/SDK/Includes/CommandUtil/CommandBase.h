#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CommandUtil {

class CommandBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CommandUtil", "CommandBase"));
	}

	template <typename T = int32_t> T& tag() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T setTag(int32_t tag) {
		return ((T (*)(CommandBase*, int32_t))(Il2CppBase() + 0x427306C))(this, tag);
	}
	template <typename T = int32_t> T getTag() {
		return ((T (*)(CommandBase*))(Il2CppBase() + 0x42730E0))(this);
	}

};

}
