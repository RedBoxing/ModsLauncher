#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FestivalDecorate {

class ITimeProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FestivalDecorate", "ITimeProvider"));
	}


	template <typename T = uintptr_t> T get_DateTime() {
		return ((T (*)(ITimeProvider*))(Il2CppBase() + 0x0))(this);
	}

};

}
