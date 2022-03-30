#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TrainerTalkInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrainerTalkInfo"));
	}

	template <typename T = Il2CppString*> T& talk() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& dur_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
