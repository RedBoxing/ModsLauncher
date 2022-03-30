#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ResultCallbackProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResultCallbackProxy"));
	}

	template <typename T = void*> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T onResult(uintptr_t tokenResult) {
		return ((T (*)(ResultCallbackProxy*, uintptr_t))(Il2CppBase() + 0x4441F10))(this, tokenResult);
	}

};

}
