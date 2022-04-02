#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemFragment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemFragment"));
	}

	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& blueprint() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = bool> T get_Droppable() {
		return ((T (*)(ItemFragment*))(Il2CppBase() + 0x1DA63D4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_Droppable() {
		return ((T (*)(ItemFragment*))(Il2CppBase() + 0x1DA658C))(this);
	}

};

}
