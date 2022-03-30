#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class InputFieldInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "InputFieldInfo"));
	}

	template <typename T = int32_t> T& actionId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& axisRange() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& actionElementMapId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& controllerType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& controllerId() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = int32_t> T get_actionId() {
		return ((T (*)(InputFieldInfo*))(Il2CppBase() + 0x21E8238))(this);
	}
	template <typename T = void> T set_actionId(int32_t value) {
		return ((T (*)(InputFieldInfo*, int32_t))(Il2CppBase() + 0x21E0EF8))(this, value);
	}
	template <typename T = uintptr_t> T get_axisRange() {
		return ((T (*)(InputFieldInfo*))(Il2CppBase() + 0x21E7C94))(this);
	}
	template <typename T = void> T set_axisRange(uintptr_t value) {
		return ((T (*)(InputFieldInfo*, uintptr_t))(Il2CppBase() + 0x21E0F00))(this, value);
	}
	template <typename T = int32_t> T get_actionElementMapId() {
		return ((T (*)(InputFieldInfo*))(Il2CppBase() + 0x21E0A58))(this);
	}
	template <typename T = void> T set_actionElementMapId(int32_t value) {
		return ((T (*)(InputFieldInfo*, int32_t))(Il2CppBase() + 0x21E0B50))(this, value);
	}
	template <typename T = uintptr_t> T get_controllerType() {
		return ((T (*)(InputFieldInfo*))(Il2CppBase() + 0x21F2EB4))(this);
	}
	template <typename T = void> T set_controllerType(uintptr_t value) {
		return ((T (*)(InputFieldInfo*, uintptr_t))(Il2CppBase() + 0x21E0F08))(this, value);
	}
	template <typename T = int32_t> T get_controllerId() {
		return ((T (*)(InputFieldInfo*))(Il2CppBase() + 0x21E0C3C))(this);
	}
	template <typename T = void> T set_controllerId(int32_t value) {
		return ((T (*)(InputFieldInfo*, int32_t))(Il2CppBase() + 0x21E0D34))(this, value);
	}

};

}
