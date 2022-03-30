#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSkill"));
	}

	template <typename T = Il2CppString*> T& weaponNameId() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& destroyed() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunSkill*))(Il2CppBase() + 0x2177DA4))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunSkill*))(Il2CppBase() + 0x2177E68))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(GunSkill*))(Il2CppBase() + 0x2177EE8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(GunSkill*))(Il2CppBase() + 0x2177FD8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunSkill*))(Il2CppBase() + 0x2178190))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunSkill*))(Il2CppBase() + 0x2178198))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(GunSkill*))(Il2CppBase() + 0x21781A0))(this);
	}

};

}
