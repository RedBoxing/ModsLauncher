#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeIceNail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeIceNail"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& scaleFactor() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& shakeCamera() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& destroyTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& immureWithShieldIce() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ExplodeIceNail*))(Il2CppBase() + 0x446F074))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(ExplodeIceNail*, uintptr_t, uintptr_t))(Il2CppBase() + 0x446F248))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(ExplodeIceNail*, uintptr_t))(Il2CppBase() + 0x446F580))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(ExplodeIceNail*))(Il2CppBase() + 0x446F5F8))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ExplodeIceNail*, uintptr_t))(Il2CppBase() + 0x446F658))(this, other);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(ExplodeIceNail*))(Il2CppBase() + 0x446F368))(this);
	}
	template <typename T = uintptr_t> T Restore() {
		return ((T (*)(ExplodeIceNail*))(Il2CppBase() + 0x446FF1C))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(ExplodeIceNail*))(Il2CppBase() + 0x446F0D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ExplodeIceNail*, uintptr_t, uintptr_t))(Il2CppBase() + 0x447002C))(this, P0, P1);
	}

};

}
