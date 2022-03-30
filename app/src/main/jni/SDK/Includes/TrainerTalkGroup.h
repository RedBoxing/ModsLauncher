#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TrainerTalkGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrainerTalkGroup"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& talk_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& loop() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
