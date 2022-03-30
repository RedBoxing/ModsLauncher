#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DFMagicStone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DFMagicStone"));
	}

	template <typename T = uintptr_t> T& activateClip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& hpBar() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& hpBarWidth() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& isBroken() {
		return *(T*)((uintptr_t)this + 0xAD);
	}

	template <typename T = int32_t> T get_hp() {
		return ((T (*)(DFMagicStone*))(Il2CppBase() + 0x4288E0C))(this);
	}
	template <typename T = void> T set_hp(int32_t value) {
		return ((T (*)(DFMagicStone*, int32_t))(Il2CppBase() + 0x4288E90))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DFMagicStone*))(Il2CppBase() + 0x4288F28))(this);
	}
	template <typename T = void> T DelayAwake() {
		return ((T (*)(DFMagicStone*))(Il2CppBase() + 0x42891A8))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(DFMagicStone*, uintptr_t))(Il2CppBase() + 0x428920C))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(DFMagicStone*, uintptr_t))(Il2CppBase() + 0x4289710))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(DFMagicStone*, uintptr_t))(Il2CppBase() + 0x42897C4))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(DFMagicStone*, uintptr_t))(Il2CppBase() + 0x4289870))(this, controller);
	}
	template <typename T = void> T UpdateHpBar() {
		return ((T (*)(DFMagicStone*))(Il2CppBase() + 0x4289038))(this);
	}
	template <typename T = void> T MagicStoneBroken() {
		return ((T (*)(DFMagicStone*))(Il2CppBase() + 0x42894B8))(this);
	}
	template <typename T = uintptr_t> T GameFailAnim() {
		return ((T (*)(DFMagicStone*))(Il2CppBase() + 0x4289938))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(DFMagicStone*, uintptr_t))(Il2CppBase() + 0x4289A80))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(DFMagicStone*, uintptr_t))(Il2CppBase() + 0x4289A88))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(DFMagicStone*, uintptr_t))(Il2CppBase() + 0x4289A90))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(DFMagicStone*, uintptr_t))(Il2CppBase() + 0x4289A98))(this, P0);
	}

};

}
