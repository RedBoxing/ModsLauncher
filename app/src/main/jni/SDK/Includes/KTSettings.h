#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTSettings"));
	}

	template <typename T = Il2CppString*> static T& AppKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AppSecret() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& ScreenOrientation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}


};

}
