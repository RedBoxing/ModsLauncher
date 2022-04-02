#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunAxeBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunAxeBullet"));
	}

	template <typename T = float> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}

	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunAxeBullet*))(Il2CppBase() + 0x257E438))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunAxeBullet*))(Il2CppBase() + 0x257E624))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack2() {
		return ((T (*)(GunAxeBullet*))(Il2CppBase() + 0x257E72C))(this);
	}

};

}
