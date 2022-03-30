#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBEnemyMaker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBEnemyMaker"));
	}


	template <typename T = uintptr_t> T get_roomInfo() {
		return ((T (*)(SBEnemyMaker*))(Il2CppBase() + 0x18088EC))(this);
	}
	template <typename T = uintptr_t> T get_mapManagerLevel() {
		return ((T (*)(SBEnemyMaker*))(Il2CppBase() + 0x18089F0))(this);
	}
	template <typename T = void> T StartEnemyMaker() {
		return ((T (*)(SBEnemyMaker*))(Il2CppBase() + 0x1808A9C))(this);
	}
	template <typename T = uintptr_t> T CreateEnemy() {
		return ((T (*)(SBEnemyMaker*))(Il2CppBase() + 0x1809114))(this);
	}
	template <typename T = void> T OnCreateEnemy(uintptr_t go) {
		return ((T (*)(SBEnemyMaker*, uintptr_t))(Il2CppBase() + 0x1809AAC))(this, go);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_mapManagerLevel() {
		return ((T (*)(SBEnemyMaker*))(Il2CppBase() + 0x1809CD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartEnemyMaker() {
		return ((T (*)(SBEnemyMaker*))(Il2CppBase() + 0x1809CD8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateEnemy() {
		return ((T (*)(SBEnemyMaker*))(Il2CppBase() + 0x1809CE0))(this);
	}

};

}
