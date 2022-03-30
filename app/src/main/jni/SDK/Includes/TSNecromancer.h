#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSNecromancer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSNecromancer"));
	}

	template <typename T = int32_t> T& range() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& deadCache() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSNecromancer*))(Il2CppBase() + 0x18C9964))(this);
	}
	template <typename T = void> T CreateRebornMarkEffect(uintptr_t enemy) {
		return ((T (*)(TSNecromancer*, uintptr_t))(Il2CppBase() + 0x18CA6DC))(this, enemy);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindDeads(int32_t range, bool throughWall) {
		return ((T (*)(TSNecromancer*, int32_t, bool))(Il2CppBase() + 0x18CA0E0))(this, range, throughWall);
	}
	template <typename T = void> T Scan() {
		return ((T (*)(TSNecromancer*))(Il2CppBase() + 0x18CAAF8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSNecromancer*))(Il2CppBase() + 0x18CAC30))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scan() {
		return ((T (*)(TSNecromancer*))(Il2CppBase() + 0x18CAC38))(this);
	}

};

}
