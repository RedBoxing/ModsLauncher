#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinIndexData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinIndexData"));
	}

	template <typename T = int32_t> T& skinDataIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& audioClipIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
