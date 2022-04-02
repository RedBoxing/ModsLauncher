#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemSellPlaceSeller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemSellPlaceSeller"));
	}

	template <typename T = bool> T& reloadAfterSell() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& maxRefreshTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& refreshTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& group() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& originPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isReplacing() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& replacingPlace() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemSellPlaceSeller*))(Il2CppBase() + 0x1CE6668))(this);
	}
	template <typename T = void> T ResetChangeCount(bool addPlaceCount) {
		return ((T (*)(ItemSellPlaceSeller*, bool))(Il2CppBase() + 0x1CE6398))(this, addPlaceCount);
	}
	template <typename T = void> T ChangeCommodity(uintptr_t sellPlace) {
		return ((T (*)(ItemSellPlaceSeller*, uintptr_t))(Il2CppBase() + 0x1CE648C))(this, sellPlace);
	}
	template <typename T = void> T CheckReplace() {
		return ((T (*)(ItemSellPlaceSeller*))(Il2CppBase() + 0x1CE66F0))(this);
	}
	template <typename T = void> T DoChangeCommodity(uintptr_t sellPlace) {
		return ((T (*)(ItemSellPlaceSeller*, uintptr_t))(Il2CppBase() + 0x1CE68BC))(this, sellPlace);
	}
	template <typename T = void> T BackToOriginPos() {
		return ((T (*)(ItemSellPlaceSeller*))(Il2CppBase() + 0x1CE6BCC))(this);
	}
	template <typename T = void> T BackToOriginPosb__12_0() {
		return ((T (*)(ItemSellPlaceSeller*))(Il2CppBase() + 0x1CE6E3C))(this);
	}

};

}
