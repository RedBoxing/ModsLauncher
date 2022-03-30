#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunGhost
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunGhost"));
	}

	template <typename T = float> T& scale_min() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& scale_max() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}

	template <typename T = void> T CreateBullet(int32_t i) {
		return ((T (*)(GunGhost*, int32_t))(Il2CppBase() + 0x2497B10))(this, i);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunGhost*))(Il2CppBase() + 0x2497D34))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunGhost*, int32_t))(Il2CppBase() + 0x2497DE4))(this, target_layer);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(GunGhost*))(Il2CppBase() + 0x2497ED4))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateBullet(int32_t P0) {
		return ((T (*)(GunGhost*, int32_t))(Il2CppBase() + 0x2497FA8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunGhost*))(Il2CppBase() + 0x2497FB0))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunGhost*, int32_t))(Il2CppBase() + 0x2497FB8))(this, P0);
	}

};

}
