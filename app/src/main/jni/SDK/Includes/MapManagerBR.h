#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManagerBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManagerBR"));
	}

	template <typename T = uintptr_t> T& fogPrefab() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = uintptr_t> T& boss_room_obj() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& trash_room_prefab() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& time_counter_prefab() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& init_weapon_platform() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pure_mode_init_weapons() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& ghostEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uintptr_t> T& bgm_puremode() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = int32_t> static T& MAP_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_bgm() {
		return ((T (*)(MapManagerBR*))(Il2CppBase() + 0x430278C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MapManagerBR*))(Il2CppBase() + 0x4302940))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MapManagerBR*))(Il2CppBase() + 0x4302C8C))(this);
	}
	template <typename T = void> T AfterInitCharacterWeapons(uintptr_t e) {
		return ((T (*)(MapManagerBR*, uintptr_t))(Il2CppBase() + 0x4302D70))(this, e);
	}
	template <typename T = void> T CreateMap() {
		return ((T (*)(MapManagerBR*))(Il2CppBase() + 0x4302FEC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_bgm() {
		return ((T (*)(MapManagerBR*))(Il2CppBase() + 0x4304728))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(MapManagerBR*))(Il2CppBase() + 0x430472C))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateMap() {
		return ((T (*)(MapManagerBR*))(Il2CppBase() + 0x4304734))(this);
	}

};

}
