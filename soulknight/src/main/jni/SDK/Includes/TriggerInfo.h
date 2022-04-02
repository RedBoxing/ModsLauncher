#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TriggerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerInfo"));
	}

	template <typename T = Il2CppString*> T& trigger_method() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& param_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
