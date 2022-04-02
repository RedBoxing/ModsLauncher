#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TargetPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetPoint"));
	}

	template <typename T = uintptr_t> T& target_line() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& line_renderer() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TargetPoint*))(Il2CppBase() + 0x43B5B74))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(TargetPoint*))(Il2CppBase() + 0x43B5C74))(this);
	}

};

}
