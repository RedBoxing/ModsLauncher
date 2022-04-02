#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CMD.EDI {

class EncryptHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CMD.EDI", "EncryptHandler"));
	}


	template <typename T = Il2CppString*> static T Encrypt(Il2CppString* cleartext, Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1864030))(0, cleartext, password);
	}
	template <typename T = Il2CppString*> static T Decrypt(Il2CppString* ciphertext, Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x186445C))(0, ciphertext, password);
	}

};

}
