#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ControllerSelection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ControllerSelection"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _idPrev() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _typePrev() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(ControllerSelection*))(Il2CppBase() + 0x205C488))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(ControllerSelection*, int32_t))(Il2CppBase() + 0x2062070))(this, value);
	}
	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(ControllerSelection*))(Il2CppBase() + 0x205C428))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(ControllerSelection*, uintptr_t))(Il2CppBase() + 0x20620E8))(this, value);
	}
	template <typename T = int32_t> T get_idPrev() {
		return ((T (*)(ControllerSelection*))(Il2CppBase() + 0x2062160))(this);
	}
	template <typename T = uintptr_t> T get_typePrev() {
		return ((T (*)(ControllerSelection*))(Il2CppBase() + 0x20621C0))(this);
	}
	template <typename T = bool> T get_hasSelection() {
		return ((T (*)(ControllerSelection*))(Il2CppBase() + 0x205C334))(this);
	}
	template <typename T = void> T Set(int32_t id, uintptr_t type) {
		return ((T (*)(ControllerSelection*, int32_t, uintptr_t))(Il2CppBase() + 0x205C39C))(this, id, type);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ControllerSelection*))(Il2CppBase() + 0x205C11C))(this);
	}

};

}
