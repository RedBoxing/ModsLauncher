#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Bullet04
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Bullet04"));
	}

	template <typename T = float> T& rate() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& this_time() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& speed_value() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& min_speed() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& max_speed() {
		return *(T*)((uintptr_t)this + 0x114);
	}

	template <typename T = void> T FixedUpdate() {
		return ((T (*)(Bullet04*))(Il2CppBase() + 0x45A5CA0))(this);
	}

};

}
