#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkInfo"));
	}

	template <typename T = Il2CppString*> T& talk_content() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& talk_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
