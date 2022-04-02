#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IChest"));
	}


	template <typename T = void> T SetChestEmpty() {
		return ((T (*)(IChest*))(Il2CppBase() + 0x0))(this);
	}

};

}
