#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoomAccount {

class ErrorCodeLocalizationConst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoomAccount", "ErrorCodeLocalizationConst"));
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
		return ((T (*)(void *))(Il2CppBase() + 0x1E75A00))(0);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E74E34))(0);
	}

};

}
