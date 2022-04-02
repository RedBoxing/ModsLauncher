#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass110
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass11_0"));
	}

	template <typename T = void*> T& userCallback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T BridgeMatchToUserCallbackb__0(uintptr_t callbackResult) {
		return ((T (*)(cDisplayClass110*, uintptr_t))(Il2CppBase() + 0x2838238))(this, callbackResult);
	}

};

}
