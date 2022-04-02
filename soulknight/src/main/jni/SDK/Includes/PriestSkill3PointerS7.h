#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PriestSkill3PointerS7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriestSkill3PointerS7"));
	}

	template <typename T = Il2CppVector3> T& localPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& count3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& count4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& canRotate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _currentCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _isLight() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Init(uintptr_t controller) {
		return ((T (*)(PriestSkill3PointerS7*, uintptr_t))(Il2CppBase() + 0x43A5DB8))(this, controller);
	}
	template <typename T = void> T Flush(int32_t maxCount) {
		return ((T (*)(PriestSkill3PointerS7*, int32_t))(Il2CppBase() + 0x43A5E74))(this, maxCount);
	}
	template <typename T = void> T AddShadow(int32_t maxCount) {
		return ((T (*)(PriestSkill3PointerS7*, int32_t))(Il2CppBase() + 0x43A5FF4))(this, maxCount);
	}
	template <typename T = void> T ReleaseShadow(int32_t maxCount) {
		return ((T (*)(PriestSkill3PointerS7*, int32_t))(Il2CppBase() + 0x43A6078))(this, maxCount);
	}
	template <typename T = void> T ToNormalMode(int32_t maxCount) {
		return ((T (*)(PriestSkill3PointerS7*, int32_t))(Il2CppBase() + 0x43A60FC))(this, maxCount);
	}
	template <typename T = void> T ToShadowMode(int32_t maxCount) {
		return ((T (*)(PriestSkill3PointerS7*, int32_t))(Il2CppBase() + 0x43A6180))(this, maxCount);
	}
	template <typename T = void> T FlushCount(int32_t maxCount) {
		return ((T (*)(PriestSkill3PointerS7*, int32_t))(Il2CppBase() + 0x43A5EEC))(this, maxCount);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PriestSkill3PointerS7*))(Il2CppBase() + 0x43A6554))(this);
	}

};

}
