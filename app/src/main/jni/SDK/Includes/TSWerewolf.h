#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSWerewolf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSWerewolf"));
	}

	template <typename T = uintptr_t> T& paw_l() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& paw_r() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& effect_s8_l_obj() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& effect_s8_r_obj() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& head_s8_obj() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& effect_s8_l_ps() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& effect_s8_r_ps() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& head_s8_ps() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& deltaDefence() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TSWerewolf*))(Il2CppBase() + 0x18D0C74))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TSWerewolf*))(Il2CppBase() + 0x18D0F30))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSWerewolf*))(Il2CppBase() + 0x18D1030))(this);
	}
	template <typename T = void> T Transfiguration() {
		return ((T (*)(TSWerewolf*))(Il2CppBase() + 0x18D1444))(this);
	}
	template <typename T = void> T SkillAtk() {
		return ((T (*)(TSWerewolf*))(Il2CppBase() + 0x18D184C))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(TSWerewolf*))(Il2CppBase() + 0x18D20D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(TSWerewolf*))(Il2CppBase() + 0x18D256C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(TSWerewolf*))(Il2CppBase() + 0x18D2574))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSWerewolf*))(Il2CppBase() + 0x18D257C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(TSWerewolf*))(Il2CppBase() + 0x18D2584))(this);
	}

};

}
