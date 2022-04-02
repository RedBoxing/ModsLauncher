#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemInfoRow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemInfoRow"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& targetObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& price() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isHidden() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
