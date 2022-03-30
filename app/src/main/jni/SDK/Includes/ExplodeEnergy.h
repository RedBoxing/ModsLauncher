#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeEnergy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeEnergy"));
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
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ExplodeEnergy*))(Il2CppBase() + 0x44688C0))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(ExplodeEnergy*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4468A54))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(ExplodeEnergy*, uintptr_t))(Il2CppBase() + 0x4468DBC))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(ExplodeEnergy*))(Il2CppBase() + 0x4468E34))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ExplodeEnergy*, uintptr_t))(Il2CppBase() + 0x4468E94))(this, other);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(ExplodeEnergy*))(Il2CppBase() + 0x4468B74))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ExplodeEnergy*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4469934))(this, P0, P1);
	}

};

}
