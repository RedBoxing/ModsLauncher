#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpritePreviewAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpritePreviewAttribute"));
	}

	template <typename T = float> T& imageHeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
