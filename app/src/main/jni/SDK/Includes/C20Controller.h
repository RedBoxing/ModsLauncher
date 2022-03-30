#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C20Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C20Controller"));
	}

	template <typename T = uintptr_t> T& owlProto() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> static T& Skill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& HideOwlTime() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = float> T& timeAfterLastHurt() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = uintptr_t> T& owlctrl() {
		return *(T*)((uintptr_t)this + 0x300);
	}

	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4C0D8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4C138))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4C19C))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4C21C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4C4CC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4C550))(this);
	}
	template <typename T = bool> T CanGetHurt() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4C5BC))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C20Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F4C634))(this, damage, source_object);
	}
	template <typename T = void> T GetHurtHp(int32_t damage, uintptr_t source_object) {
		return ((T (*)(C20Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F4C7AC))(this, damage, source_object);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4C858))(this);
	}
	template <typename T = Il2CppVector2> T GetForceAngle() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4CA54))(this);
	}
	template <typename T = void> T Kick() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4CBA0))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4D080))(this);
	}
	template <typename T = void> T SummonOwl() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4C328))(this);
	}
	template <typename T = void> T HideOwl() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4C6E0))(this);
	}
	template <typename T = void> T ShowOwl() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4D218))(this);
	}
	template <typename T = void> T DoReborn(bool uiReborn) {
		return ((T (*)(C20Controller*, bool))(Il2CppBase() + 0x1F4D28C))(this, uiReborn);
	}
	template <typename T = void> T OnEnemySplit(uintptr_t data) {
		return ((T (*)(C20Controller*, uintptr_t))(Il2CppBase() + 0x1F4D310))(this, data);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4D490))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4D648))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4D650))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(C20Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F4D658))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_GetHurtHp(int32_t P0, uintptr_t P1) {
		return ((T (*)(C20Controller*, int32_t, uintptr_t))(Il2CppBase() + 0x1F4D660))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4D668))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(C20Controller*))(Il2CppBase() + 0x1F4D670))(this);
	}
	template <typename T = void> T iFixBaseProxy_DoReborn(bool P0) {
		return ((T (*)(C20Controller*, bool))(Il2CppBase() + 0x1F4D678))(this, P0);
	}

};

}
