#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayExplode"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& boom_time() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& delay_clip() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& onExplodeStart() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& useCustomData() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& destroyTime() {
		return *(T*)((uintptr_t)this + 0xE4);
	}

	template <typename T = void> T add_onExplodeStart(uintptr_t value) {
		return ((T (*)(DelayExplode*, uintptr_t))(Il2CppBase() + 0x42E89E0))(this, value);
	}
	template <typename T = void> T remove_onExplodeStart(uintptr_t value) {
		return ((T (*)(DelayExplode*, uintptr_t))(Il2CppBase() + 0x42E8ACC))(this, value);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(DelayExplode*))(Il2CppBase() + 0x42E8BB8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DelayExplode*))(Il2CppBase() + 0x42E8D2C))(this);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(DelayExplode*))(Il2CppBase() + 0x42E8D88))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(DelayExplode*, uintptr_t))(Il2CppBase() + 0x42E9520))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(DelayExplode*))(Il2CppBase() + 0x42E94C0))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(DelayExplode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E9594))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(DelayExplode*))(Il2CppBase() + 0x42E96A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(DelayExplode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E9720))(this, P0, P1);
	}

};

}
