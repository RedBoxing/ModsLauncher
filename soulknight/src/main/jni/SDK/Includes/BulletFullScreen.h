#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletFullScreen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletFullScreen"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& repel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& has_force() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& source_obj() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& sourceWeapon() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& autoAttack() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& useCustomData() {
		return *(T*)((uintptr_t)this + 0xD9);
	}

	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletFullScreen*))(Il2CppBase() + 0x2375E3C))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t source_obj) {
		return ((T (*)(BulletFullScreen*, uintptr_t))(Il2CppBase() + 0x2375E9C))(this, source_obj);
	}
	template <typename T = void> T OnAttack() {
		return ((T (*)(BulletFullScreen*))(Il2CppBase() + 0x2375F10))(this);
	}
	template <typename T = void> T UpdateAttribute(uintptr_t source_object, uintptr_t sourceWeapon, int32_t damage, float the_speed, bool can_through, float repel) {
		return ((T (*)(BulletFullScreen*, uintptr_t, uintptr_t, int32_t, float, bool, float))(Il2CppBase() + 0x23763F4))(this, source_object, sourceWeapon, damage, the_speed, can_through, repel);
	}
	template <typename T = void> T CopyFrom(uintptr_t origin) {
		return ((T (*)(BulletFullScreen*, uintptr_t))(Il2CppBase() + 0x23764B0))(this, origin);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(BulletFullScreen*))(Il2CppBase() + 0x237659C))(this);
	}
	template <typename T = void> T SetCamera(uintptr_t sourceWeapon) {
		return ((T (*)(BulletFullScreen*, uintptr_t))(Il2CppBase() + 0x23765F8))(this, sourceWeapon);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletFullScreen*, uintptr_t, uintptr_t))(Il2CppBase() + 0x237666C))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletFullScreen*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23767B0))(this, P0, P1);
	}

};

}
