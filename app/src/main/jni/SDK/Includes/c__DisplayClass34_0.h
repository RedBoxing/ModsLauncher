#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass340
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass34_0"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& Languages() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& 9__0() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T GetAllLanguagesCodeb__0(Il2CppString* x) {
		return ((T (*)(cDisplayClass340*, Il2CppString*))(Il2CppBase() + 0x45E15C4))(this, x);
	}

};

}
