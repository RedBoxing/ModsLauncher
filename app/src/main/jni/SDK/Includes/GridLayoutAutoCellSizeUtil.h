#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GridLayoutAutoCellSizeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GridLayoutAutoCellSizeUtil"));
	}

	template <typename T = int32_t> T& RLWidth() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GridLayoutAutoCellSizeUtil*))(Il2CppBase() + 0x461DEF0))(this);
	}

};

}
