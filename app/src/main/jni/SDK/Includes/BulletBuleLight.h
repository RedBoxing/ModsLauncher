#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletBuleLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletBuleLight"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& is_end() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& can_hit() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletBuleLight*))(Il2CppBase() + 0x45AB090))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletBuleLight*, uintptr_t))(Il2CppBase() + 0x45AB140))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletBuleLight*))(Il2CppBase() + 0x45AB2E4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletBuleLight*))(Il2CppBase() + 0x45AB344))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(BulletBuleLight*))(Il2CppBase() + 0x45AB240))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(BulletBuleLight*))(Il2CppBase() + 0x45AB74C))(this);
	}

};

}
