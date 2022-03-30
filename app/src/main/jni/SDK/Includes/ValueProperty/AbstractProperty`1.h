#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ValueProperty {

class AbstractProperty1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ValueProperty", "AbstractProperty`1"));
	}

	template <typename T = uintptr_t> T& OriginValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<void*>*> T& AdditionalItems() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_OriginValue() {
		return ((T (*)(AbstractProperty1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_AdditionalItems() {
		return ((T (*)(AbstractProperty1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddChange(uintptr_t additionalType, uintptr_t value, Il2CppString* key, int32_t order) {
		return ((T (*)(AbstractProperty1*, uintptr_t, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, additionalType, value, key, order);
	}
	template <typename T = void> T RemoveChange(Il2CppString* key) {
		return ((T (*)(AbstractProperty1*, Il2CppString*))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = uintptr_t> T GetValueByKey(Il2CppString* key) {
		return ((T (*)(AbstractProperty1*, Il2CppString*))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = uintptr_t> T GetFinalValue() {
		return ((T (*)(AbstractProperty1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T OnFinalValueAdd(uintptr_t finalValue, uintptr_t additionalValue) {
		return ((T (*)(AbstractProperty1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, finalValue, additionalValue);
	}
	template <typename T = uintptr_t> T OnFinalValueMultiply(uintptr_t finalValue, uintptr_t additionalValue) {
		return ((T (*)(AbstractProperty1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, finalValue, additionalValue);
	}

};

}
