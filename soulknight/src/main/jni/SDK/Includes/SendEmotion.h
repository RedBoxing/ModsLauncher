#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SendEmotion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendEmotion"));
	}

	template <typename T = int32_t> T& emoticonId() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
