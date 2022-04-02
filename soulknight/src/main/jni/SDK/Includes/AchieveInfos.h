#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AchieveInfos
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AchieveInfos"));
	}

	template <typename T = Il2CppString*> static T& ACFileName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& achievement_Infos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& achieve_dic() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& achieve_type_dic() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A09458))(0);
	}
	template <typename T = void> T ReLoadData() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A0954C))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A095FC))(this);
	}
	template <typename T = void> T OnLoad() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A09768))(this);
	}
	template <typename T = uintptr_t> T GetAchievementInfoById(int32_t id) {
		return ((T (*)(AchieveInfos*, int32_t))(Il2CppBase() + 0x1A09B90))(this, id);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAchievementsByType(uintptr_t achievement_type) {
		return ((T (*)(AchieveInfos*, uintptr_t))(Il2CppBase() + 0x1A09C80))(this, achievement_type);
	}
	template <typename T = uintptr_t> T CheckUnlock(uintptr_t ach_type, int64_t param_int, Il2CppString* param_str, uintptr_t heroType, bool fort) {
		return ((T (*)(AchieveInfos*, uintptr_t, int64_t, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x1A09D70))(this, ach_type, param_int, param_str, heroType, fort);
	}
	template <typename T = void> T OnEmailGetAward(uintptr_t baseEmail) {
		return ((T (*)(AchieveInfos*, uintptr_t))(Il2CppBase() + 0x1A0B598))(this, baseEmail);
	}
	template <typename T = void> T CreateAchievementEmail(uintptr_t achievement) {
		return ((T (*)(AchieveInfos*, uintptr_t))(Il2CppBase() + 0x1A0B2C0))(this, achievement);
	}
	template <typename T = void> T CheckOfficerEmail() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A0B7AC))(this);
	}
	template <typename T = void> T UnlockMountPig() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A0A998))(this);
	}
	template <typename T = void> T UnlockMountWorm() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A0A9F4))(this);
	}
	template <typename T = void> T UnlockMountSpider() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A0AA50))(this);
	}
	template <typename T = void> T UnlockMountWakeen() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A0AAAC))(this);
	}
	template <typename T = void> T UnlockC08MasterSkin() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A0AB08))(this);
	}
	template <typename T = void> T UnlockC14MasterSkin() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A0AD68))(this);
	}
	template <typename T = void> T UnlockC13MasterSkin() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A0AC38))(this);
	}
	template <typename T = void> T UnlockC08Skin8JiDaoSkin() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A0AE98))(this);
	}
	template <typename T = void> static T CheckUnlockEagleLover() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A0BB58))(0);
	}
	template <typename T = void> T StatisticAchievement(uintptr_t info) {
		return ((T (*)(AchieveInfos*, uintptr_t))(Il2CppBase() + 0x1A0B3F8))(this, info);
	}
	template <typename T = void> T OnAfterDeserializeb__14_0(bool success) {
		return ((T (*)(AchieveInfos*, bool))(Il2CppBase() + 0x1A0BFA4))(this, success);
	}
	template <typename T = void> T iFixBaseProxy_OnAfterDeserialize() {
		return ((T (*)(AchieveInfos*))(Il2CppBase() + 0x1A0BFB0))(this);
	}

};

}
