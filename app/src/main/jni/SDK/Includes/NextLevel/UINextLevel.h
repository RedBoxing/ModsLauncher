#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NextLevel {

class UINextLevel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NextLevel", "UINextLevel"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& countdownText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& playerReadyText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& waitBtn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& cancelBtn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& confirmBtn() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ctrl() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& lastWait() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UINextLevel*))(Il2CppBase() + 0x4524134))(this);
	}
	template <typename T = void> T Show(bool isSpecial, Il2CppString* branchIdx, bool isUseCtrl) {
		return ((T (*)(UINextLevel*, bool, Il2CppString*, bool))(Il2CppBase() + 0x45241CC))(this, isSpecial, branchIdx, isUseCtrl);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(UINextLevel*))(Il2CppBase() + 0x4523718))(this);
	}
	template <typename T = void> T ShowNumAni(int32_t num) {
		return ((T (*)(UINextLevel*, int32_t))(Il2CppBase() + 0x4523FB4))(this, num);
	}
	template <typename T = void> T OnWaitBtnClick() {
		return ((T (*)(UINextLevel*))(Il2CppBase() + 0x4524358))(this);
	}
	template <typename T = void> T OnCancelBtnClick() {
		return ((T (*)(UINextLevel*))(Il2CppBase() + 0x45244E4))(this);
	}
	template <typename T = void> T OnNextLevelBtnClick() {
		return ((T (*)(UINextLevel*))(Il2CppBase() + 0x45245C8))(this);
	}
	template <typename T = void> T UpdatePlayerReadyNum(int32_t readyCount, int32_t playerCount) {
		return ((T (*)(UINextLevel*, int32_t, int32_t))(Il2CppBase() + 0x4523010))(this, readyCount, playerCount);
	}

};

}
