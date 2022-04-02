#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TextSpriteInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextSpriteInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& vertices() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& uv() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
