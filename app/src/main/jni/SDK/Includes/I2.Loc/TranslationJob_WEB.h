#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class TranslationJobWEB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "TranslationJob_WEB"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _requests() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _OnTranslationReady() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& mErrorMessage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& mCurrentBatch_ToLanguageCode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& mCurrentBatch_FromLanguageCode() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& mCurrentBatch_Text() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<void*>*> T& mQueries() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T FindAllQueries() {
		return ((T (*)(TranslationJobWEB*))(Il2CppBase() + 0x173C544))(this);
	}
	template <typename T = void> T ExecuteNextBatch() {
		return ((T (*)(TranslationJobWEB*))(Il2CppBase() + 0x173C8D8))(this);
	}
	template <typename T = uintptr_t> T GetState() {
		return ((T (*)(TranslationJobWEB*))(Il2CppBase() + 0x173CCF4))(this);
	}
	template <typename T = void> T ProcessResult(Il2CppArray<uintptr_t>* bytes, Il2CppString* errorMsg) {
		return ((T (*)(TranslationJobWEB*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x173CE04))(this, bytes, errorMsg);
	}
	template <typename T = Il2CppString*> T ParseTranslationResult(Il2CppString* html, Il2CppString* OriginalText) {
		return ((T (*)(TranslationJobWEB*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x173CF84))(this, html, OriginalText);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetState() {
		return ((T (*)(TranslationJobWEB*))(Il2CppBase() + 0x173D4C0))(this);
	}

};

}
