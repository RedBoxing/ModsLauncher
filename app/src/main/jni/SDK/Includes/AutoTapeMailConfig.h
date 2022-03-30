#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AutoTapeMailConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoTapeMailConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x58);
	}


};

}
