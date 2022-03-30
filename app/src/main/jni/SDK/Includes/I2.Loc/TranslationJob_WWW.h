#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class TranslationJobWWW
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "TranslationJob_WWW"));
	}

	template <typename T = uintptr_t> T& www() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Dispose() {
		return ((T (*)(TranslationJobWWW*))(Il2CppBase() + 0x173D754))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dispose() {
		return ((T (*)(TranslationJobWWW*))(Il2CppBase() + 0x173D7C0))(this);
	}

};

}
