#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HiddenLevelBuff {

class GeneralFactorProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HiddenLevelBuff", "GeneralFactorProcessor"));
	}

	template <typename T = uintptr_t> T& windowShowPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& descTextPath() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& showDelay() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T FactorProcess(uintptr_t model) {
		return ((T (*)(GeneralFactorProcessor*, uintptr_t))(Il2CppBase() + 0x1A34E40))(this, model);
	}
	template <typename T = uintptr_t> T SetFactor(uintptr_t model, Il2CppString* customContent) {
		return ((T (*)(GeneralFactorProcessor*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A34FC8))(this, model, customContent);
	}

};

}
