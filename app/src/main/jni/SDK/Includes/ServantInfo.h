#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ServantInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServantInfo"));
	}

	template <typename T = uintptr_t> T& servant() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& goodLuckFixed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& badLuckFixed() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
