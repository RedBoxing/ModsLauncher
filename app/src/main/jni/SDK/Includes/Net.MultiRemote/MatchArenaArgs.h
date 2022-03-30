#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class MatchArenaArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "MatchArenaArgs"));
	}

	template <typename T = void*> T& location() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& filter() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> T get_location() {
		return ((T (*)(MatchArenaArgs*))(Il2CppBase() + 0x4385B08))(this);
	}
	template <typename T = void> T set_location(void* value) {
		return ((T (*)(MatchArenaArgs*, void*))(Il2CppBase() + 0x4385B1C))(this, value);
	}
	template <typename T = uintptr_t> T get_filter() {
		return ((T (*)(MatchArenaArgs*))(Il2CppBase() + 0x4385B30))(this);
	}
	template <typename T = void> T set_filter(uintptr_t value) {
		return ((T (*)(MatchArenaArgs*, uintptr_t))(Il2CppBase() + 0x4385B40))(this, value);
	}

};

}
