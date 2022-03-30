#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIPanelTeamInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPanelTeamInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& teamImgCfgs() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& InfoPanel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& offlineColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& offlineBg() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& emptySp() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& teamInfoViewList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ctrl() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& backgroundState() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& kickTips() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PSprites() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PlayerRankSps() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIPanelTeamInfo*))(Il2CppBase() + 0x42331B4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIPanelTeamInfo*))(Il2CppBase() + 0x423324C))(this);
	}
	template <typename T = uintptr_t> T GetTeamInfoView(int32_t teamIdx) {
		return ((T (*)(UIPanelTeamInfo*, int32_t))(Il2CppBase() + 0x42332B0))(this, teamIdx);
	}
	template <typename T = void> T UpdateTeamItemView(uintptr_t teamItem) {
		return ((T (*)(UIPanelTeamInfo*, uintptr_t))(Il2CppBase() + 0x423339C))(this, teamItem);
	}
	template <typename T = uintptr_t> T GetTeamImgCfg(int32_t teamIdx) {
		return ((T (*)(UIPanelTeamInfo*, int32_t))(Il2CppBase() + 0x4233B3C))(this, teamIdx);
	}
	template <typename T = void> T UpdateTeamItemHp(uintptr_t teamItem) {
		return ((T (*)(UIPanelTeamInfo*, uintptr_t))(Il2CppBase() + 0x4233C30))(this, teamItem);
	}
	template <typename T = void> T UpdateTeamItemMp(uintptr_t teamItem) {
		return ((T (*)(UIPanelTeamInfo*, uintptr_t))(Il2CppBase() + 0x4233DD4))(this, teamItem);
	}
	template <typename T = void> T KickBtnClick(int32_t teamIdx) {
		return ((T (*)(UIPanelTeamInfo*, int32_t))(Il2CppBase() + 0x4233F78))(this, teamIdx);
	}
	template <typename T = void> T Show() {
		return ((T (*)(UIPanelTeamInfo*))(Il2CppBase() + 0x42341F0))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(UIPanelTeamInfo*))(Il2CppBase() + 0x42344CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Init() {
		return ((T (*)(UIPanelTeamInfo*))(Il2CppBase() + 0x4234804))(this);
	}
	template <typename T = void> T iFixBaseProxy_Show() {
		return ((T (*)(UIPanelTeamInfo*))(Il2CppBase() + 0x4234808))(this);
	}
	template <typename T = void> T iFixBaseProxy_Hide() {
		return ((T (*)(UIPanelTeamInfo*))(Il2CppBase() + 0x423480C))(this);
	}

};

}
