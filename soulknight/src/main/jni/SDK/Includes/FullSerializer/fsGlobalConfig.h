#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsGlobalConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsGlobalConfig"));
	}

	template <typename T = bool> static T& IsCaseSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& AllowInternalExceptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppString*> static T& InternalFieldPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}


};

}
