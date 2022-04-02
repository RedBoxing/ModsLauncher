#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Abo {

class XorCrypt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Abo", "XorCrypt"));
	}


	template <typename T = Il2CppString*> static T Encrypt(Il2CppString* cleatText, Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19FB2BC))(0, cleatText, password);
	}
	template <typename T = Il2CppString*> static T Decrypt(Il2CppString* cypherText, Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19FB534))(0, cypherText, password);
	}

};

}
