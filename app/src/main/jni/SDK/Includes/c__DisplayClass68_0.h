#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass680
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass68_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& joinable() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& status() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T UpdateRoomInfob__0() {
		return ((T (*)(cDisplayClass680*))(Il2CppBase() + 0x436F7EC))(this);
	}

};

}
