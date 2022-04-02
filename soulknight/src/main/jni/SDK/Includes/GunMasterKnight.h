#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMasterKnight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMasterKnight"));
	}

	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& max_audio_clip() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& master_skin_index() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& master2_skin_index() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& master_skill_sprites() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& init_sprite() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _sprite_renderer() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& is_master_knight() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = bool> T& is_master_knight2() {
		return *(T*)((uintptr_t)this + 0x1D9);
	}
	template <typename T = uintptr_t> T& knight() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = void*> T& skillListenerCache() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}

	template <typename T = uintptr_t> T get_sprite_renderer() {
		return ((T (*)(GunMasterKnight*))(Il2CppBase() + 0x2282D5C))(this);
	}
	template <typename T = void> T SetController(uintptr_t controller) {
		return ((T (*)(GunMasterKnight*, uintptr_t))(Il2CppBase() + 0x2282E68))(this, controller);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunMasterKnight*))(Il2CppBase() + 0x2283210))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunMasterKnight*))(Il2CppBase() + 0x228342C))(this);
	}
	template <typename T = void> T SkillStart(int32_t skill_index) {
		return ((T (*)(GunMasterKnight*, int32_t))(Il2CppBase() + 0x2283620))(this, skill_index);
	}
	template <typename T = void> T SkillEnd() {
		return ((T (*)(GunMasterKnight*))(Il2CppBase() + 0x22836EC))(this);
	}
	template <typename T = void> T Master2SkillStart(int32_t skill_index) {
		return ((T (*)(GunMasterKnight*, int32_t))(Il2CppBase() + 0x228376C))(this, skill_index);
	}
	template <typename T = void> T Master2SkillEnd() {
		return ((T (*)(GunMasterKnight*))(Il2CppBase() + 0x22838C8))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunMasterKnight*))(Il2CppBase() + 0x2283A18))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetController(uintptr_t P0) {
		return ((T (*)(GunMasterKnight*, uintptr_t))(Il2CppBase() + 0x2283D0C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunMasterKnight*))(Il2CppBase() + 0x2283D14))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunMasterKnight*))(Il2CppBase() + 0x2283D1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(GunMasterKnight*))(Il2CppBase() + 0x2283D24))(this);
	}

};

}
