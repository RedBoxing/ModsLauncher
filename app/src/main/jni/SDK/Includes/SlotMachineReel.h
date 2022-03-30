#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SlotMachineReel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotMachineReel"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& iconList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_bottomPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_curState() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_moveSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> static T& ICON_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_target() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_targetIcon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& slowRate() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> static T& THRESHOLD_SPEED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& thresholdSpeedVal() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = bool> T get_IsStop() {
		return ((T (*)(SlotMachineReel*))(Il2CppBase() + 0x4291624))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SlotMachineReel*))(Il2CppBase() + 0x429168C))(this);
	}
	template <typename T = void> T RollStart(float moveSpeed) {
		return ((T (*)(SlotMachineReel*, float))(Il2CppBase() + 0x4291734))(this, moveSpeed);
	}
	template <typename T = void> T RollToTargetIcon(uintptr_t target) {
		return ((T (*)(SlotMachineReel*, uintptr_t))(Il2CppBase() + 0x42917B8))(this, target);
	}
	template <typename T = void> T RollStop() {
		return ((T (*)(SlotMachineReel*))(Il2CppBase() + 0x42919D4))(this);
	}
	template <typename T = uintptr_t> T FindTargeticon(uintptr_t target) {
		return ((T (*)(SlotMachineReel*, uintptr_t))(Il2CppBase() + 0x4291858))(this, target);
	}
	template <typename T = void> T UpdateReel(float moveSpeed) {
		return ((T (*)(SlotMachineReel*, float))(Il2CppBase() + 0x4291A3C))(this, moveSpeed);
	}
	template <typename T = void> T CheckEdgeUpdatePos() {
		return ((T (*)(SlotMachineReel*))(Il2CppBase() + 0x4291DEC))(this);
	}
	template <typename T = void> T MoveBy(float deltaY) {
		return ((T (*)(SlotMachineReel*, float))(Il2CppBase() + 0x4292178))(this, deltaY);
	}
	template <typename T = void> T MoveIcon(float moveSpeed) {
		return ((T (*)(SlotMachineReel*, float))(Il2CppBase() + 0x4291AEC))(this, moveSpeed);
	}
	template <typename T = float> T HeightestIconPos() {
		return ((T (*)(SlotMachineReel*))(Il2CppBase() + 0x4291FA0))(this);
	}
	template <typename T = void> T MoveToTargetIcon() {
		return ((T (*)(SlotMachineReel*))(Il2CppBase() + 0x4291B74))(this);
	}

};

}
