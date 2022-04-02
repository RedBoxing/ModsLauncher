#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FestivalDecorate {

class FestivalDecorateMultiTimeProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FestivalDecorate", "FestivalDecorateMultiTimeProvider"));
	}

	template <typename T = uintptr_t> T& timeMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_DateTime() {
		return ((T (*)(FestivalDecorateMultiTimeProvider*))(Il2CppBase() + 0x447622C))(this);
	}

};

}
