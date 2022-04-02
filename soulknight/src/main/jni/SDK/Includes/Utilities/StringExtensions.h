#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Utilities {

class StringExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Utilities", "StringExtensions"));
	}


	template <typename T = Il2CppString*> static T ToCSV(Il2CppList<Il2CppString*>* list) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x4352818))(0, list);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T ToListFromCSV(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x435295C))(0, s);
	}

};

}
