#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemDrinkBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemDrinkBuff"));
	}

	template <typename T = uintptr_t> T& buffType() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemDrinkBuff*, int32_t))(Il2CppBase() + 0x1DA0AE8))(this, seed);
	}
	template <typename T = void> T DrinkEffect() {
		return ((T (*)(ItemDrinkBuff*))(Il2CppBase() + 0x1DA0CD0))(this);
	}
	template <typename T = void> T ShowDrinkEffect(uintptr_t controller) {
		return ((T (*)(ItemDrinkBuff*, uintptr_t))(Il2CppBase() + 0x1DA0EFC))(this, controller);
	}
	template <typename T = uintptr_t> T GetValidBuffIndex() {
		return ((T (*)(ItemDrinkBuff*))(Il2CppBase() + 0x1DA0B80))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemDrinkBuff*, int32_t))(Il2CppBase() + 0x1DA10C0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_DrinkEffect() {
		return ((T (*)(ItemDrinkBuff*))(Il2CppBase() + 0x1DA10C8))(this);
	}

};

}
