#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C18Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C18Controller"));
	}

	template <typename T = float> T& theInSkillTime() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = float> T& skill_speed_up_rate() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = float> T& shuttleInvertel() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = float> T& shuttleDurTime() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = float> T& lastShuttleTime() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = int32_t> T& shuttleHurtRate() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = float> T& addShuttleDurTime() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = bool> T& needAddShuttleDurTIme() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = bool> T& isFlying() {
		return *(T*)((uintptr_t)this + 0x30D);
	}
	template <typename T = uintptr_t> T& trail() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& trBack() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = Il2CppVector3> T& flyDir() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = bool> T& inShuttle() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = uintptr_t> T& effectSwordObj() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = bool> T& skillUpgrade() {
		return *(T*)((uintptr_t)this + 0x338);
	}

	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F49120))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F49180))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F492E0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F49360))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F498E4))(this);
	}
	template <typename T = void> T SwitchWeapon() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F49950))(this);
	}
	template <typename T = void> T SetCameraFocus() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F499C8))(this);
	}
	template <typename T = bool> T CanGetHurt() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F49AB4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C18Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F49B3C))(this, damage, source_object);
	}
	template <typename T = void> T GetHurtHp(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C18Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F49BE0))(this, damage, source_object);
	}
	template <typename T = void> T OnMount(bool isMount) {
		return ((T (*)(C18Controller*, bool))(Il2CppBase() + 0x1F49C84))(this, isMount);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F49D38))(this);
	}
	template <typename T = void> T DoReborn(bool uiReborn) {
		return ((T (*)(C18Controller*, bool))(Il2CppBase() + 0x1F49DE8))(this, uiReborn);
	}
	template <typename T = void> T Shuttle() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F49604))(this);
	}
	template <typename T = void> T EndShuttle() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F49EB8))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F49F4C))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F4A670))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F4AA08))(this);
	}
	template <typename T = void> T iFixBaseProxy_SwitchWeapon() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F4AA10))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetCameraFocus() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F4AA18))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(C18Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F4AA20))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_GetHurtHp(int32_t P0, uintptr_t P1) {
		return ((T (*)(C18Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F4AA28))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnMount(bool P0) {
		return ((T (*)(C18Controller*, bool))(Il2CppBase() + 0x1F4AA30))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F4AA3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_DoReborn(bool P0) {
		return ((T (*)(C18Controller*, bool))(Il2CppBase() + 0x1F4AA44))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F4AA50))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C18Controller*))(Il2CppBase() + 0x1F4AA58))(this);
	}

};

}
