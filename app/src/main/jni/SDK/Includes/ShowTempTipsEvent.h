#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowTempTipsEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowTempTipsEvent"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& showTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& needLocalized() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
