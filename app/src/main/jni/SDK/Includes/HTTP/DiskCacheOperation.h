#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HTTP {

class DiskCacheOperation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTTP", "DiskCacheOperation"));
	}

	template <typename T = bool> T& isDone() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& fromCache() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
