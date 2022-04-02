#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CommonMessageType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommonMessageType"));
	}

	template <typename T = int32_t> static T& EnemyAIMultiroomTreeDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
