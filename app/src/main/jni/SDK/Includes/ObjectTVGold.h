#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectTVGold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectTVGold"));
	}

	template <typename T = uintptr_t> T& gems_icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& can_watch() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& offset_y() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& offset_x() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& otherworldPromo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& check_ienumerator() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& in_tv_range() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& tab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& otherworldMoved() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = bool> static T get_PromoWatchedToday() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DC9D38))(0);
	}
	template <typename T = void> static T set_PromoWatchedToday(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1DC9DD0))(0, value);
	}
	template <typename T = uintptr_t> T get_tvConfig() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DC9E64))(this);
	}
	template <typename T = int32_t> T get_currentTvVersion() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DC9F10))(this);
	}
	template <typename T = void> T set_currentTvVersion(int32_t value) {
		return ((T (*)(ObjectTVGold*, int32_t))(Il2CppBase() + 0x1DC9FA4))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCA04C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectTVGold*, uintptr_t))(Il2CppBase() + 0x1DCA3C4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectTVGold*, uintptr_t))(Il2CppBase() + 0x1DCA5D8))(this, other);
	}
	template <typename T = uintptr_t> T CheckTVAchievement(float wait_min) {
		return ((T (*)(ObjectTVGold*, float))(Il2CppBase() + 0x1DCA2E4))(this, wait_min);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectTVGold*, uintptr_t))(Il2CppBase() + 0x1DCA794))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCAA78))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCAAD8))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCAB64))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCABC4))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectTVGold*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DCAC24))(this, controller, ext_info);
	}
	template <typename T = void> T BtnClick1() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCAC9C))(this);
	}
	template <typename T = void> T BtnClick2() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCAFF0))(this);
	}
	template <typename T = void> T OnAdRewardSuccess() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCB068))(this);
	}
	template <typename T = void> T ShowUILoading() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCAE1C))(this);
	}
	template <typename T = void> T HideUILoading() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCB1E0))(this);
	}
	template <typename T = void> T OnChoseHero() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCB300))(this);
	}
	template <typename T = void> T OtherWorldPromoMove() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCB35C))(this);
	}
	template <typename T = void> T BtnClick1b__26_0() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCBA90))(this);
	}
	template <typename T = void> T OtherWorldPromoMoveb__33_1() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCBB1C))(this);
	}
	template <typename T = void> T OtherWorldPromoMoveb__33_0() {
		return ((T (*)(ObjectTVGold*))(Il2CppBase() + 0x1DCBBD8))(this);
	}

};

}
