#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SupplymentBoatControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SupplymentBoatControl"));
	}

	template <typename T = uintptr_t> T& room() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& supplymentBoatPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& supplymentBoat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _passedTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _cannonBallInterval() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sequence() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Create(uintptr_t room) {
		return ((T (*)(SupplymentBoatControl*, uintptr_t))(Il2CppBase() + 0x1A439B0))(this, room);
	}
	template <typename T = void> T Update(float dt) {
		return ((T (*)(SupplymentBoatControl*, float))(Il2CppBase() + 0x1A446A0))(this, dt);
	}
	template <typename T = void> T Updateb__7_0() {
		return ((T (*)(SupplymentBoatControl*))(Il2CppBase() + 0x1A45A1C))(this);
	}

};

}
