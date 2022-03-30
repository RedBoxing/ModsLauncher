#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class TranslationJobMain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "TranslationJob_Main"));
	}

	template <typename T = uintptr_t> T& mWeb() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mPost() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mGet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _requests() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _OnTranslationReady() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& mErrorMessage() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T GetState() {
		return ((T (*)(TranslationJobMain*))(Il2CppBase() + 0x173C000))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(TranslationJobMain*))(Il2CppBase() + 0x173C210))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetState() {
		return ((T (*)(TranslationJobMain*))(Il2CppBase() + 0x173C298))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dispose() {
		return ((T (*)(TranslationJobMain*))(Il2CppBase() + 0x173C29C))(this);
	}

};

}
