#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass600
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass60_0"));
	}

	template <typename T = bool> T& forceRequest() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T FetchGatewayServerAddressb__0(void* address) {
		return ((T (*)(cDisplayClass600*, void*))(Il2CppBase() + 0x4183A70))(this, address);
	}

};

}
