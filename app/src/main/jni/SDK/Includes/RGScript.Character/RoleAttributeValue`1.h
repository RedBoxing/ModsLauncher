#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character {

class RoleAttributeValue1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character", "RoleAttributeValue`1"));
	}

	template <typename T = uintptr_t> T& _originalValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _baseValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _minimum() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _maximum() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _fixedValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _finalValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _lastFinalValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& _dirty() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<void*>*> T& _permanentAdditionValues() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _additionValues() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, float>*> T& _multiplicationValues() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T SetOriginalValue(uintptr_t value) {
		return ((T (*)(RoleAttributeValue1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T AddPermanentAdditionValue(Il2CppString* key, uintptr_t value) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T AddAdditionValue(Il2CppString* key, uintptr_t value) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T AccumulateOrAddAdditionValue(Il2CppString* key, uintptr_t value) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T AddMultiplicationValue(Il2CppString* key, float value) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T AccumulateOrMultiplicationValue(Il2CppString* key, float value) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T SetFixedValue(Il2CppString* key, uintptr_t value) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T RemoveValue(Il2CppString* key) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = void> T RemoveValue_1(Il2CppString* key, uintptr_t value) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = bool> T ContainsAdditionValue(Il2CppString* key) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = bool> T ContainsMultiplicationValue(Il2CppString* key) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = uintptr_t> T GetAdditionValue(Il2CppString* key) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = uintptr_t> T GetAdditionValue_1(Il2CppString* key, uintptr_t defaultValue) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}
	template <typename T = float> T GetMultiplicationValue(Il2CppString* key) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = float> T GetMultiplicationValue_1(Il2CppString* key, float defaultValue) {
		return ((T (*)(RoleAttributeValue1*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}
	template <typename T = uintptr_t> T CalculateFinalValue() {
		return ((T (*)(RoleAttributeValue1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetFinalValue() {
		return ((T (*)(RoleAttributeValue1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetDeltaValue() {
		return ((T (*)(RoleAttributeValue1*))(Il2CppBase() + 0x0))(this);
	}

};

}
