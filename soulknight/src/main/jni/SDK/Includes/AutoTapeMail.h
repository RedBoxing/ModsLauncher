#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AutoTapeMail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoTapeMail"));
	}

	template <typename T = Il2CppString*> T& skin_series_key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& tape() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
