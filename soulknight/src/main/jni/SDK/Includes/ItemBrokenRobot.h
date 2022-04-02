#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemBrokenRobot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemBrokenRobot"));
	}

	template <typename T = uintptr_t> T& tap() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& robot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& elec_sheep() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemBrokenRobot*))(Il2CppBase() + 0x1A5388C))(this);
	}
	template <typename T = bool> T get_isEngineer() {
		return ((T (*)(ItemBrokenRobot*))(Il2CppBase() + 0x1A53CCC))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemBrokenRobot*, uintptr_t))(Il2CppBase() + 0x1A53DAC))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemBrokenRobot*, uintptr_t))(Il2CppBase() + 0x1A53E3C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemBrokenRobot*, uintptr_t))(Il2CppBase() + 0x1A54684))(this, controller);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemBrokenRobot*, uintptr_t))(Il2CppBase() + 0x1A547B8))(this, other);
	}
	template <typename T = void> T CreateHelloWorldTalk() {
		return ((T (*)(ItemBrokenRobot*))(Il2CppBase() + 0x1A54854))(this);
	}
	template <typename T = void> T ShowTalkItem() {
		return ((T (*)(ItemBrokenRobot*))(Il2CppBase() + 0x1A54AA8))(this);
	}
	template <typename T = void> T EnableTalk(bool enable) {
		return ((T (*)(ItemBrokenRobot*, bool))(Il2CppBase() + 0x1A54534))(this, enable);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemBrokenRobot*, uintptr_t))(Il2CppBase() + 0x1A54B74))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemBrokenRobot*, uintptr_t))(Il2CppBase() + 0x1A54B7C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemBrokenRobot*, uintptr_t))(Il2CppBase() + 0x1A54B84))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemBrokenRobot*, uintptr_t))(Il2CppBase() + 0x1A54B8C))(this, P0);
	}

};

}
