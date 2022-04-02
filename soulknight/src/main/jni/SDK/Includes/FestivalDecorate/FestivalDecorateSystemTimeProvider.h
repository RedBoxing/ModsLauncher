#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FestivalDecorate {

class FestivalDecorateSystemTimeProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FestivalDecorate", "FestivalDecorateSystemTimeProvider"));
	}


	template <typename T = uintptr_t> T get_DateTime() {
		return ((T (*)(FestivalDecorateSystemTimeProvider*))(Il2CppBase() + 0x4476DE4))(this);
	}

};

}
