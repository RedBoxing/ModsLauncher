#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowPauseArtifact
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowPauseArtifact"));
	}

	template <typename T = uintptr_t> T& selectedFrame() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _displayedObjInWindowPause() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& funcClean() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& buffObj() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& godPowerObj() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& modeObj() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppVector3> T& oriSelectFrameScale() {
		return *(T*)((uintptr_t)this + 0x190);
	}

	template <typename T = void> T OnUpdateSize() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x4310838))(this);
	}
	template <typename T = uintptr_t> T get_weapon() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x4310894))(this);
	}
	template <typename T = void> T set_weapon(uintptr_t value) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t))(Il2CppBase() + 0x431089C))(this, value);
	}
	template <typename T = uintptr_t> T get_config() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x43108A4))(this);
	}
	template <typename T = void> T set_config(uintptr_t value) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t))(Il2CppBase() + 0x43108AC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x43108B4))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* paramObjects) {
		return ((T (*)(UIWindowPauseArtifact*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x431095C))(this, paramObjects);
	}
	template <typename T = void> T UpdateBuffBar() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x4310CF4))(this);
	}
	template <typename T = void> T UpdateFactors() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x43127B8))(this);
	}
	template <typename T = void> T UpdateWeapon() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x4311CF4))(this);
	}
	template <typename T = void> T SetBuffInfo(uintptr_t image, uintptr_t buff) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4312DE0))(this, image, buff);
	}
	template <typename T = void> T SetDrinkInfo(uintptr_t image, Il2CppString* drinkName) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4313130))(this, image, drinkName);
	}
	template <typename T = void> T SetModeInfo(uintptr_t image, Il2CppString* mode) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4313340))(this, image, mode);
	}
	template <typename T = void> T SetSkillInfo(uintptr_t image, int32_t heroIndex, int32_t skillIndex) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x43134BC))(this, image, heroIndex, skillIndex);
	}
	template <typename T = void> T SetSelectedFramePosition(uintptr_t obj, Il2CppVector3 offset) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x43136B4))(this, obj, offset);
	}
	template <typename T = void> T SelectObject(uintptr_t obj, Il2CppVector3 offset) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4310B80))(this, obj, offset);
	}
	template <typename T = void> T DoInfoClean() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x431386C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnUpdateSize() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x431394C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x4313954))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWindowPauseArtifact*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x431395C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_UpdateBuffBar() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x4313964))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateFactors() {
		return ((T (*)(UIWindowPauseArtifact*))(Il2CppBase() + 0x431396C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetBuffInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4313974))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetDrinkInfo(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x431397C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetModeInfo(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4313984))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetSkillInfo(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(UIWindowPauseArtifact*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x431398C))(this, P0, P1, P2);
	}

};

}
