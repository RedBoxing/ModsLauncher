#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class Location
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "Location"));
	}

	template <typename T = double> T& x() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = double> T& y() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
