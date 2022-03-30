#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuglyUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuglyUtil"));
	}


	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x45A409C))(0);
	}
	template <typename T = void> static T ReportException(Il2CppString* name, uintptr_t e) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45A40F0))(0, name, e);
	}
	template <typename T = void> static T ReportException_1(Il2CppString* name, Il2CppString* message, Il2CppString* stackTrace) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45A41D4))(0, name, message, stackTrace);
	}

};

}
