#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class ArenaUpdateArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "ArenaUpdateArgs"));
	}

	template <typename T = uintptr_t> T& where() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_where() {
		return ((T (*)(ArenaUpdateArgs*))(Il2CppBase() + 0x43854B0))(this);
	}
	template <typename T = void> T set_where(uintptr_t value) {
		return ((T (*)(ArenaUpdateArgs*, uintptr_t))(Il2CppBase() + 0x43854B8))(this, value);
	}
	template <typename T = uintptr_t> T get_data() {
		return ((T (*)(ArenaUpdateArgs*))(Il2CppBase() + 0x43854C0))(this);
	}
	template <typename T = void> T set_data(uintptr_t value) {
		return ((T (*)(ArenaUpdateArgs*, uintptr_t))(Il2CppBase() + 0x43854C8))(this, value);
	}

};

}
