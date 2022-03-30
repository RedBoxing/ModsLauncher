#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class RTLFixer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "RTLFixer"));
	}


	template <typename T = Il2CppString*> static T Fix(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45ECF50))(0, str);
	}
	template <typename T = Il2CppString*> static T Fix_1(Il2CppString* str, bool rtl) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x45ECFB8))(0, str, rtl);
	}
	template <typename T = Il2CppString*> static T Fix_2(Il2CppString* str, bool showTashkeel, bool useHinduNumbers) {
		return ((T (*)(void *, Il2CppString*, bool, bool))(Il2CppBase() + 0x45DCA5C))(0, str, showTashkeel, useHinduNumbers);
	}

};

}
