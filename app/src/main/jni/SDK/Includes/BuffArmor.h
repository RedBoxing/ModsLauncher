#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffArmor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffArmor"));
	}

	template <typename T = int32_t> T& restoreValue() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffArmor*))(Il2CppBase() + 0x20A3D20))(this);
	}
	template <typename T = void> T GetArmor() {
		return ((T (*)(BuffArmor*))(Il2CppBase() + 0x20A3E30))(this);
	}
	template <typename T = void> T SetBuffTime(float duration) {
		return ((T (*)(BuffArmor*, float))(Il2CppBase() + 0x20A402C))(this, duration);
	}
	template <typename T = void> T AddBuffTime(float deltaDuration) {
		return ((T (*)(BuffArmor*, float))(Il2CppBase() + 0x20A4108))(this, deltaDuration);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffArmor*))(Il2CppBase() + 0x20A41FC))(this);
	}

};

}
