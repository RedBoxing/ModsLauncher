#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopDrink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopDrink"));
	}

	template <typename T = void*> static T& floatTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& effectType() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& intValue() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& floatValue() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppString*> T& drinkId() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& statueIndex() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& mercenary() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& hidingWeapon() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = bool> T get_showIcon() {
		return ((T (*)(TroopDrink*))(Il2CppBase() + 0x440BCD4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TroopDrink*))(Il2CppBase() + 0x440BD3C))(this);
	}
	template <typename T = void> T ShowItemInfo() {
		return ((T (*)(TroopDrink*))(Il2CppBase() + 0x440C010))(this);
	}
	template <typename T = void> T MakeEffect(uintptr_t mercenary, bool playAnim) {
		return ((T (*)(TroopDrink*, uintptr_t, bool))(Il2CppBase() + 0x440C3BC))(this, mercenary, playAnim);
	}
	template <typename T = void> T DrinkAnim() {
		return ((T (*)(TroopDrink*))(Il2CppBase() + 0x440CD64))(this);
	}
	template <typename T = void> T DrinkEffect() {
		return ((T (*)(TroopDrink*))(Il2CppBase() + 0x440CFC8))(this);
	}
	template <typename T = Il2CppString*> T GiveDrinkText(uintptr_t m) {
		return ((T (*)(TroopDrink*, uintptr_t))(Il2CppBase() + 0x440D1C8))(this, m);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(TroopDrink*))(Il2CppBase() + 0x440D414))(this);
	}
	template <typename T = bool> T CanDrink(uintptr_t troopMercenary) {
		return ((T (*)(TroopDrink*, uintptr_t))(Il2CppBase() + 0x440D4E8))(this, troopMercenary);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(TroopDrink*))(Il2CppBase() + 0x440D8D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowItemInfo() {
		return ((T (*)(TroopDrink*))(Il2CppBase() + 0x440D8E0))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(TroopDrink*))(Il2CppBase() + 0x440D8E8))(this);
	}

};

}
