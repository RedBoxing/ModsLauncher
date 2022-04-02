#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConsoleProDebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConsoleProDebug"));
	}


	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x427AC74))(0);
	}
	template <typename T = void> static T LogToFilter(Il2CppString* inLog, Il2CppString* inFilterName, uintptr_t inContext) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x427ACC8))(0, inLog, inFilterName, inContext);
	}
	template <typename T = void> static T LogAsType(Il2CppString* inLog, Il2CppString* inTypeName, uintptr_t inContext) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x427ADC0))(0, inLog, inTypeName, inContext);
	}
	template <typename T = void> static T Watch(Il2CppString* inName, Il2CppString* inValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x427AEB8))(0, inName, inValue);
	}
	template <typename T = void> static T Search(Il2CppString* inText) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x427B178))(0, inText);
	}

};

}
