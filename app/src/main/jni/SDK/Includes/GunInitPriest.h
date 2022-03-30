#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitPriest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitPriest"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& atk_single_add() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& null_offset() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunInitPriest*))(Il2CppBase() + 0x2272814))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunInitPriest*))(Il2CppBase() + 0x2272874))(this);
	}
	template <typename T = void> T CreateBullet(uintptr_t target, Il2CppVector3 position, int32_t atk, bool should_follow) {
		return ((T (*)(GunInitPriest*, uintptr_t, Il2CppVector3, int32_t, bool))(Il2CppBase() + 0x2273224))(this, target, position, atk, should_follow);
	}
	template <typename T = void*> T GetAttackTarget() {
		return ((T (*)(GunInitPriest*))(Il2CppBase() + 0x2272CCC))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunInitPriest*))(Il2CppBase() + 0x22735C4))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunInitPriest*))(Il2CppBase() + 0x2273674))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunInitPriest*, int32_t))(Il2CppBase() + 0x2273724))(this, target_layer);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunInitPriest*))(Il2CppBase() + 0x22737EC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunInitPriest*))(Il2CppBase() + 0x2273B00))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunInitPriest*))(Il2CppBase() + 0x2273B08))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunInitPriest*))(Il2CppBase() + 0x2273B10))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunInitPriest*, int32_t))(Il2CppBase() + 0x2273B18))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunInitPriest*))(Il2CppBase() + 0x2273B20))(this);
	}

};

}
