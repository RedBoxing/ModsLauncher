#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffStatue03
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffStatue03"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& player_parent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& speed_factor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffStatue03*))(Il2CppBase() + 0x45A1BA4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BuffStatue03*))(Il2CppBase() + 0x45A1CB8))(this);
	}
	template <typename T = void> T UseSkill() {
		return ((T (*)(BuffStatue03*))(Il2CppBase() + 0x45A1D60))(this);
	}
	template <typename T = uintptr_t> T UsingSkill(int32_t castTimes) {
		return ((T (*)(BuffStatue03*, int32_t))(Il2CppBase() + 0x45A1E44))(this, castTimes);
	}
	template <typename T = void> T iFixBaseProxy_UseSkill() {
		return ((T (*)(BuffStatue03*))(Il2CppBase() + 0x45A1F60))(this);
	}

};

}
