#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LocationDataSohu
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationDataSohu"));
	}

	template <typename T = Il2CppString*> T& cip() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& cid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& cname() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
