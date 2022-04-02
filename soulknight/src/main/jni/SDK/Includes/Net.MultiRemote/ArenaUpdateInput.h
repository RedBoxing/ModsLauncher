#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class ArenaUpdateInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "ArenaUpdateInput"));
	}

	template <typename T = uintptr_t> T& payload() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& memberInfos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& joinable() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_payload() {
		return ((T (*)(ArenaUpdateInput*))(Il2CppBase() + 0x43854E0))(this);
	}
	template <typename T = void> T set_payload(uintptr_t value) {
		return ((T (*)(ArenaUpdateInput*, uintptr_t))(Il2CppBase() + 0x43854E8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_memberInfos() {
		return ((T (*)(ArenaUpdateInput*))(Il2CppBase() + 0x43854F0))(this);
	}
	template <typename T = void> T set_memberInfos(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ArenaUpdateInput*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43854F8))(this, value);
	}

};

}
