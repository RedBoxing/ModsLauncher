#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampSinkFloor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampSinkFloor"));
	}

	template <typename T = void*> T& onColliderEnter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& onColliderExit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _collider2Ds() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _exclusiveSet() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T add_onColliderEnter(void* value) {
		return ((T (*)(SwampSinkFloor*, void*))(Il2CppBase() + 0x18BA0FC))(this, value);
	}
	template <typename T = void> T remove_onColliderEnter(void* value) {
		return ((T (*)(SwampSinkFloor*, void*))(Il2CppBase() + 0x18BD048))(this, value);
	}
	template <typename T = void> T add_onColliderExit(void* value) {
		return ((T (*)(SwampSinkFloor*, void*))(Il2CppBase() + 0x18BA1E8))(this, value);
	}
	template <typename T = void> T remove_onColliderExit(void* value) {
		return ((T (*)(SwampSinkFloor*, void*))(Il2CppBase() + 0x18BD134))(this, value);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(SwampSinkFloor*, uintptr_t))(Il2CppBase() + 0x18BD220))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(SwampSinkFloor*, uintptr_t))(Il2CppBase() + 0x18BD4E4))(this, other);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SwampSinkFloor*))(Il2CppBase() + 0x18BD7BC))(this);
	}

};

}
