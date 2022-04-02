#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CommonDamageCarrierModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommonDamageCarrierModifier"));
	}

	template <typename T = bool> T& canEnlarge() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& carrier() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _modified() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CommonDamageCarrierModifier*))(Il2CppBase() + 0x4273DE0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CommonDamageCarrierModifier*))(Il2CppBase() + 0x4273E78))(this);
	}
	template <typename T = void> T Modify(int32_t damage, int32_t critic, float size) {
		return ((T (*)(CommonDamageCarrierModifier*, int32_t, int32_t, float))(Il2CppBase() + 0x4273ED8))(this, damage, critic, size);
	}
	template <typename T = bool> T get_largable() {
		return ((T (*)(CommonDamageCarrierModifier*))(Il2CppBase() + 0x4274138))(this);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(CommonDamageCarrierModifier*))(Il2CppBase() + 0x4274198))(this);
	}

};

}
