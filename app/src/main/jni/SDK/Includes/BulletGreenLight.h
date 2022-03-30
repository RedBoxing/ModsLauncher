#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletGreenLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletGreenLight"));
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
	template <typename T = bool> T& strengthen() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = uintptr_t> T& armor_buff() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& hpValue() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletGreenLight*))(Il2CppBase() + 0x237C3E4))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletGreenLight*, uintptr_t))(Il2CppBase() + 0x237C494))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletGreenLight*))(Il2CppBase() + 0x237C648))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletGreenLight*))(Il2CppBase() + 0x237C6A8))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(BulletGreenLight*))(Il2CppBase() + 0x237C5A4))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(BulletGreenLight*))(Il2CppBase() + 0x237CD84))(this);
	}

};

}
