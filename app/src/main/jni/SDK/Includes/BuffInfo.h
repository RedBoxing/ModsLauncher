#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffInfo"));
	}

	template <typename T = Il2CppString*> T& buffDesc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
