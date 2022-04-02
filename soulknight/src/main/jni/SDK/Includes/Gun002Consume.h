#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun002Consume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun002Consume"));
	}

	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Gun002Consume*))(Il2CppBase() + 0x461F260))(this);
	}

};

}
