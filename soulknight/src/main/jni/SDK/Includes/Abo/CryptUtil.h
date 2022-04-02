#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Abo {

class CryptUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Abo", "CryptUtil"));
	}


	template <typename T = Il2CppString*> static T EncryptDES(Il2CppString* cleartext, Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19FB14C))(0, cleartext, password);
	}
	template <typename T = Il2CppString*> static T DecryptDES(Il2CppString* cyphertext, Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19FB1C8))(0, cyphertext, password);
	}
	template <typename T = Il2CppString*> static T EncryptXor(Il2CppString* cleartext, Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19FB244))(0, cleartext, password);
	}
	template <typename T = Il2CppString*> static T DecryptXor(Il2CppString* cyphertext, Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19FB4BC))(0, cyphertext, password);
	}
	template <typename T = Il2CppString*> static T GetMD5(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19FB734))(0, text);
	}
	template <typename T = Il2CppString*> static T GetMD5_Old(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19FB974))(0, text);
	}
	template <typename T = Il2CppString*> static T GetSignDefault(Il2CppDictionary<Il2CppString*, Il2CppString*>* parameters, Il2CppString* secretKey) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x19FBB2C))(0, parameters, secretKey);
	}
	template <typename T = int32_t> static T GetHashCode(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19FBD94))(0, value);
	}

};

}
