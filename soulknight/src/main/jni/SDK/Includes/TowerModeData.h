#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TowerModeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TowerModeData"));
	}

	template <typename T = uintptr_t> T& nodes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& position() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_currentNode() {
		return ((T (*)(TowerModeData*))(Il2CppBase() + 0x1E47D48))(this);
	}
	template <typename T = uintptr_t> T GetNode(int32_t x, int32_t y) {
		return ((T (*)(TowerModeData*, int32_t, int32_t))(Il2CppBase() + 0x1E47DB4))(this, x, y);
	}

};

}
