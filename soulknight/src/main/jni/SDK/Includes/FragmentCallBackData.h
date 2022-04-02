#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FragmentCallBackData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FragmentCallBackData"));
	}

	template <typename T = bool> T& IsSuccess() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
