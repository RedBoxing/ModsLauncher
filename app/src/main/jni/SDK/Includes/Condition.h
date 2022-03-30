#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Condition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Condition"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& inverse() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& itemName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& requiredNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
