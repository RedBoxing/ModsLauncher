#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class TranslationJob
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "TranslationJob"));
	}

	template <typename T = uintptr_t> T& mJobState() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T GetState() {
		return ((T (*)(TranslationJob*))(Il2CppBase() + 0x173B7B8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(TranslationJob*))(Il2CppBase() + 0x173B8E4))(this);
	}

};

}
