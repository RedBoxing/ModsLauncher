#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunHarmmerExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunHarmmerExplode"));
	}

	template <typename T = float> T& boom_time() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_boom_positions() {
		return ((T (*)(GunHarmmerExplode*))(Il2CppBase() + 0x249E860))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunHarmmerExplode*))(Il2CppBase() + 0x249EC00))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateBullet() {
		return ((T (*)(GunHarmmerExplode*))(Il2CppBase() + 0x249EFD8))(this);
	}

};

}
