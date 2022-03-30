#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class StringObfucator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "StringObfucator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& StringObfuscatorPassword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T Encode(Il2CppString* NormalString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1739CE8))(0, NormalString);
	}
	template <typename T = Il2CppString*> static T Decode(Il2CppString* ObfucatedString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x173A150))(0, ObfucatedString);
	}
	template <typename T = Il2CppString*> static T ToBase64(Il2CppString* regularString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x173A078))(0, regularString);
	}
	template <typename T = Il2CppString*> static T FromBase64(Il2CppString* base64string) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x173A270))(0, base64string);
	}
	template <typename T = Il2CppString*> static T XoREncode(Il2CppString* NormalString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1739E08))(0, NormalString);
	}

};

}
