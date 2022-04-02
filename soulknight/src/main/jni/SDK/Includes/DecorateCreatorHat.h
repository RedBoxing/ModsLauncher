#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DecorateCreatorHat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecorateCreatorHat"));
	}

	template <typename T = Il2CppString*> T& protoPath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& defaultProtoPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DecorateCreatorHat*))(Il2CppBase() + 0x42E120C))(this);
	}

};

}
