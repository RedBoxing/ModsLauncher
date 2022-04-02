#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunAxeBoss27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunAxeBoss27"));
	}

	template <typename T = uintptr_t> T& summon_fire() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& summon_ice() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& summon_poison() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& shout1() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& shout2() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& shout3() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& hit_black() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& shout_clip() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = float> T& shock_delay() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = float> T& shock_start_delay() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = float> T& shock_center_y() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = float> T& shock_width() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& summon_distance() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = bool> T& fully_force() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = bool> T& half_force() {
		return *(T*)((uintptr_t)this + 0x241);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& loop_pos_left() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& loop_pos_right() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& hold_power() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& rg_random_sync() {
		return *(T*)((uintptr_t)this + 0x260);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_icons() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257BF40))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257C06C))(this);
	}
	template <typename T = void> T SyncRandomSeedToClient(int32_t clientNetId) {
		return ((T (*)(GunAxeBoss27*, int32_t))(Il2CppBase() + 0x257C300))(this, clientNetId);
	}
	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(GunAxeBoss27*, int32_t))(Il2CppBase() + 0x257C4B0))(this, seed);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(GunAxeBoss27*, int32_t))(Il2CppBase() + 0x257C580))(this, seed);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257C5F0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257CA40))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257CCBC))(this);
	}
	template <typename T = void> T HoldMax() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257CD28))(this);
	}
	template <typename T = void> T CreateShout() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257CE18))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257D0AC))(this);
	}
	template <typename T = uintptr_t> T CreateShock(uintptr_t shock_info) {
		return ((T (*)(GunAxeBoss27*, uintptr_t))(Il2CppBase() + 0x257DA90))(this, shock_info);
	}
	template <typename T = void> T AttackEnd() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257DBA4))(this);
	}
	template <typename T = void> T CreateSummon() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257D374))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_icons() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257DC98))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257DCA0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257DCA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257DCAC))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257DCB4))(this);
	}
	template <typename T = void> T iFixBaseProxy_HoldMax() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257DCBC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAtk() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257DCC4))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackEnd() {
		return ((T (*)(GunAxeBoss27*))(Il2CppBase() + 0x257DCC8))(this);
	}

};

}
