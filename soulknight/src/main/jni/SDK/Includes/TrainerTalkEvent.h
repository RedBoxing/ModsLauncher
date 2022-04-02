#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TrainerTalkEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrainerTalkEvent"));
	}

	template <typename T = int32_t> T& trainer_talk_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& talk_idx() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
