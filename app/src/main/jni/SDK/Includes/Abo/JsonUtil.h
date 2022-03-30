#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Abo {

class JsonUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Abo", "JsonUtil"));
	}


	template <typename T = Il2CppString*> static T ToJson(uintptr_t data, bool isPretty) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x0))(0, data, isPretty);
	}
	template <typename T = Il2CppString*> static T ToJson_1(uintptr_t data, bool isPretty) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x19FEE04))(0, data, isPretty);
	}
	template <typename T = Il2CppString*> static T ToJson_2(uintptr_t data, uintptr_t type, bool isPretty) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x19FEE98))(0, data, type, isPretty);
	}
	template <typename T = uintptr_t> static T ParseJson(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, json);
	}
	template <typename T = uintptr_t> static T ParseJson_1(Il2CppString* json, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x19FF054))(0, json, type);
	}
	template <typename T = void> static T SaveJson(uintptr_t obj, Il2CppString* filePath, bool isPretty) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x19FF1DC))(0, obj, filePath, isPretty);
	}
	template <typename T = uintptr_t> static T LoadJson(Il2CppString* filePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, filePath);
	}
	template <typename T = uintptr_t> static T LoadJson_1(Il2CppString* filePath, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x19FF268))(0, filePath, type);
	}
	template <typename T = void> static T SaveJsonWithCrypt(uintptr_t obj, Il2CppString* filePath, Il2CppString* secret) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19FF3CC))(0, obj, filePath, secret);
	}
	template <typename T = uintptr_t> static T LoadJsonWithCrypt(Il2CppString* filePath, Il2CppString* secret, Il2CppString* buglyName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(0, filePath, secret, buglyName);
	}
	template <typename T = uintptr_t> static T LoadJsonWithCrypt_1(Il2CppString* filePath, uintptr_t type, Il2CppString* secret) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19FF460))(0, filePath, type, secret);
	}
	template <typename T = Il2CppString*> static T ToJsonWithUnicode(uintptr_t obj, bool isPretty) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x19FF750))(0, obj, isPretty);
	}
	template <typename T = void> static T SaveJsonWithUnicode(uintptr_t obj, Il2CppString* filePath, bool isPretty) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x19FFBB4))(0, obj, filePath, isPretty);
	}
	template <typename T = uintptr_t> static T ParseJsonWithUnicode(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, json);
	}
	template <typename T = uintptr_t> static T LoadJsonWithUnicode(Il2CppString* filePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, filePath);
	}
	template <typename T = uintptr_t> static T LoadJsonWithUnicode_1(Il2CppString* filePath, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x19FFC44))(0, filePath, type);
	}
	template <typename T = Il2CppString*> static T EscapeString(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19FFE60))(0, str);
	}
	template <typename T = Il2CppString*> static T UnescapeString(Il2CppString* input) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19FF7CC))(0, input);
	}
	template <typename T = bool> static T IsHex(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x1A00050))(0, c);
	}
	template <typename T = uint32_t> static T ParseUnicode(char c1, char c2, char c3, char c4) {
		return ((T (*)(void *, char, char, char, char))(Il2CppBase() + 0x1A000E4))(0, c1, c2, c3, c4);
	}
	template <typename T = uint32_t> static T ParseSingleChar(char c1, uint32_t multipliyer) {
		return ((T (*)(void *, char, uint32_t))(Il2CppBase() + 0x1A001B8))(0, c1, multipliyer);
	}

};

}
