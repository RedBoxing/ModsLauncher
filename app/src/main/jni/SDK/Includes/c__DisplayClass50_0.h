#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass500
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass50_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T SetBuffInfob__0(bool isDown) {
		return ((T (*)(cDisplayClass500*, bool))(Il2CppBase() + 0x430FF84))(this, isDown);
	}

};

}
