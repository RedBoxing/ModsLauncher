#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class TranslationJobGET
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "TranslationJob_GET"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _requests() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _OnTranslationReady() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& mQueries() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& mErrorMessage() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T ExecuteNextQuery() {
		return ((T (*)(TranslationJobGET*))(Il2CppBase() + 0x173B9EC))(this);
	}
	template <typename T = uintptr_t> T GetState() {
		return ((T (*)(TranslationJobGET*))(Il2CppBase() + 0x173BB84))(this);
	}
	template <typename T = void> T ProcessResult(Il2CppArray<uintptr_t>* bytes, Il2CppString* errorMsg) {
		return ((T (*)(TranslationJobGET*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x173BC94))(this, bytes, errorMsg);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetState() {
		return ((T (*)(TranslationJobGET*))(Il2CppBase() + 0x173BE04))(this);
	}

};

}
