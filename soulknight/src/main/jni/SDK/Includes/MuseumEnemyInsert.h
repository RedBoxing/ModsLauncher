#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MuseumEnemyInsert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MuseumEnemyInsert"));
	}

	template <typename T = Il2CppString*> T& enemyId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& enemyLevel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& enemyInfo() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& enemyIcon() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T InsertItemInfo(uintptr_t addedItem) {
		return ((T (*)(MuseumEnemyInsert*, uintptr_t))(Il2CppBase() + 0x437B058))(this, addedItem);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(MuseumEnemyInsert*))(Il2CppBase() + 0x437B33C))(this);
	}
	template <typename T = void> T iFixBaseProxy_InsertItemInfo(uintptr_t P0) {
		return ((T (*)(MuseumEnemyInsert*, uintptr_t))(Il2CppBase() + 0x437B478))(this, P0);
	}

};

}
