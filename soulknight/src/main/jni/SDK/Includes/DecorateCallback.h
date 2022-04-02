#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DecorateCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecorateCallback"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& callbacks() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Call() {
		return ((T (*)(DecorateCallback*))(Il2CppBase() + 0x42E0FE0))(this);
	}

};

}
