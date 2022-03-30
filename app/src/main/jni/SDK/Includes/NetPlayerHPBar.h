#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetPlayerHPBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetPlayerHPBar"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& PSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _curHpBarState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& local_player() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& bar_hp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& max_hp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> static T& REBORN_COST_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& this_reborn_time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& boxCol2D() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& sprite_bar() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& sprite_hp() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& sprite_p() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& helpCtrl() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& OriginNetId() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& sendAlive() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = void> T set_CurHpBarState(uintptr_t value) {
		return ((T (*)(NetPlayerHPBar*, uintptr_t))(Il2CppBase() + 0x4453B70))(this, value);
	}
	template <typename T = uintptr_t> T get_CurHpBarState() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4453D28))(this);
	}
	template <typename T = int32_t> T get_maxHp() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4453D88))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4453F64))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4454244))(this);
	}
	template <typename T = void> T StartNetTeammateHp() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x44459F0))(this);
	}
	template <typename T = void> T ShowBar() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4454450))(this);
	}
	template <typename T = void> T HideBar() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x44543B8))(this);
	}
	template <typename T = void> T GetReloadResult(bool value) {
		return ((T (*)(NetPlayerHPBar*, bool))(Il2CppBase() + 0x44544E8))(this, value);
	}
	template <typename T = void> T UpdatePlayerIndex(int32_t index) {
		return ((T (*)(NetPlayerHPBar*, int32_t))(Il2CppBase() + 0x4454570))(this, index);
	}
	template <typename T = void> T HidePlayerIndex(int32_t index) {
		return ((T (*)(NetPlayerHPBar*, int32_t))(Il2CppBase() + 0x44546A0))(this, index);
	}
	template <typename T = void> T UpdateHpBar(int32_t curHp) {
		return ((T (*)(NetPlayerHPBar*, int32_t))(Il2CppBase() + 0x4445B74))(this, curHp);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4454978))(this);
	}
	template <typename T = void> T HpBarProgress(float value) {
		return ((T (*)(NetPlayerHPBar*, float))(Il2CppBase() + 0x4454844))(this, value);
	}
	template <typename T = void> T OnStateChange(uintptr_t oldState, uintptr_t newState) {
		return ((T (*)(NetPlayerHPBar*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4453C04))(this, oldState, newState);
	}
	template <typename T = void> T OnReborning() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4454D94))(this);
	}
	template <typename T = void> T OnAlive() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4454E48))(this);
	}
	template <typename T = void> T OnDead() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x44551D8))(this);
	}
	template <typename T = void> T OnStopReborning() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x44552C0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(NetPlayerHPBar*, uintptr_t))(Il2CppBase() + 0x44553BC))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(NetPlayerHPBar*, uintptr_t))(Il2CppBase() + 0x44555DC))(this, other);
	}
	template <typename T = void> T RefreshPlayerIndex() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4445D28))(this);
	}
	template <typename T = void> T UpdatePlayerInfo(uintptr_t e) {
		return ((T (*)(NetPlayerHPBar*, uintptr_t))(Il2CppBase() + 0x4455B4C))(this, e);
	}
	template <typename T = void> T OnPlayerLeave(uintptr_t e) {
		return ((T (*)(NetPlayerHPBar*, uintptr_t))(Il2CppBase() + 0x4455C94))(this, e);
	}
	template <typename T = void> T OnPlayerDead(uintptr_t e) {
		return ((T (*)(NetPlayerHPBar*, uintptr_t))(Il2CppBase() + 0x4455DAC))(this, e);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(NetPlayerHPBar*, uintptr_t))(Il2CppBase() + 0x4456030))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(NetPlayerHPBar*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x44562C0))(this, controller, ext_info);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4456254))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4456438))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x4456498))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(NetPlayerHPBar*))(Il2CppBase() + 0x44564F8))(this);
	}

};

}
