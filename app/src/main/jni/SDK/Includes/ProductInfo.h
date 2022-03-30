#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ProductInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProductInfo"));
	}

	template <typename T = Il2CppString*> T& cnName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& productId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& price() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
