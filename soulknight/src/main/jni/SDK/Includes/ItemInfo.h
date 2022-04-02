#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemInfo"));
	}

	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& blueprints() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& materials() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& seeds() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9B7A0))(0);
	}
	template <typename T = void> static T set_info(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DAA238))(0, value);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DAA2CC))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DAA100))(0);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DAA35C))(0);
	}
	template <typename T = bool> T IsBlueprint(Il2CppString* bluePrintName) {
		return ((T (*)(ItemInfo*, Il2CppString*))(Il2CppBase() + 0x1DAA40C))(this, bluePrintName);
	}
	template <typename T = bool> T IsBlueprintUnlocked(Il2CppString* bluePrintName) {
		return ((T (*)(ItemInfo*, Il2CppString*))(Il2CppBase() + 0x1DAA598))(this, bluePrintName);
	}
	template <typename T = bool> T IsBlueprintGot(Il2CppString* bluePrintName) {
		return ((T (*)(ItemInfo*, Il2CppString*))(Il2CppBase() + 0x1DAA810))(this, bluePrintName);
	}
	template <typename T = uintptr_t> T GetPickableType(Il2CppString* name) {
		return ((T (*)(ItemInfo*, Il2CppString*))(Il2CppBase() + 0x1DAAAEC))(this, name);
	}

};

}
