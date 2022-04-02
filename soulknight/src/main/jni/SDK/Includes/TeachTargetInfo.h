#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TeachTargetInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeachTargetInfo"));
	}

	template <typename T = Il2CppString*> T& canvas_name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& canvas_path() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
