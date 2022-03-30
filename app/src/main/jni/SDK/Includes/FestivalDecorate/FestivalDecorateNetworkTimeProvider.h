#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FestivalDecorate {

class FestivalDecorateNetworkTimeProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FestivalDecorate", "FestivalDecorateNetworkTimeProvider"));
	}


	template <typename T = uintptr_t> T get_DateTime() {
		return ((T (*)(FestivalDecorateNetworkTimeProvider*))(Il2CppBase() + 0x4476348))(this);
	}

};

}
