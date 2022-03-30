#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizationReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizationReader"));
	}


	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T ReadTextAsset(uintptr_t asset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45E2184))(0, asset);
	}
	template <typename T = bool> static T TextAsset_ReadLine(Il2CppString* line, uintptr_t* key, uintptr_t* value, uintptr_t* category, uintptr_t* comment, uintptr_t* termType) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45E2424))(0, line, key, value, category, comment, termType);
	}
	template <typename T = Il2CppString*> static T ReadCSVfile(Il2CppString* Path, uintptr_t encoding) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45E29A0))(0, Path, encoding);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> static T ReadCSV(Il2CppString* Text, char Separator) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0x45E2B90))(0, Text, Separator);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ParseCSVline(Il2CppString* Line, uintptr_t iStart, char Separator) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, char))(Il2CppBase() + 0x45E2CC0))(0, Line, iStart, Separator);
	}
	template <typename T = void> static T AddCSVtoken(uintptr_t list, uintptr_t Line, int32_t iEnd, uintptr_t iWordStart) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x45E2F44))(0, list, Line, iEnd, iWordStart);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> static T ReadI2CSV(Il2CppString* Text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45E3164))(0, Text);
	}
	template <typename T = void> static T ValidateFullTerm(uintptr_t Term) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45E2890))(0, Term);
	}
	template <typename T = Il2CppString*> static T EncodeString(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45E33B0))(0, str);
	}
	template <typename T = Il2CppString*> static T DecodeString(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45E27B4))(0, str);
	}

};

}
