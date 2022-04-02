#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRoomSkinBird
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRoomSkinBird"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& imgTrans() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& Fly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MultiRoomSkinBird*))(Il2CppBase() + 0x43767C8))(this);
	}
	template <typename T = uintptr_t> T FlyLoop() {
		return ((T (*)(MultiRoomSkinBird*))(Il2CppBase() + 0x43768A8))(this);
	}
	template <typename T = void> T FlyLoopb__4_0() {
		return ((T (*)(MultiRoomSkinBird*))(Il2CppBase() + 0x43769F4))(this);
	}

};

}
