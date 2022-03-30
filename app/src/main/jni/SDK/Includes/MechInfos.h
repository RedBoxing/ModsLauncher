#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MechInfos
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MechInfos"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mechInfos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x41E6B84))(0);
	}
	template <typename T = uintptr_t> T GetMechInfo(Il2CppString* mechName) {
		return ((T (*)(MechInfos*, Il2CppString*))(Il2CppBase() + 0x41E6C78))(this, mechName);
	}
	template <typename T = void> T ReadPrefabData() {
		return ((T (*)(MechInfos*))(Il2CppBase() + 0x41E6E00))(this);
	}

};

}
