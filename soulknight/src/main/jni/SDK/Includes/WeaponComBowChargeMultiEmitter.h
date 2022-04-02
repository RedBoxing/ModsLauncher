#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComBowChargeMultiEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComBowChargeMultiEmitter"));
	}

	template <typename T = int32_t> T& emitSimultaneous() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& emitSimultaneousByCharge() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& angleStride() {
		return *(T*)((uintptr_t)this + 0x180);
	}

	template <typename T = void> T Emit() {
		return ((T (*)(WeaponComBowChargeMultiEmitter*))(Il2CppBase() + 0x2020378))(this);
	}
	template <typename T = void> T iFixBaseProxy_Emit() {
		return ((T (*)(WeaponComBowChargeMultiEmitter*))(Il2CppBase() + 0x20206E8))(this);
	}

};

}
