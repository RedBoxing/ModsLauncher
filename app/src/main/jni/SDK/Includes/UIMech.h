#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIMech
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIMech"));
	}

	template <typename T = Il2CppString*> static T& MECH_OBJECT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& itemAmount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& backgroundToggleTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& backgroundMinAlpha() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& toggleAmount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& toggleInterval() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& minToggleAnimeTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& maxToggleAnimeTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& toggleIntervalEach() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& toggleMaxAlpha() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& fadeInTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& dangerousColorTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mechNameColorDict() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& fadeInTimeRange() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& background() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mechItems() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& isHurt() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& EaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& digitPattern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _regex() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> static T LoadFx(Il2CppString* mechName, uintptr_t controller) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4347AAC))(0, mechName, controller);
	}
	template <typename T = void> static T unloadFx() {
		return ((T (*)(void *))(Il2CppBase() + 0x4347FA4))(0);
	}
	template <typename T = void> static T Dangerous() {
		return ((T (*)(void *))(Il2CppBase() + 0x434817C))(0);
	}
	template <typename T = void> T StartAnime(Il2CppString* mechName) {
		return ((T (*)(UIMech*, Il2CppString*))(Il2CppBase() + 0x4347C7C))(this, mechName);
	}
	template <typename T = void> T EndAnime() {
		return ((T (*)(UIMech*))(Il2CppBase() + 0x43480D8))(this);
	}
	template <typename T = void> T InitReference() {
		return ((T (*)(UIMech*))(Il2CppBase() + 0x4348374))(this);
	}
	template <typename T = void> T StartToggle() {
		return ((T (*)(UIMech*))(Il2CppBase() + 0x4348974))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(UIMech*))(Il2CppBase() + 0x4348A10))(this);
	}
	template <typename T = void> T ItemToggle() {
		return ((T (*)(UIMech*))(Il2CppBase() + 0x4348ACC))(this);
	}
	template <typename T = uintptr_t> T ToggleAnime() {
		return ((T (*)(UIMech*))(Il2CppBase() + 0x4348C08))(this);
	}
	template <typename T = uintptr_t> T ToggleBackground() {
		return ((T (*)(UIMech*))(Il2CppBase() + 0x4348B54))(this);
	}
	template <typename T = uintptr_t> T BackgroundAlphaAnime(float fromAlpha, float toAlpha, float animeTime) {
		return ((T (*)(UIMech*, float, float, float))(Il2CppBase() + 0x4348D14))(this, fromAlpha, toAlpha, animeTime);
	}
	template <typename T = uintptr_t> T ChangeColorDangerous() {
		return ((T (*)(UIMech*))(Il2CppBase() + 0x43482C0))(this);
	}
	template <typename T = uintptr_t> T ChangeColor(uintptr_t from, uintptr_t to, float animeTime) {
		return ((T (*)(UIMech*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4348E88))(this, from, to, animeTime);
	}
	template <typename T = void> T SetColorAll(uintptr_t color) {
		return ((T (*)(UIMech*, uintptr_t))(Il2CppBase() + 0x43485A8))(this, color);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIMech*))(Il2CppBase() + 0x4349134))(this);
	}

};

}
