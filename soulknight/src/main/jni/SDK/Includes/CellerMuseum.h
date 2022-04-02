#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CellerMuseum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CellerMuseum"));
	}

	template <typename T = uintptr_t> T& floor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& booth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& boothLarge() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& seasonPrize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& barrierRight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& barrierLeft() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& floorMap() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CellerMuseum*))(Il2CppBase() + 0x186EAF0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CellerMuseum*))(Il2CppBase() + 0x186EBA8))(this);
	}
	template <typename T = void> T CreateFloor(Il2CppVector3 position) {
		return ((T (*)(CellerMuseum*, Il2CppVector3))(Il2CppBase() + 0x186DD94))(this, position);
	}

};

}
