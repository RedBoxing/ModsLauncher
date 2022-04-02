#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun007BulletModifyProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun007BulletModifyProcessor"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& processorCache() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_WeaponType() {
		return ((T (*)(Gun007BulletModifyProcessor*))(Il2CppBase() + 0x4625958))(this);
	}
	template <typename T = void> T MakeEffect(uintptr_t bulletModify, uintptr_t weapon) {
		return ((T (*)(Gun007BulletModifyProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46259E4))(this, bulletModify, weapon);
	}
	template <typename T = void> T RemoveEffect(uintptr_t bulletModify, uintptr_t weapon) {
		return ((T (*)(Gun007BulletModifyProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4625D10))(this, bulletModify, weapon);
	}

};

}
