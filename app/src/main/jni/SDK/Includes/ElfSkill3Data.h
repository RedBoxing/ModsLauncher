#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ElfSkill3Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElfSkill3Data"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& fairies() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
