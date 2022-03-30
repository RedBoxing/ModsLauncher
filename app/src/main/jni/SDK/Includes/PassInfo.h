#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PassInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PassInfo"));
	}

	template <typename T = uintptr_t> T& game_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& character() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& skin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& skill() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& weapon_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& weapon_items() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& badass() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& pass_time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& cost_time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& magic_stone_idx() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& kill_count() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& accumulated_coint_value() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& deal_damage() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& customData() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& pass_game_version() {
		return *(T*)((uintptr_t)this + 0x60);
	}


};

}
