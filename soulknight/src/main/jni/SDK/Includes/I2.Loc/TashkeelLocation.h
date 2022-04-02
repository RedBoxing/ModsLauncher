#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class TashkeelLocation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "TashkeelLocation"));
	}

	template <typename T = char> T& tashkeel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
