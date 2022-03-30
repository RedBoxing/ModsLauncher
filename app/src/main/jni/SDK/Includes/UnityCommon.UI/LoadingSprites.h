#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class LoadingSprites
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "LoadingSprites"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& loadingSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
