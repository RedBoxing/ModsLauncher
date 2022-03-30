#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomMovePos
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomMovePos"));
	}

	template <typename T = uintptr_t> T& pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& x() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& y() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
