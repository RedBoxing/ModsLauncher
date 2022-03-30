#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChoseSkinConfirm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChoseSkinConfirm"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
