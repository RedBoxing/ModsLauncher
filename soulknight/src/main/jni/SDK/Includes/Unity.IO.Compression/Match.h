#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class Match
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "Match"));
	}

	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& pos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& len() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& symbol() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(Match*))(Il2CppBase() + 0x4635328))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(Match*, uintptr_t))(Il2CppBase() + 0x4636564))(this, value);
	}
	template <typename T = int32_t> T get_Position() {
		return ((T (*)(Match*))(Il2CppBase() + 0x4635554))(this);
	}
	template <typename T = void> T set_Position(int32_t value) {
		return ((T (*)(Match*, int32_t))(Il2CppBase() + 0x463664C))(this, value);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(Match*))(Il2CppBase() + 0x46354F4))(this);
	}
	template <typename T = void> T set_Length(int32_t value) {
		return ((T (*)(Match*, int32_t))(Il2CppBase() + 0x46366C0))(this, value);
	}
	template <typename T = unsigned char> T get_Symbol() {
		return ((T (*)(Match*))(Il2CppBase() + 0x4635388))(this);
	}
	template <typename T = void> T set_Symbol(unsigned char value) {
		return ((T (*)(Match*, unsigned char))(Il2CppBase() + 0x46365D8))(this, value);
	}

};

}
