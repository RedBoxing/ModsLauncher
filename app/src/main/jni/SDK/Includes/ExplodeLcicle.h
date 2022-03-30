#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeLcicle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeLcicle"));
	}

	template <typename T = uintptr_t> T& broken_effect() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& targetbuff() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& freeze() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& repel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& useCustomDamage() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T OnDisable() {
		return ((T (*)(ExplodeLcicle*))(Il2CppBase() + 0x4470218))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(ExplodeLcicle*, uintptr_t))(Il2CppBase() + 0x4470278))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(ExplodeLcicle*))(Il2CppBase() + 0x44704A8))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ExplodeLcicle*, uintptr_t))(Il2CppBase() + 0x4470508))(this, other);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(ExplodeLcicle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44710E0))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(ExplodeLcicle*))(Il2CppBase() + 0x44703C8))(this);
	}
	template <typename T = void> T InBroken() {
		return ((T (*)(ExplodeLcicle*))(Il2CppBase() + 0x44711E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetSourceObject(uintptr_t P0) {
		return ((T (*)(ExplodeLcicle*, uintptr_t))(Il2CppBase() + 0x44713CC))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetSourceObject() {
		return ((T (*)(ExplodeLcicle*))(Il2CppBase() + 0x44713D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ExplodeLcicle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44713DC))(this, P0, P1);
	}

};

}
