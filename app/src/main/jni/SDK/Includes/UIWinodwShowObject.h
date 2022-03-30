#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWinodwShowObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWinodwShowObject"));
	}

	template <typename T = uintptr_t> T& text_name() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& img_icon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& img_flag() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& textShader() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& onWindowCloseClick() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& textMaterial() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T add_onWindowCloseClick(uintptr_t value) {
		return ((T (*)(UIWinodwShowObject*, uintptr_t))(Il2CppBase() + 0x45D0800))(this, value);
	}
	template <typename T = void> T remove_onWindowCloseClick(uintptr_t value) {
		return ((T (*)(UIWinodwShowObject*, uintptr_t))(Il2CppBase() + 0x45D08EC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWinodwShowObject*))(Il2CppBase() + 0x45D09D8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWinodwShowObject*))(Il2CppBase() + 0x45D0C64))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWinodwShowObject*))(Il2CppBase() + 0x45D0CC0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWinodwShowObject*))(Il2CppBase() + 0x45D0D1C))(this);
	}
	template <typename T = void> static T ShowUIWinowObject(uintptr_t object_img, Il2CppString* object_name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45D10AC))(0, object_img, object_name);
	}
	template <typename T = void> static T ShowUIWinowObjectWithFlag(uintptr_t object_img, uintptr_t flag_img, Il2CppVector3 flag_angle, Il2CppString* object_name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x45D1644))(0, object_img, flag_img, flag_angle, object_name);
	}
	template <typename T = void> static T ShowUIWinowObjectBlueprint(uintptr_t object_img, uintptr_t flag_img, Il2CppString* object_name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45D1C40))(0, object_img, flag_img, object_name);
	}
	template <typename T = void> T SetUpWindow(uintptr_t object_icon, Il2CppString* object_name, float autoCloseTime, bool pauseGame) {
		return ((T (*)(UIWinodwShowObject*, uintptr_t, Il2CppString*, float, bool))(Il2CppBase() + 0x45D1270))(this, object_icon, object_name, autoCloseTime, pauseGame);
	}
	template <typename T = void> T SetUpWindowWithFlag(uintptr_t object_icon, uintptr_t flag_icon, Il2CppVector3 flag_angle, Il2CppString* object_name) {
		return ((T (*)(UIWinodwShowObject*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x45D1854))(this, object_icon, flag_icon, flag_angle, object_name);
	}
	template <typename T = void> T BtnClick() {
		return ((T (*)(UIWinodwShowObject*))(Il2CppBase() + 0x45D0EAC))(this);
	}
	template <typename T = uintptr_t> T DestorySelf(float delay) {
		return ((T (*)(UIWinodwShowObject*, float))(Il2CppBase() + 0x45D1E74))(this, delay);
	}
	template <typename T = void> T TextFadeIn(float fadeInTime) {
		return ((T (*)(UIWinodwShowObject*, float))(Il2CppBase() + 0x45D1F80))(this, fadeInTime);
	}
	template <typename T = uintptr_t> T TextFadeInAnime(float fadeInTime) {
		return ((T (*)(UIWinodwShowObject*, float))(Il2CppBase() + 0x45D2008))(this, fadeInTime);
	}
	template <typename T = void> T TextFadeOut(float fadeOutTime) {
		return ((T (*)(UIWinodwShowObject*, float))(Il2CppBase() + 0x45D2114))(this, fadeOutTime);
	}
	template <typename T = uintptr_t> T TextFadeOutAnime(float fadeOutTime) {
		return ((T (*)(UIWinodwShowObject*, float))(Il2CppBase() + 0x45D219C))(this, fadeOutTime);
	}
	template <typename T = void> T TextFadeInAnimeb__21_0(float percentage) {
		return ((T (*)(UIWinodwShowObject*, float))(Il2CppBase() + 0x45D22B0))(this, percentage);
	}
	template <typename T = void> T TextFadeOutAnimeb__23_0(float percentage) {
		return ((T (*)(UIWinodwShowObject*, float))(Il2CppBase() + 0x45D2314))(this, percentage);
	}

};

}
