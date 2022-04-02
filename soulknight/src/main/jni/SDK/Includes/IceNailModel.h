#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceNailModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceNailModel"));
	}

	template <typename T = uintptr_t> T& iceNailBullet() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& nailCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& extraNailCountFactor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& iceNailDurationRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsReleasing() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _sourceObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _camp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _roomTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _iceNailCounter() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _positionRollList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& _iceNailTargetPoints() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = bool> T get_IsReleasing() {
		return ((T (*)(IceNailModel*))(Il2CppBase() + 0x1DDBD08))(this);
	}
	template <typename T = void> T set_IsReleasing(bool value) {
		return ((T (*)(IceNailModel*, bool))(Il2CppBase() + 0x1DDF260))(this, value);
	}
	template <typename T = void> T StartReleaseNail(int32_t nodeCount, Il2CppList<uintptr_t>* availablePositions, uintptr_t roomTransform, uintptr_t damageGeneralModel) {
		return ((T (*)(IceNailModel*, int32_t, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DDE080))(this, nodeCount, availablePositions, roomTransform, damageGeneralModel);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IceNailModel*))(Il2CppBase() + 0x1DDBD10))(this);
	}

};

}
