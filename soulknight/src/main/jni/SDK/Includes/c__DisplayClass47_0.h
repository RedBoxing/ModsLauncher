#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass470
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass47_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T GetAnotherServerAuthCodeb__0(bool success, Il2CppString* msg) {
		return ((T (*)(cDisplayClass470*, bool, Il2CppString*))(Il2CppBase() + 0x461ABB0))(this, success, msg);
	}

};

}
