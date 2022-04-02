#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace VacantWall {

class VacantWallListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VacantWall", "VacantWallListener"));
	}

	template <typename T = uintptr_t> T& attachedRoom() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& attachedAisle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> static T& onTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T add_onTriggerEnter(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4356164))(0, value);
	}
	template <typename T = void> static T remove_onTriggerEnter(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4356260))(0, value);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(VacantWallListener*, uintptr_t))(Il2CppBase() + 0x435635C))(this, other);
	}

};

}
