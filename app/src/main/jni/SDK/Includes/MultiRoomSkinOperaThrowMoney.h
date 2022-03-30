#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRoomSkinOperaThrowMoney
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRoomSkinOperaThrowMoney"));
	}

	template <typename T = uintptr_t> T& coin_prefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& leftThrowPoint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rightThrowPoint() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& cheerClip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(MultiRoomSkinOperaThrowMoney*))(Il2CppBase() + 0x4379704))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MultiRoomSkinOperaThrowMoney*))(Il2CppBase() + 0x4379874))(this);
	}
	template <typename T = void> T ThrowMoney() {
		return ((T (*)(MultiRoomSkinOperaThrowMoney*))(Il2CppBase() + 0x43799E4))(this);
	}
	template <typename T = void> T EnableRGCoin() {
		return ((T (*)(MultiRoomSkinOperaThrowMoney*))(Il2CppBase() + 0x4379CDC))(this);
	}

};

}
