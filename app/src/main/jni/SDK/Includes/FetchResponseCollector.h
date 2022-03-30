#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchResponseCollector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FetchResponseCollector"));
	}

	template <typename T = int32_t> T& pendingCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& results() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
