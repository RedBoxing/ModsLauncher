#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConsumeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConsumeInfo"));
	}

	template <typename T = uintptr_t> T& consumeType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& param1() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
