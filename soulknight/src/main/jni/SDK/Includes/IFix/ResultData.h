#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IFix {

class ResultData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IFix", "ResultData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& patchList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& errorCode() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
