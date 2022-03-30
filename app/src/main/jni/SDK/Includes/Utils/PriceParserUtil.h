#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Utils {

class PriceParserUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Utils", "PriceParserUtil"));
	}


	template <typename T = int32_t> static T ToCorrectPrice(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4355B54))(0, text);
	}
	template <typename T = Il2CppString*> static T ConvertDigitsToLatin(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4355CC4))(0, s);
	}

};

}
