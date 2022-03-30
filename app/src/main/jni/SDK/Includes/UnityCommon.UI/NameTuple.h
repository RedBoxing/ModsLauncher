#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class NameTuple
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "NameTuple"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Value() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
