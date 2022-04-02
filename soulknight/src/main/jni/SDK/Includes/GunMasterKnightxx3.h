#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMasterKnightxx3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMasterKnightxx3"));
	}

	template <typename T = uintptr_t> T& max_audio_clip() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& knight() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& changer() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppVector3>*> static T& originHandPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _sprite_renderer() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}

	template <typename T = uintptr_t> T get_sprite_renderer() {
		return ((T (*)(GunMasterKnightxx3*))(Il2CppBase() + 0x2283D2C))(this);
	}
	template <typename T = void> T SetController(uintptr_t controller) {
		return ((T (*)(GunMasterKnightxx3*, uintptr_t))(Il2CppBase() + 0x2283E38))(this, controller);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunMasterKnightxx3*))(Il2CppBase() + 0x2283F30))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunMasterKnightxx3*))(Il2CppBase() + 0x22841C8))(this);
	}
	template <typename T = void> T SkillStart(int32_t skill_index) {
		return ((T (*)(GunMasterKnightxx3*, int32_t))(Il2CppBase() + 0x2284678))(this, skill_index);
	}
	template <typename T = void> T SkillEnd() {
		return ((T (*)(GunMasterKnightxx3*))(Il2CppBase() + 0x22847F4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunMasterKnightxx3*))(Il2CppBase() + 0x2284850))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetController(uintptr_t P0) {
		return ((T (*)(GunMasterKnightxx3*, uintptr_t))(Il2CppBase() + 0x2284C64))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunMasterKnightxx3*))(Il2CppBase() + 0x2284C6C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunMasterKnightxx3*))(Il2CppBase() + 0x2284C74))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(GunMasterKnightxx3*))(Il2CppBase() + 0x2284C7C))(this);
	}

};

}
