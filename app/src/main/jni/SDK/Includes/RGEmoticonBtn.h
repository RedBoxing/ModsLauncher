#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGEmoticonBtn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGEmoticonBtn"));
	}


	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(RGEmoticonBtn*, uintptr_t))(Il2CppBase() + 0x1C3FFA8))(this, eventData);
	}

};

}
