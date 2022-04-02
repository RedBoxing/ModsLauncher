#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LogPostResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LogPostResult"));
	}

	template <typename T = int32_t> T& err() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& msg() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
