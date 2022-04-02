#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRoomSkinSandWorm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRoomSkinSandWorm"));
	}

	template <typename T = Il2CppList<Il2CppVector3>*> T& randomMovePoints() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& run_start_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MultiRoomSkinSandWorm*))(Il2CppBase() + 0x437A084))(this);
	}
	template <typename T = void> T RandomMove() {
		return ((T (*)(MultiRoomSkinSandWorm*))(Il2CppBase() + 0x437A120))(this);
	}
	template <typename T = void> T RandomMoveb__4_0() {
		return ((T (*)(MultiRoomSkinSandWorm*))(Il2CppBase() + 0x437A58C))(this);
	}
	template <typename T = void> T RandomMoveb__4_1() {
		return ((T (*)(MultiRoomSkinSandWorm*))(Il2CppBase() + 0x437A5F4))(this);
	}
	template <typename T = void> T RandomMoveb__4_2() {
		return ((T (*)(MultiRoomSkinSandWorm*))(Il2CppBase() + 0x437A65C))(this);
	}

};

}
