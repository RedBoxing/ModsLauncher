#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteMap"));
	}

	template <typename T = uintptr_t> static T& _weaponSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _pickableSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _pickableFlagSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _boss_white_edge_sprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _specialTicketSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& _multiRoomSkinSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& _commonSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& name2Sprite() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> static T get_weaponSprite() {
		return ((T (*)(void *))(Il2CppBase() + 0x4296FE0))(0);
	}
	template <typename T = uintptr_t> static T get_pickableSprite() {
		return ((T (*)(void *))(Il2CppBase() + 0x42970D4))(0);
	}
	template <typename T = uintptr_t> static T get_pickableFlagSprite() {
		return ((T (*)(void *))(Il2CppBase() + 0x42971CC))(0);
	}
	template <typename T = uintptr_t> static T get_bossWiteEdgeSprite() {
		return ((T (*)(void *))(Il2CppBase() + 0x42972C4))(0);
	}
	template <typename T = uintptr_t> static T get_specialTicketSprite() {
		return ((T (*)(void *))(Il2CppBase() + 0x42973BC))(0);
	}
	template <typename T = uintptr_t> static T get_multiRoomSkinSprite() {
		return ((T (*)(void *))(Il2CppBase() + 0x42974B4))(0);
	}
	template <typename T = uintptr_t> static T get_commonSprite() {
		return ((T (*)(void *))(Il2CppBase() + 0x42975AC))(0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T GetName2Sprite() {
		return ((T (*)(SpriteMap*))(Il2CppBase() + 0x42976A8))(this);
	}
	template <typename T = uintptr_t> T GetSprite(Il2CppString* name) {
		return ((T (*)(SpriteMap*, Il2CppString*))(Il2CppBase() + 0x4297708))(this, name);
	}
	template <typename T = void> T SetDictionary(Il2CppDictionary<Il2CppString*, uintptr_t>* dic) {
		return ((T (*)(SpriteMap*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x42977F8))(this, dic);
	}

};

}
