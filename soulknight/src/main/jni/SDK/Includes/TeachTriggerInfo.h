#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TeachTriggerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeachTriggerInfo"));
	}

	template <typename T = Il2CppString*> T& canvas_name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& canvas_path() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& trigger_method() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& param() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
