#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponInfoRow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponInfoRow"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& indroduce() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& indroduceAuthor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& dropLevel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isMelle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& forgeable() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& cantExchangeByToken() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tags() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

}
