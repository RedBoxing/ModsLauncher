#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EmoticonData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmoticonData"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& emoticonSp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& needFlipX() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
