#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteTagInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteTagInfo"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& width() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& y() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
