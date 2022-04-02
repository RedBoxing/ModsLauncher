#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class ArabicTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "ArabicTable"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& mapList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& arabicMapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_ArabicMapper() {
		return ((T (*)(void *))(Il2CppBase() + 0x420FC68))(0);
	}
	template <typename T = int32_t> T Convert(int32_t toBeConverted) {
		return ((T (*)(ArabicTable*, int32_t))(Il2CppBase() + 0x420FD1C))(this, toBeConverted);
	}

};

}
