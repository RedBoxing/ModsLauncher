#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemSellLimit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemSellLimit"));
	}

	template <typename T = bool> T& isIOSChannel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> static T& MAX_CAN_BUY_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemSellLimit*))(Il2CppBase() + 0x1CDD9D4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ItemSellLimit*))(Il2CppBase() + 0x1CDDD28))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemSellLimit*, uintptr_t))(Il2CppBase() + 0x1CDDE18))(this, controller);
	}
	template <typename T = void> T CheckNeedShowNewPlayerPkg(uintptr_t e) {
		return ((T (*)(ItemSellLimit*, uintptr_t))(Il2CppBase() + 0x1CDDFC0))(this, e);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(ItemSellLimit*))(Il2CppBase() + 0x1CDE1B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemSellLimit*, uintptr_t))(Il2CppBase() + 0x1CDE1B8))(this, P0);
	}

};

}
