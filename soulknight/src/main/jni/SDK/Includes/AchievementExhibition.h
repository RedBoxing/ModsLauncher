#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AchievementExhibition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AchievementExhibition"));
	}

	template <typename T = int32_t> T& achievement_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& icon_render() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& achieve_exh_dic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T UpdateAchieveExhById(int32_t achieve_id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A0B13C))(0, achieve_id);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AchievementExhibition*))(Il2CppBase() + 0x1A0C548))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AchievementExhibition*))(Il2CppBase() + 0x1A0C67C))(this);
	}
	template <typename T = void> T FlashView() {
		return ((T (*)(AchievementExhibition*))(Il2CppBase() + 0x1A0C368))(this);
	}
	template <typename T = void> T ShowLightEffect() {
		return ((T (*)(AchievementExhibition*))(Il2CppBase() + 0x1A0C828))(this);
	}
	template <typename T = void> T HideLighteffect() {
		return ((T (*)(AchievementExhibition*))(Il2CppBase() + 0x1A0CAE4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(AchievementExhibition*, uintptr_t))(Il2CppBase() + 0x1A0CC18))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(AchievementExhibition*, uintptr_t))(Il2CppBase() + 0x1A0CE50))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(AchievementExhibition*, uintptr_t))(Il2CppBase() + 0x1A0CFDC))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(AchievementExhibition*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A0D1B4))(this, controller, ext_info);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(AchievementExhibition*))(Il2CppBase() + 0x1A0D22C))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(AchievementExhibition*))(Il2CppBase() + 0x1A0D28C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(AchievementExhibition*))(Il2CppBase() + 0x1A0D2EC))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(AchievementExhibition*))(Il2CppBase() + 0x1A0D34C))(this);
	}
	template <typename T = uintptr_t> T GetAchievementInfo() {
		return ((T (*)(AchievementExhibition*))(Il2CppBase() + 0x1A0C6DC))(this);
	}
	template <typename T = uintptr_t> T GetACInfo(int32_t id) {
		return ((T (*)(AchievementExhibition*, int32_t))(Il2CppBase() + 0x1A0C754))(this, id);
	}
	template <typename T = void> T SetAchievementInfo(uintptr_t info, bool isLarge) {
		return ((T (*)(AchievementExhibition*, uintptr_t, bool))(Il2CppBase() + 0x1A0D44C))(this, info, isLarge);
	}

};

}
