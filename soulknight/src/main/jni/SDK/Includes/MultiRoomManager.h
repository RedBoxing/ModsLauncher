#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRoomManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRoomManager"));
	}

	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& btn_start() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& hero_index() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& hero_level() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& skin_index() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& skill_index() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _screenInfos() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_ScreenInfos() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x4372DB8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x4372E18))(this);
	}
	template <typename T = void> T LoadMultiRoomSkin() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x4373880))(this);
	}
	template <typename T = void> T InitScreenInfos() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x437303C))(this);
	}
	template <typename T = void> T AddEvent() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x4373634))(this);
	}
	template <typename T = void> T RemoveEvent() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x4373CDC))(this);
	}
	template <typename T = void> T OnOtherPlayerSelectHero(uintptr_t e) {
		return ((T (*)(MultiRoomManager*, uintptr_t))(Il2CppBase() + 0x4373F28))(this, e);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x437467C))(this);
	}
	template <typename T = void> T UpdatePlayerInfo(uintptr_t e) {
		return ((T (*)(MultiRoomManager*, uintptr_t))(Il2CppBase() + 0x43746DC))(this, e);
	}
	template <typename T = void> T InitAllPlayerInfo() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x4373418))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x4374DA8))(this);
	}
	template <typename T = void> T OnPlayerJoin(uintptr_t e) {
		return ((T (*)(MultiRoomManager*, uintptr_t))(Il2CppBase() + 0x4374FDC))(this, e);
	}
	template <typename T = void> T SelfJoin() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x4374E78))(this);
	}
	template <typename T = void> T OnPlayerEnter(uintptr_t e) {
		return ((T (*)(MultiRoomManager*, uintptr_t))(Il2CppBase() + 0x43751CC))(this, e);
	}
	template <typename T = void> T OnPlayerLeave(uintptr_t e) {
		return ((T (*)(MultiRoomManager*, uintptr_t))(Il2CppBase() + 0x43754B8))(this, e);
	}
	template <typename T = void> T OnBtnStartClick() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x437586C))(this);
	}
	template <typename T = void> T StartClickTest() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x4375E3C))(this);
	}
	template <typename T = void> T SetUpInfo(int32_t player_idx, uintptr_t net_ctrl) {
		return ((T (*)(MultiRoomManager*, int32_t, uintptr_t))(Il2CppBase() + 0x4374850))(this, player_idx, net_ctrl);
	}
	template <typename T = void> T SetUpScreenInfo(int32_t player_idx, uintptr_t net_ctrl) {
		return ((T (*)(MultiRoomManager*, int32_t, uintptr_t))(Il2CppBase() + 0x4374C08))(this, player_idx, net_ctrl);
	}
	template <typename T = void> T SetUpScreenInfo_1(int32_t playerIndex, uintptr_t net_ctrl, int32_t heroIndex, int32_t skinIndex, int32_t skillIndex, bool forceUseParam) {
		return ((T (*)(MultiRoomManager*, int32_t, uintptr_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x437441C))(this, playerIndex, net_ctrl, heroIndex, skinIndex, skillIndex, forceUseParam);
	}
	template <typename T = void> T UpdateStartBtn() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x43756F4))(this);
	}
	template <typename T = void> T UpdateScreen() {
		return ((T (*)(MultiRoomManager*))(Il2CppBase() + 0x4375F7C))(this);
	}
	template <typename T = void> T OnUpdateNetPlayerInfo(uintptr_t e) {
		return ((T (*)(MultiRoomManager*, uintptr_t))(Il2CppBase() + 0x43760FC))(this, e);
	}

};

}
