#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RSAUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RSAUtil"));
	}

	template <typename T = Il2CppString*> static T& rsa_public_key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T RSAEncrypt(Il2CppString* content, Il2CppString* xmlPublicKey) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x44D7BD4))(0, content, xmlPublicKey);
	}
	template <typename T = Il2CppString*> static T RSADecrypt(Il2CppString* content, Il2CppString* xmlPrivateKey) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x44D7DF4))(0, content, xmlPrivateKey);
	}

};

}
