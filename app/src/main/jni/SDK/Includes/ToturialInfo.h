#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ToturialInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToturialInfo"));
	}

	template <typename T = Il2CppString*> T& eventType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& param_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& trigger_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& is_complete() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
