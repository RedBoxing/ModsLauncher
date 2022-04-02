#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRoomSkinChangeCameraColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRoomSkinChangeCameraColor"));
	}

	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MultiRoomSkinChangeCameraColor*))(Il2CppBase() + 0x4376E4C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MultiRoomSkinChangeCameraColor*))(Il2CppBase() + 0x4376FF8))(this);
	}

};

}
