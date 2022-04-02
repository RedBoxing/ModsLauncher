#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGStartRoomEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGStartRoomEvent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& object1_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& object2_list() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& object3_list() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& object4_list() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGStartRoomEvent*))(Il2CppBase() + 0x43D9F6C))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(RGStartRoomEvent*, int32_t))(Il2CppBase() + 0x43D9FC8))(this, seed);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(RGStartRoomEvent*, int32_t))(Il2CppBase() + 0x43DAE04))(this, P0);
	}

};

}
