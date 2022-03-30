#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass921
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass92_1"));
	}

	template <typename T = bool> T& hostStart() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 9__2() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T BuildRoomRemoteb__1() {
		return ((T (*)(cDisplayClass921*))(Il2CppBase() + 0x436FA4C))(this);
	}
	template <typename T = void> T BuildRoomRemoteb__2() {
		return ((T (*)(cDisplayClass921*))(Il2CppBase() + 0x436FB00))(this);
	}

};

}
