#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConfigEmailsConst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigEmailsConst"));
	}

	template <typename T = Il2CppString*> static T& LocalFileRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FileSvrIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uint16_t> static T& FileSvrPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> static T get_ServerPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x42761D4))(0);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x4276288))(0);
	}

};

}
