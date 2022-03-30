#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HighlightInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HighlightInfo"));
	}

	template <typename T = uintptr_t> T& select() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& scrollRect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& targetType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& heightlightSizeScene() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
