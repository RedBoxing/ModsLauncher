#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class H5ParamStruct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "H5ParamStruct"));
	}

	template <typename T = Il2CppString*> T& uid() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
