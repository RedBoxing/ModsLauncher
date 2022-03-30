#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class ArabicMapping
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "ArabicMapping"));
	}

	template <typename T = int32_t> T& from() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& to() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
