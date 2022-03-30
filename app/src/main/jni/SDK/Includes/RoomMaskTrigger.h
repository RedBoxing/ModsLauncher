#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomMaskTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomMaskTrigger"));
	}

	template <typename T = uintptr_t> T& leftObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rightObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& fadeSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RoomMaskTrigger*))(Il2CppBase() + 0x17FC4D8))(this);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t collision) {
		return ((T (*)(RoomMaskTrigger*, uintptr_t))(Il2CppBase() + 0x17FC644))(this, collision);
	}
	template <typename T = uintptr_t> T ShowingObject(uintptr_t target) {
		return ((T (*)(RoomMaskTrigger*, uintptr_t))(Il2CppBase() + 0x17FC844))(this, target);
	}
	template <typename T = uintptr_t> T HidingObject(uintptr_t target) {
		return ((T (*)(RoomMaskTrigger*, uintptr_t))(Il2CppBase() + 0x17FC924))(this, target);
	}

};

}
