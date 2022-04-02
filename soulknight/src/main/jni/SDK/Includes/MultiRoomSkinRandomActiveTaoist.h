#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRoomSkinRandomActiveTaoist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRoomSkinRandomActiveTaoist"));
	}

	template <typename T = uintptr_t> T& taoist() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& interval() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MultiRoomSkinRandomActiveTaoist*))(Il2CppBase() + 0x4379DE4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MultiRoomSkinRandomActiveTaoist*))(Il2CppBase() + 0x4379E74))(this);
	}
	template <typename T = void> T RandomActiveTaoist() {
		return ((T (*)(MultiRoomSkinRandomActiveTaoist*))(Il2CppBase() + 0x4379F10))(this);
	}

};

}
