#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NextLevel {

class NextLevelCtrl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NextLevel", "NextLevelCtrl"));
	}

	template <typename T = uintptr_t> T& playerInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& branchIdx() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isSpecial() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& COUNT_DOWN_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& restTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& countCoroutine() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _inst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& UseCtrl() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isUseCtrl() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& gotoNextLevel() {
		return *(T*)((uintptr_t)this + 0x49);
	}

	template <typename T = uintptr_t> T get_UseCtrl() {
		return ((T (*)(NextLevelCtrl*))(Il2CppBase() + 0x4522628))(this);
	}
	template <typename T = void> T set_UseCtrl(uintptr_t value) {
		return ((T (*)(NextLevelCtrl*, uintptr_t))(Il2CppBase() + 0x4522630))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NextLevelCtrl*))(Il2CppBase() + 0x4522638))(this);
	}
	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x45226E4))(0);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(NextLevelCtrl*))(Il2CppBase() + 0x4522770))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(NextLevelCtrl*))(Il2CppBase() + 0x452289C))(this);
	}
	template <typename T = void> T StartCountDown(bool isSpecial, Il2CppString* branchIdx, bool isUseCtrl) {
		return ((T (*)(NextLevelCtrl*, bool, Il2CppString*, bool))(Il2CppBase() + 0x45229C8))(this, isSpecial, branchIdx, isUseCtrl);
	}
	template <typename T = void> T StopCountDown() {
		return ((T (*)(NextLevelCtrl*))(Il2CppBase() + 0x45232CC))(this);
	}
	template <typename T = uintptr_t> T CountDown() {
		return ((T (*)(NextLevelCtrl*))(Il2CppBase() + 0x4523218))(this);
	}
	template <typename T = void> T OnPlayerLeave(uintptr_t e) {
		return ((T (*)(NextLevelCtrl*, uintptr_t))(Il2CppBase() + 0x4523374))(this, e);
	}
	template <typename T = void> T OnPlayerReadyChange(uintptr_t e) {
		return ((T (*)(NextLevelCtrl*, uintptr_t))(Il2CppBase() + 0x45237B0))(this, e);
	}
	template <typename T = void> T CheckAllPlayerReady() {
		return ((T (*)(NextLevelCtrl*))(Il2CppBase() + 0x4523AB4))(this);
	}
	template <typename T = void> T GoNextLevel() {
		return ((T (*)(NextLevelCtrl*))(Il2CppBase() + 0x4523CC0))(this);
	}

};

}
