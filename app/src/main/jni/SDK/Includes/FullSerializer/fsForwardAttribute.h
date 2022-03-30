#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsForwardAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsForwardAttribute"));
	}

	template <typename T = Il2CppString*> T& MemberName() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
