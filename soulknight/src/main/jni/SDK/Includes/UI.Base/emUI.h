#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UI.Base {

class emUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UI.Base", "emUI"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
