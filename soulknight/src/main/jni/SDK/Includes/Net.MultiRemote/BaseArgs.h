#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class BaseArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "BaseArgs"));
	}

	template <typename T = Il2CppString*> T& gameVer() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
