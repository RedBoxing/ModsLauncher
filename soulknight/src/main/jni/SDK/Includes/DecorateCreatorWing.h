#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DecorateCreatorWing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecorateCreatorWing"));
	}

	template <typename T = Il2CppString*> T& protoPath() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DecorateCreatorWing*))(Il2CppBase() + 0x42E1500))(this);
	}

};

}
