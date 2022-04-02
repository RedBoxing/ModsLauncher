#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HiddenLevelBuff {

class IFactorProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HiddenLevelBuff", "IFactorProcessor"));
	}


	template <typename T = void> T FactorProcess(uintptr_t model) {
		return ((T (*)(IFactorProcessor*, uintptr_t))(Il2CppBase() + 0x0))(this, model);
	}
	template <typename T = uintptr_t> T SetFactor(uintptr_t hiddenLevelGetBuffEvent, Il2CppString* customContent) {
		return ((T (*)(IFactorProcessor*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, hiddenLevelGetBuffEvent, customContent);
	}

};

}
