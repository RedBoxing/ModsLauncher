#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemCreator"));
	}

	template <typename T = uintptr_t> T& proto() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& minCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& multiPlayerFactor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& radius() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& angle_offset() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ItemCreator*))(Il2CppBase() + 0x1D95494))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemCreator*, int32_t))(Il2CppBase() + 0x1D954F0))(this, seed);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemCreator*, int32_t))(Il2CppBase() + 0x1D95944))(this, P0);
	}

};

}
