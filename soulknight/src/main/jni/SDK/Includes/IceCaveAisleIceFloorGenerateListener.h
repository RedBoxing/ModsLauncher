#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceCaveAisleIceFloorGenerateListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceCaveAisleIceFloorGenerateListener"));
	}

	template <typename T = float> T& aisleIceExtraFriction() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnInstantiateIceFloor(uintptr_t iceFloorObject) {
		return ((T (*)(IceCaveAisleIceFloorGenerateListener*, uintptr_t))(Il2CppBase() + 0x19B7AB0))(this, iceFloorObject);
	}

};

}
