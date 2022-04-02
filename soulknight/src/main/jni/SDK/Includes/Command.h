#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Command
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Command"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& sequentialPriority() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& start() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& stop() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isValid() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
