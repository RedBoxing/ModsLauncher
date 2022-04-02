#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NPCInfoTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPCInfoTable"));
	}

	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& npcs() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& coinIcon() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& gemIcon() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& hpIcon() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x437E2A0))(0);
	}
	template <typename T = uintptr_t> T GetNpc(Il2CppString* name) {
		return ((T (*)(NPCInfoTable*, Il2CppString*))(Il2CppBase() + 0x437E3AC))(this, name);
	}

};

}
