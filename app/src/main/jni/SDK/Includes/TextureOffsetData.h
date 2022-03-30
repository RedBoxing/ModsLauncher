#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TextureOffsetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextureOffsetData"));
	}

	template <typename T = Il2CppString*> T& textureName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& offset() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
