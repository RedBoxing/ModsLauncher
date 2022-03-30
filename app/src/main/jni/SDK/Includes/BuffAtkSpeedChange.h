#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffAtkSpeedChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffAtkSpeedChange"));
	}

	template <typename T = int32_t> T& change_val() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffAtkSpeedChange*))(Il2CppBase() + 0x20A467C))(this);
	}
	template <typename T = void> T ChangeAtkSpeed() {
		return ((T (*)(BuffAtkSpeedChange*))(Il2CppBase() + 0x20A478C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffAtkSpeedChange*))(Il2CppBase() + 0x20A490C))(this);
	}

};

}
