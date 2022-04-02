#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceCaveFloorGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceCaveFloorGenerator"));
	}

	template <typename T = uintptr_t> T& iceFloorPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& hasAisleMargin() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& aisleWidth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& bossRoomCoverage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& aisleIceCoverage() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& fullIceRate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& onInstantiateIceFloorEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& onInstantiateAisleIceFloorEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<int32_t>*> T& exclusiveRoomTypes() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& canGenerateIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T OnRoomCreated(uintptr_t room) {
		return ((T (*)(IceCaveFloorGenerator*, uintptr_t))(Il2CppBase() + 0x19B9910))(this, room);
	}
	template <typename T = bool> T CanGenerateFloorInRoom(uintptr_t room) {
		return ((T (*)(IceCaveFloorGenerator*, uintptr_t))(Il2CppBase() + 0x19B99E4))(this, room);
	}
	template <typename T = void> T GenerateIceFloorInRoom(uintptr_t room) {
		return ((T (*)(IceCaveFloorGenerator*, uintptr_t))(Il2CppBase() + 0x19B9B18))(this, room);
	}
	template <typename T = void> T GenerateIceFloorInAisle(uintptr_t room) {
		return ((T (*)(IceCaveFloorGenerator*, uintptr_t))(Il2CppBase() + 0x19BA0D8))(this, room);
	}
	template <typename T = Il2CppVector3> T GetAisleFloorCenterPosition(uintptr_t aisle) {
		return ((T (*)(IceCaveFloorGenerator*, uintptr_t))(Il2CppBase() + 0x19BB04C))(this, aisle);
	}
	template <typename T = uintptr_t> T GetAisleSize(uintptr_t rgAisle) {
		return ((T (*)(IceCaveFloorGenerator*, uintptr_t))(Il2CppBase() + 0x19BAF14))(this, rgAisle);
	}

};

}
