#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BluePrintInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BluePrintInfo"));
	}

	template <typename T = int32_t> T& gem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& materials() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
