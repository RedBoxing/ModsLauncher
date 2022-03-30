#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class TranslationJobPOST
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "TranslationJob_POST"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _requests() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _OnTranslationReady() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T GetState() {
		return ((T (*)(TranslationJobPOST*))(Il2CppBase() + 0x173C2A0))(this);
	}
	template <typename T = void> T ProcessResult(Il2CppArray<uintptr_t>* bytes, Il2CppString* errorMsg) {
		return ((T (*)(TranslationJobPOST*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x173C3A0))(this, bytes, errorMsg);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetState() {
		return ((T (*)(TranslationJobPOST*))(Il2CppBase() + 0x173C4FC))(this);
	}

};

}
