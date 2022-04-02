#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass120
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass12_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& token() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T LoadScorePageb__0(uintptr_t rsp) {
		return ((T (*)(cDisplayClass120*, uintptr_t))(Il2CppBase() + 0x2AED4E8))(this, rsp);
	}

};

}
