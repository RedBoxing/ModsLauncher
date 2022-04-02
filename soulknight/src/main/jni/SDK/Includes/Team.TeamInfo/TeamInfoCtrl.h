#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Team.TeamInfo {

class TeamInfoCtrl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Team.TeamInfo", "TeamInfoCtrl"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& teamInfos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& teamInfoDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T get_NeedSort() {
		return ((T (*)(TeamInfoCtrl*))(Il2CppBase() + 0x43BB898))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TeamInfoCtrl*))(Il2CppBase() + 0x43BB8F8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TeamInfoCtrl*))(Il2CppBase() + 0x43BBB90))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TeamInfoCtrl*))(Il2CppBase() + 0x43BBE28))(this);
	}
	template <typename T = void> T InitData() {
		return ((T (*)(TeamInfoCtrl*))(Il2CppBase() + 0x43BBEDC))(this);
	}
	template <typename T = void> T UpdateTeamView() {
		return ((T (*)(TeamInfoCtrl*))(Il2CppBase() + 0x43BC354))(this);
	}
	template <typename T = void> T UpdateTeamPlayer(uintptr_t teamItem) {
		return ((T (*)(TeamInfoCtrl*, uintptr_t))(Il2CppBase() + 0x43BD0B4))(this, teamItem);
	}
	template <typename T = void> T OnPlayerBackground(uintptr_t e) {
		return ((T (*)(TeamInfoCtrl*, uintptr_t))(Il2CppBase() + 0x43BD244))(this, e);
	}
	template <typename T = void> T OnNetPlayerInfoUpdate(uintptr_t e) {
		return ((T (*)(TeamInfoCtrl*, uintptr_t))(Il2CppBase() + 0x43BD418))(this, e);
	}
	template <typename T = void> T UpdatePlayerHp(uintptr_t e) {
		return ((T (*)(TeamInfoCtrl*, uintptr_t))(Il2CppBase() + 0x43BD6B8))(this, e);
	}
	template <typename T = void> T UpdateTeamInfosHpMp() {
		return ((T (*)(TeamInfoCtrl*))(Il2CppBase() + 0x43BC448))(this);
	}
	template <typename T = void> T UpdateTeamPlayerIndex() {
		return ((T (*)(TeamInfoCtrl*))(Il2CppBase() + 0x43BC904))(this);
	}
	template <typename T = void> T OnPlayerDead(uintptr_t e) {
		return ((T (*)(TeamInfoCtrl*, uintptr_t))(Il2CppBase() + 0x43BD8C0))(this, e);
	}
	template <typename T = void> T OnPlayerLeave(uintptr_t e) {
		return ((T (*)(TeamInfoCtrl*, uintptr_t))(Il2CppBase() + 0x43BDA38))(this, e);
	}
	template <typename T = void> T OnPlayerJoin(uintptr_t e) {
		return ((T (*)(TeamInfoCtrl*, uintptr_t))(Il2CppBase() + 0x43BDBF4))(this, e);
	}
	template <typename T = void> T KickPlayer(int32_t teamIdx) {
		return ((T (*)(TeamInfoCtrl*, int32_t))(Il2CppBase() + 0x43BDDFC))(this, teamIdx);
	}

};

}
