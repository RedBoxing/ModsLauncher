#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemDrinkAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemDrinkAttribute"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& attributeChanges() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& wholeBattle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& mark() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& drinkEvent() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& attribute2Icon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T DrinkEffect() {
		return ((T (*)(ItemDrinkAttribute*))(Il2CppBase() + 0x1D9FD30))(this);
	}
	template <typename T = void> T ShowDrinkEffect(uintptr_t controller) {
		return ((T (*)(ItemDrinkAttribute*, uintptr_t))(Il2CppBase() + 0x1DA028C))(this, controller);
	}
	template <typename T = void> T ChangeAttribute(uintptr_t controller, uintptr_t battleData) {
		return ((T (*)(ItemDrinkAttribute*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA003C))(this, controller, battleData);
	}
	template <typename T = void> T ShowItemInfo() {
		return ((T (*)(ItemDrinkAttribute*))(Il2CppBase() + 0x1DA03EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_DrinkEffect() {
		return ((T (*)(ItemDrinkAttribute*))(Il2CppBase() + 0x1DA0A90))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowItemInfo() {
		return ((T (*)(ItemDrinkAttribute*))(Il2CppBase() + 0x1DA0A94))(this);
	}

};

}
