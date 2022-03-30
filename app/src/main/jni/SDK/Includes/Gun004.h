#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun004
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun004"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& has_delay() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& max_delay() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun004*))(Il2CppBase() + 0x461FFF4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun004*))(Il2CppBase() + 0x4620054))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(Gun004*))(Il2CppBase() + 0x46201A0))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(Gun004*))(Il2CppBase() + 0x4620300))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun004*))(Il2CppBase() + 0x462037C))(this);
	}

};

}
