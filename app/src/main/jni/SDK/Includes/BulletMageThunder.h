#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletMageThunder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletMageThunder"));
	}

	template <typename T = uintptr_t> T& thunderPrefab() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& textTalkWrapper() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& cameraShaker() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& thunderRadius() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& isIntensive() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& _circleRayCaster() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletMageThunder*))(Il2CppBase() + 0x2384100))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletMageThunder*))(Il2CppBase() + 0x238416C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BulletMageThunder*))(Il2CppBase() + 0x23841F0))(this);
	}
	template <typename T = void> T CreateThunder() {
		return ((T (*)(BulletMageThunder*))(Il2CppBase() + 0x23842F4))(this);
	}
	template <typename T = void> T InstantiateThunder(uintptr_t targetTransform) {
		return ((T (*)(BulletMageThunder*, uintptr_t))(Il2CppBase() + 0x238445C))(this, targetTransform);
	}
	template <typename T = uintptr_t> T get_bulletMover() {
		return ((T (*)(BulletMageThunder*))(Il2CppBase() + 0x2384644))(this);
	}
	template <typename T = void> T set_bulletMover(uintptr_t value) {
		return ((T (*)(BulletMageThunder*, uintptr_t))(Il2CppBase() + 0x23846A8))(this, value);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BulletMageThunder*))(Il2CppBase() + 0x2384734))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletMageThunder*))(Il2CppBase() + 0x238473C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_bulletMover() {
		return ((T (*)(BulletMageThunder*))(Il2CppBase() + 0x2384744))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_bulletMover(uintptr_t P0) {
		return ((T (*)(BulletMageThunder*, uintptr_t))(Il2CppBase() + 0x238474C))(this, P0);
	}

};

}
