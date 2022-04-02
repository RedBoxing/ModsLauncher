#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponInfo"));
	}

	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& weapons() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& name2Weapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& level2Weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& type2Weapon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& melleWeaponTypes() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x449E07C))(0);
	}
	template <typename T = void> static T set_info(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449E5E8))(0, value);
	}
	template <typename T = void> static T Sort() {
		return ((T (*)(void *))(Il2CppBase() + 0x449E67C))(0);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x449E7CC))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x449E11C))(0);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x449E85C))(0);
	}
	template <typename T = Il2CppString*> T GetWeaponWithType(uintptr_t type, int32_t rowLevel, uintptr_t rg_random, void* excludeFilter, Il2CppList<Il2CppString*>* invalidWeapons) {
		return ((T (*)(WeaponInfo*, uintptr_t, int32_t, uintptr_t, void*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x449E90C))(this, type, rowLevel, rg_random, excludeFilter, invalidWeapons);
	}
	template <typename T = Il2CppString*> T GetWeaponWithLevel(int32_t level, uintptr_t rg_random, int32_t tryCount, void* excludeFilter) {
		return ((T (*)(WeaponInfo*, int32_t, uintptr_t, int32_t, void*))(Il2CppBase() + 0x449F264))(this, level, rg_random, tryCount, excludeFilter);
	}
	template <typename T = bool> T WeaponUnlock(Il2CppString* weaponName) {
		return ((T (*)(WeaponInfo*, Il2CppString*))(Il2CppBase() + 0x449EFA4))(this, weaponName);
	}

};

}
