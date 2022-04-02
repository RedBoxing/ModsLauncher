#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SaveADT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SaveADT"));
	}

	template <typename T = int32_t> T& retcode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& msg() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
