#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DataSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataSource"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& CACHE_OR_NETWORK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& NETWORK_ONLY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
