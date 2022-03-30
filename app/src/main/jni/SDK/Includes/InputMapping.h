#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InputMapping
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputMapping"));
	}

	template <typename T = Il2CppString*> T& actionName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& fieldInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& map() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& aem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& controllerType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& controllerId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& pollingInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& modifierKeyFlags() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = Il2CppString*> T get_actionName() {
		return ((T (*)(InputMapping*))(Il2CppBase() + 0x21E7ADC))(this);
	}
	template <typename T = void> T set_actionName(Il2CppString* value) {
		return ((T (*)(InputMapping*, Il2CppString*))(Il2CppBase() + 0x21E7AE4))(this, value);
	}
	template <typename T = uintptr_t> T get_fieldInfo() {
		return ((T (*)(InputMapping*))(Il2CppBase() + 0x21E7AEC))(this);
	}
	template <typename T = void> T set_fieldInfo(uintptr_t value) {
		return ((T (*)(InputMapping*, uintptr_t))(Il2CppBase() + 0x21E7AF4))(this, value);
	}
	template <typename T = uintptr_t> T get_map() {
		return ((T (*)(InputMapping*))(Il2CppBase() + 0x21E7AFC))(this);
	}
	template <typename T = void> T set_map(uintptr_t value) {
		return ((T (*)(InputMapping*, uintptr_t))(Il2CppBase() + 0x21E7B04))(this, value);
	}
	template <typename T = uintptr_t> T get_aem() {
		return ((T (*)(InputMapping*))(Il2CppBase() + 0x21E7B0C))(this);
	}
	template <typename T = void> T set_aem(uintptr_t value) {
		return ((T (*)(InputMapping*, uintptr_t))(Il2CppBase() + 0x21E7B14))(this, value);
	}
	template <typename T = uintptr_t> T get_controllerType() {
		return ((T (*)(InputMapping*))(Il2CppBase() + 0x21E7B1C))(this);
	}
	template <typename T = void> T set_controllerType(uintptr_t value) {
		return ((T (*)(InputMapping*, uintptr_t))(Il2CppBase() + 0x21E7B24))(this, value);
	}
	template <typename T = int32_t> T get_controllerId() {
		return ((T (*)(InputMapping*))(Il2CppBase() + 0x21E7B2C))(this);
	}
	template <typename T = void> T set_controllerId(int32_t value) {
		return ((T (*)(InputMapping*, int32_t))(Il2CppBase() + 0x21E7B34))(this, value);
	}
	template <typename T = uintptr_t> T get_pollingInfo() {
		return ((T (*)(InputMapping*))(Il2CppBase() + 0x21E7B3C))(this);
	}
	template <typename T = void> T set_pollingInfo(uintptr_t value) {
		return ((T (*)(InputMapping*, uintptr_t))(Il2CppBase() + 0x21E7B60))(this, value);
	}
	template <typename T = uintptr_t> T get_modifierKeyFlags() {
		return ((T (*)(InputMapping*))(Il2CppBase() + 0x21E7B80))(this);
	}
	template <typename T = void> T set_modifierKeyFlags(uintptr_t value) {
		return ((T (*)(InputMapping*, uintptr_t))(Il2CppBase() + 0x21E7B88))(this, value);
	}
	template <typename T = uintptr_t> T get_axisRange() {
		return ((T (*)(InputMapping*))(Il2CppBase() + 0x21E7B90))(this);
	}
	template <typename T = Il2CppString*> T get_elementName() {
		return ((T (*)(InputMapping*))(Il2CppBase() + 0x21E7C9C))(this);
	}
	template <typename T = uintptr_t> T ToElementAssignment(uintptr_t pollingInfo) {
		return ((T (*)(InputMapping*, uintptr_t))(Il2CppBase() + 0x21E7E90))(this, pollingInfo);
	}
	template <typename T = uintptr_t> T ToElementAssignment_1(uintptr_t pollingInfo, uintptr_t modifierKeyFlags) {
		return ((T (*)(InputMapping*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21E813C))(this, pollingInfo, modifierKeyFlags);
	}
	template <typename T = uintptr_t> T ToElementAssignment_2() {
		return ((T (*)(InputMapping*))(Il2CppBase() + 0x21E7F74))(this);
	}

};

}
