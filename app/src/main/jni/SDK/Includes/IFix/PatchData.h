#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IFix {

class PatchData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IFix", "PatchData"));
	}

	template <typename T = Il2CppString*> T& patchFileUrl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& patchFileMd5() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
