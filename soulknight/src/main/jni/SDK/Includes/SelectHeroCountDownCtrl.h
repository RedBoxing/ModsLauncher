#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SelectHeroCountDownCtrl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectHeroCountDownCtrl"));
	}

	template <typename T = int32_t> static T& HOST_COUNT_DOWN_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CLIENT_COUNT_DOWN_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& countCoroutine() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& restTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_IsRemoteGame() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x18200F0))(this);
	}
	template <typename T = bool> T get_IsOpenGame() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x1820150))(this);
	}
	template <typename T = bool> T get_IsHost() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x1820214))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x182028C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x1820310))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x18204CC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x1820688))(this);
	}
	template <typename T = void> T OnChoseSkinCancel(uintptr_t e) {
		return ((T (*)(SelectHeroCountDownCtrl*, uintptr_t))(Il2CppBase() + 0x18208C4))(this, e);
	}
	template <typename T = void> T OnShowHeroChose(uintptr_t e) {
		return ((T (*)(SelectHeroCountDownCtrl*, uintptr_t))(Il2CppBase() + 0x1820964))(this, e);
	}
	template <typename T = void> T OnChoseSkinConfirm(uintptr_t e) {
		return ((T (*)(SelectHeroCountDownCtrl*, uintptr_t))(Il2CppBase() + 0x18209F4))(this, e);
	}
	template <typename T = void> T OnHostEnterMultiRoom(uintptr_t e) {
		return ((T (*)(SelectHeroCountDownCtrl*, uintptr_t))(Il2CppBase() + 0x18206EC))(this, e);
	}
	template <typename T = void> T StartCountDown() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x1820A88))(this);
	}
	template <typename T = uintptr_t> T SelectHeroCountDown() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x1820B14))(this);
	}
	template <typename T = void> T OnHostCountdownEnd() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x1820BF4))(this);
	}
	template <typename T = void> T DelayEnterMultiRoom() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x1820D98))(this);
	}
	template <typename T = void> T EnterMultiRoom() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x1820E8C))(this);
	}
	template <typename T = void> T OnClientCountdownEnd() {
		return ((T (*)(SelectHeroCountDownCtrl*))(Il2CppBase() + 0x1821310))(this);
	}
	template <typename T = void> static T DestoryInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1821464))(0);
	}

};

}
