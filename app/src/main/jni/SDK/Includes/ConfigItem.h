#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConfigItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigItem"));
	}

	template <typename T = uintptr_t> T& fromDate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& toDate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
