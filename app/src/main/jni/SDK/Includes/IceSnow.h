#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceSnow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceSnow"));
	}

	template <typename T = uintptr_t> T& particlePrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& snowDensity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& roomOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& scaleExtra() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& particleOffset() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnRoomStart(uintptr_t room) {
		return ((T (*)(IceSnow*, uintptr_t))(Il2CppBase() + 0x19C32D4))(this, room);
	}
	template <typename T = void> T CreateRoomSnow(uintptr_t room) {
		return ((T (*)(IceSnow*, uintptr_t))(Il2CppBase() + 0x19C34B0))(this, room);
	}
	template <typename T = void> T CreateAisleSnow(uintptr_t aisle) {
		return ((T (*)(IceSnow*, uintptr_t))(Il2CppBase() + 0x19C3630))(this, aisle);
	}
	template <typename T = void> T CreateSnow(Il2CppVector3 position, float width, float height) {
		return ((T (*)(IceSnow*, Il2CppVector3, float, float))(Il2CppBase() + 0x19C377C))(this, position, width, height);
	}

};

}
