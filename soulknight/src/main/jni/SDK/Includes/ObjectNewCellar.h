#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectNewCellar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectNewCellar"));
	}

	template <typename T = float> static T& plus_speed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& _has_create() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& light_color() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& dark_color() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& fade_dur_time() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& obstacle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& blackMasks() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& triggerCellarTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = bool> T get_has_create() {
		return ((T (*)(ObjectNewCellar*))(Il2CppBase() + 0x1DB8048))(this);
	}
	template <typename T = void> T set_has_create(bool value) {
		return ((T (*)(ObjectNewCellar*, bool))(Il2CppBase() + 0x1DB81B0))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectNewCellar*))(Il2CppBase() + 0x1DB8228))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectNewCellar*, uintptr_t))(Il2CppBase() + 0x1DB83AC))(this, other);
	}
	template <typename T = void> T AddFadeBlack() {
		return ((T (*)(ObjectNewCellar*))(Il2CppBase() + 0x1DB85A0))(this);
	}
	template <typename T = void> T AddFadeWhite() {
		return ((T (*)(ObjectNewCellar*))(Il2CppBase() + 0x1DB87E8))(this);
	}
	template <typename T = uintptr_t> T EnteringCeller() {
		return ((T (*)(ObjectNewCellar*))(Il2CppBase() + 0x1DB84EC))(this);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectNewCellar*, uintptr_t))(Il2CppBase() + 0x1DB8A5C))(this, other);
	}

};

}
