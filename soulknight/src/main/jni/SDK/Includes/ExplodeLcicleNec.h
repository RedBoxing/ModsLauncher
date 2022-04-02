#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeLcicleNec
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeLcicleNec"));
	}

	template <typename T = uintptr_t> T& broken_effect() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& targetbuff() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(ExplodeLcicleNec*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4471434))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(ExplodeLcicleNec*, uintptr_t))(Il2CppBase() + 0x4471530))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(ExplodeLcicleNec*))(Il2CppBase() + 0x4471688))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ExplodeLcicleNec*, uintptr_t))(Il2CppBase() + 0x44716E8))(this, other);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(ExplodeLcicleNec*))(Il2CppBase() + 0x44715A8))(this);
	}
	template <typename T = void> T InBroken() {
		return ((T (*)(ExplodeLcicleNec*))(Il2CppBase() + 0x4472378))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ExplodeLcicleNec*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4472568))(this, P0, P1);
	}

};

}
