#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletHolyLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletHolyLight"));
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
	template <typename T = int32_t> T& holy_count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletHolyLight*))(Il2CppBase() + 0x237D178))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletHolyLight*, uintptr_t))(Il2CppBase() + 0x237D228))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletHolyLight*))(Il2CppBase() + 0x237D3C4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletHolyLight*))(Il2CppBase() + 0x237D424))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(BulletHolyLight*))(Il2CppBase() + 0x237D324))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(BulletHolyLight*))(Il2CppBase() + 0x237D8E4))(this);
	}

};

}
