#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Config
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Config"));
	}

	template <typename T = float> T& fadeInTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& sizePerPixel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& showUpComposedScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
