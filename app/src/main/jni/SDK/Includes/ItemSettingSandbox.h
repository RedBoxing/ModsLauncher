#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemSettingSandbox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemSettingSandbox"));
	}

	template <typename T = uintptr_t> T& valueType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isSet() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T GetValue() {
		return ((T (*)(ItemSettingSandbox*))(Il2CppBase() + 0x1CE6EFC))(this);
	}
	template <typename T = void> T SetValue(uintptr_t value) {
		return ((T (*)(ItemSettingSandbox*, uintptr_t))(Il2CppBase() + 0x1CE7328))(this, value);
	}

};

}
