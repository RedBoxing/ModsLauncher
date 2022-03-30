#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnumLocalization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnumLocalization"));
	}


	template <typename T = Il2CppString*> static T TryGetHeroName(uintptr_t emHero) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4464278))(0, emHero);
	}
	template <typename T = uintptr_t> static T TryGetemHero(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4464358))(0, name);
	}
	template <typename T = uintptr_t> static T TryGetemPet(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4464464))(0, name);
	}

};

}
