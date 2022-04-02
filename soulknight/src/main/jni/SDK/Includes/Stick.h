#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Stick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Stick"));
	}

	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& _origPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _xAxisElementId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _yAxisElementId() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = Il2CppVector2> T get_position() {
		return ((T (*)(Stick*))(Il2CppBase() + 0x267B59C))(this);
	}
	template <typename T = void> T set_position(Il2CppVector2 value) {
		return ((T (*)(Stick*, Il2CppVector2))(Il2CppBase() + 0x267B700))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Stick*))(Il2CppBase() + 0x267B920))(this);
	}
	template <typename T = bool> T ContainsElement(int32_t elementId) {
		return ((T (*)(Stick*, int32_t))(Il2CppBase() + 0x267BA18))(this, elementId);
	}
	template <typename T = void> T SetAxisPosition(int32_t elementId, float value) {
		return ((T (*)(Stick*, int32_t, float))(Il2CppBase() + 0x267BB0C))(this, elementId, value);
	}

};

}
