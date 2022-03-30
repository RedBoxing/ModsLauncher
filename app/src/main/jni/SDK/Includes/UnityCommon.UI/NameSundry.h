#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class NameSundry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "NameSundry"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& tuples() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
