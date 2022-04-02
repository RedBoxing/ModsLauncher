#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DecorateConditionVisible
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecorateConditionVisible"));
	}

	template <typename T = bool> T& equip_show() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& str_val() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Call(Il2CppString* str1) {
		return ((T (*)(DecorateConditionVisible*, Il2CppString*))(Il2CppBase() + 0x42E1140))(this, str1);
	}

};

}
