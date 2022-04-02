#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom.Utils {

class RegexUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom.Utils", "RegexUtil"));
	}

	template <typename T = Il2CppString*> static T& EmailRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SixNumberRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PasswordRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T IsPhoneNumber(Il2CppString* phoneNumber) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E736F8))(0, phoneNumber);
	}
	template <typename T = bool> static T IsEmail(Il2CppString* email) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E73A58))(0, email);
	}
	template <typename T = bool> static T IsSixNumber(Il2CppString* number) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E73B2C))(0, number);
	}
	template <typename T = bool> static T IsPassword(Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E73C00))(0, password);
	}
	template <typename T = Il2CppString*> static T EmailToLowerCase(Il2CppString* email) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E73CD4))(0, email);
	}

};

}
