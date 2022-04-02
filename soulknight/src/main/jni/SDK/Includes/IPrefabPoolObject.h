#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IPrefabPoolObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPrefabPoolObject"));
	}


	template <typename T = void> T OnTaken() {
		return ((T (*)(IPrefabPoolObject*))(Il2CppBase() + 0x0))(this);
	}

};

}
