#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DialogData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& nodes() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
