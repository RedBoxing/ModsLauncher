#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class ArenaFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "ArenaFilter"));
	}

	template <typename T = bool> T& isBadass() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& gameMode() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& battleFactors() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_isBadass() {
		return ((T (*)(ArenaFilter*))(Il2CppBase() + 0x16F28B0))(this);
	}
	template <typename T = void> T set_isBadass(bool value) {
		return ((T (*)(ArenaFilter*, bool))(Il2CppBase() + 0x16F28B8))(this, value);
	}
	template <typename T = int32_t> T get_gameMode() {
		return ((T (*)(ArenaFilter*))(Il2CppBase() + 0x16F28C4))(this);
	}
	template <typename T = void> T set_gameMode(int32_t value) {
		return ((T (*)(ArenaFilter*, int32_t))(Il2CppBase() + 0x16F28CC))(this, value);
	}
	template <typename T = uintptr_t> T get_battleFactors() {
		return ((T (*)(ArenaFilter*))(Il2CppBase() + 0x16F28D4))(this);
	}
	template <typename T = void> T set_battleFactors(uintptr_t value) {
		return ((T (*)(ArenaFilter*, uintptr_t))(Il2CppBase() + 0x16F28F8))(this, value);
	}

};

}
