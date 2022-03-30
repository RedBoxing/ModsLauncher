#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun004Rainbow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun004Rainbow"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& bullets() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& tempCount() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun004Rainbow*))(Il2CppBase() + 0x4620384))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun004Rainbow*))(Il2CppBase() + 0x46203E4))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(Gun004Rainbow*))(Il2CppBase() + 0x4620508))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(Gun004Rainbow*))(Il2CppBase() + 0x462072C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun004Rainbow*))(Il2CppBase() + 0x462079C))(this);
	}

};

}
