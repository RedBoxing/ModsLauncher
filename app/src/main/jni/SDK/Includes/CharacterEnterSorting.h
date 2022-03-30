#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CharacterEnterSorting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterEnterSorting"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sortingSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sortingGroups() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _controllerSet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _sortingOrderModels() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CharacterEnterSorting*))(Il2CppBase() + 0x18762F0))(this);
	}
	template <typename T = void> T AddSortingObject(uintptr_t gameObject) {
		return ((T (*)(CharacterEnterSorting*, uintptr_t))(Il2CppBase() + 0x1876580))(this, gameObject);
	}
	template <typename T = void> T AddSortingObjectForce(uintptr_t gameObject) {
		return ((T (*)(CharacterEnterSorting*, uintptr_t))(Il2CppBase() + 0x18767B0))(this, gameObject);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CharacterEnterSorting*))(Il2CppBase() + 0x18768A8))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(CharacterEnterSorting*, uintptr_t))(Il2CppBase() + 0x1876B4C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(CharacterEnterSorting*, uintptr_t))(Il2CppBase() + 0x1876E60))(this, other);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CharacterEnterSorting*))(Il2CppBase() + 0x187709C))(this);
	}

};

}
