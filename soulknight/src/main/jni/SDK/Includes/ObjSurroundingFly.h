#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjSurroundingFly
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjSurroundingFly"));
	}

	template <typename T = uintptr_t> T& center() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& minDistanceToCenter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& maxDistanceToCenter() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& flyToInitPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& turnDirectionProbability() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& maxTurnDirectionAngle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& _turnLeftCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _turnRightCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& currentDestPos() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjSurroundingFly*))(Il2CppBase() + 0x453AA80))(this);
	}
	template <typename T = void> T InitPos(bool fly) {
		return ((T (*)(ObjSurroundingFly*, bool))(Il2CppBase() + 0x453AAE4))(this, fly);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ObjSurroundingFly*))(Il2CppBase() + 0x453AD40))(this);
	}

};

}
