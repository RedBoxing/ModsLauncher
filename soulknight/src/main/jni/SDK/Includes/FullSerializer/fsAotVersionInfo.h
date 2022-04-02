#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsAotVersionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsAotVersionInfo"));
	}

	template <typename T = bool> T& IsConstructorPublic() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Members() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
