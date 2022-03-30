#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffWaterShield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffWaterShield"));
	}

	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& armor() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& energy() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& damageDelta() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffWaterShield*))(Il2CppBase() + 0x45A3B14))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BuffWaterShield*))(Il2CppBase() + 0x45A3F40))(this);
	}
	template <typename T = void> T SetDamage(uintptr_t damageInfo) {
		return ((T (*)(BuffWaterShield*, uintptr_t))(Il2CppBase() + 0x45A3FA0))(this, damageInfo);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffWaterShield*))(Il2CppBase() + 0x45A4060))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetDamage(uintptr_t P0) {
		return ((T (*)(BuffWaterShield*, uintptr_t))(Il2CppBase() + 0x45A4068))(this, P0);
	}

};

}
