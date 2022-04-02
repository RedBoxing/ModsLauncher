#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RTLSpecifiedText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RTLSpecifiedText"));
	}

	template <typename T = bool> static T& TryGetField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _RTFTextField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_RTFTextField() {
		return ((T (*)(void *))(Il2CppBase() + 0x44D8768))(0);
	}
	template <typename T = bool> T get_isRTF() {
		return ((T (*)(RTLSpecifiedText*))(Il2CppBase() + 0x44D887C))(this);
	}
	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(RTLSpecifiedText*))(Il2CppBase() + 0x44D88F0))(this);
	}
	template <typename T = void> T set_text(Il2CppString* value) {
		return ((T (*)(RTLSpecifiedText*, Il2CppString*))(Il2CppBase() + 0x44D8A44))(this, value);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_get_text() {
		return ((T (*)(RTLSpecifiedText*))(Il2CppBase() + 0x44D8AC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_text(Il2CppString* P0) {
		return ((T (*)(RTLSpecifiedText*, Il2CppString*))(Il2CppBase() + 0x44D8AD0))(this, P0);
	}

};

}
