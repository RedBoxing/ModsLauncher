#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ListExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ListExtensions"));
	}


	template <typename T = Il2CppList<uintptr_t>*> static T GetRandomList(Il2CppList<uintptr_t>* inputList) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(0, inputList);
	}

};

}
