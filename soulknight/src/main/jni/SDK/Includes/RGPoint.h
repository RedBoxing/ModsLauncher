#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGPoint"));
	}

	template <typename T = uintptr_t> T& ParentPoint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& F() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& G() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& H() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& X() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_ParentPoint() {
		return ((T (*)(RGPoint*))(Il2CppBase() + 0x1C61A9C))(this);
	}
	template <typename T = void> T set_ParentPoint(uintptr_t value) {
		return ((T (*)(RGPoint*, uintptr_t))(Il2CppBase() + 0x1C61AA4))(this, value);
	}
	template <typename T = int32_t> T get_F() {
		return ((T (*)(RGPoint*))(Il2CppBase() + 0x1C61AAC))(this);
	}
	template <typename T = void> T set_F(int32_t value) {
		return ((T (*)(RGPoint*, int32_t))(Il2CppBase() + 0x1C61AB4))(this, value);
	}
	template <typename T = int32_t> T get_G() {
		return ((T (*)(RGPoint*))(Il2CppBase() + 0x1C61ABC))(this);
	}
	template <typename T = void> T set_G(int32_t value) {
		return ((T (*)(RGPoint*, int32_t))(Il2CppBase() + 0x1C61AC4))(this, value);
	}
	template <typename T = int32_t> T get_H() {
		return ((T (*)(RGPoint*))(Il2CppBase() + 0x1C61ACC))(this);
	}
	template <typename T = void> T set_H(int32_t value) {
		return ((T (*)(RGPoint*, int32_t))(Il2CppBase() + 0x1C61AD4))(this, value);
	}
	template <typename T = int32_t> T get_X() {
		return ((T (*)(RGPoint*))(Il2CppBase() + 0x1C61ADC))(this);
	}
	template <typename T = void> T set_X(int32_t value) {
		return ((T (*)(RGPoint*, int32_t))(Il2CppBase() + 0x1C61AE4))(this, value);
	}
	template <typename T = int32_t> T get_Y() {
		return ((T (*)(RGPoint*))(Il2CppBase() + 0x1C61AEC))(this);
	}
	template <typename T = void> T set_Y(int32_t value) {
		return ((T (*)(RGPoint*, int32_t))(Il2CppBase() + 0x1C61AF4))(this, value);
	}
	template <typename T = void> T CalcF() {
		return ((T (*)(RGPoint*))(Il2CppBase() + 0x1C61B34))(this);
	}

};

}
