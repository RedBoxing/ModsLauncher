#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomTable"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& mahjongHeros() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RoomTable*))(Il2CppBase() + 0x1802F58))(this);
	}
	template <typename T = void> T ChangeToMahjong() {
		return ((T (*)(RoomTable*))(Il2CppBase() + 0x1802FDC))(this);
	}

};

}
