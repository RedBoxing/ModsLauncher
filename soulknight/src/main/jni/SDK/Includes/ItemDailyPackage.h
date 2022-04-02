#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemDailyPackage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemDailyPackage"));
	}

	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& openObject() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& closeObject() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& _offset() {
		return *(T*)((uintptr_t)this + 0xB4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ItemDailyPackage*))(Il2CppBase() + 0x1D9594C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemDailyPackage*, uintptr_t))(Il2CppBase() + 0x1D95C00))(this, other);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemDailyPackage*, int32_t))(Il2CppBase() + 0x1D95EFC))(this, seed);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemDailyPackage*, uintptr_t))(Il2CppBase() + 0x1D9629C))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemDailyPackage*))(Il2CppBase() + 0x1D967D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemDailyPackage*, uintptr_t))(Il2CppBase() + 0x1D967E0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemDailyPackage*, int32_t))(Il2CppBase() + 0x1D967E8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemDailyPackage*, uintptr_t))(Il2CppBase() + 0x1D967F0))(this, P0);
	}

};

}
