#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Explode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Explode"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& big_clip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& small_clip() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = bool> T& small() {
		return *(T*)((uintptr_t)this + 0xCA);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& buff_fire() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& fire_rate() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& smoke_object() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& keepSmoke() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& is_explode_box() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& effectTriggers() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Explode*))(Il2CppBase() + 0x4464AE8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Explode*))(Il2CppBase() + 0x4464B98))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(Explode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4464C80))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(Explode*, uintptr_t))(Il2CppBase() + 0x4464E9C))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(Explode*))(Il2CppBase() + 0x4464FDC))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(Explode*, uintptr_t))(Il2CppBase() + 0x446503C))(this, other);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(Explode*))(Il2CppBase() + 0x4466338))(this);
	}
	template <typename T = void> T SetExplodeBox() {
		return ((T (*)(Explode*))(Il2CppBase() + 0x446692C))(this);
	}
	template <typename T = void> T FlushInfo() {
		return ((T (*)(Explode*))(Il2CppBase() + 0x4466990))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(Explode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4466B2C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetSourceObject(uintptr_t P0) {
		return ((T (*)(Explode*, uintptr_t))(Il2CppBase() + 0x4466B80))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetSourceObject() {
		return ((T (*)(Explode*))(Il2CppBase() + 0x4466B88))(this);
	}

};

}
