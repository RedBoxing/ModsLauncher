#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc.SimpleJSON {

class JSONLazyCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc.SimpleJSON", "JSONLazyCreator"));
	}

	template <typename T = uintptr_t> T& m_Node() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_Key() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Set(uintptr_t aVal) {
		return ((T (*)(JSONLazyCreator*, uintptr_t))(Il2CppBase() + 0x173473C))(this, aVal);
	}
	template <typename T = uintptr_t> T get_Item(int32_t aIndex) {
		return ((T (*)(JSONLazyCreator*, int32_t))(Il2CppBase() + 0x17347FC))(this, aIndex);
	}
	template <typename T = void> T set_Item(int32_t aIndex, uintptr_t value) {
		return ((T (*)(JSONLazyCreator*, int32_t, uintptr_t))(Il2CppBase() + 0x17348B0))(this, aIndex, value);
	}
	template <typename T = uintptr_t> T get_Item_1(Il2CppString* aKey) {
		return ((T (*)(JSONLazyCreator*, Il2CppString*))(Il2CppBase() + 0x173498C))(this, aKey);
	}
	template <typename T = void> T set_Item_1(Il2CppString* aKey, uintptr_t value) {
		return ((T (*)(JSONLazyCreator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1734A40))(this, aKey, value);
	}
	template <typename T = void> T Add(uintptr_t aItem) {
		return ((T (*)(JSONLazyCreator*, uintptr_t))(Il2CppBase() + 0x1734B1C))(this, aItem);
	}
	template <typename T = void> T Add_1(Il2CppString* aKey, uintptr_t aItem) {
		return ((T (*)(JSONLazyCreator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1734BF0))(this, aKey, aItem);
	}
	template <typename T = bool> static T op_Equality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1734CCC))(0, a, b);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1734E34))(0, a, b);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(JSONLazyCreator*, uintptr_t))(Il2CppBase() + 0x1734EB4))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x1734F34))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x1734FF0))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(Il2CppString* aPrefix) {
		return ((T (*)(JSONLazyCreator*, Il2CppString*))(Il2CppBase() + 0x1735078))(this, aPrefix);
	}
	template <typename T = int32_t> T get_AsInt() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x1735114))(this);
	}
	template <typename T = void> T set_AsInt(int32_t value) {
		return ((T (*)(JSONLazyCreator*, int32_t))(Il2CppBase() + 0x17351D4))(this, value);
	}
	template <typename T = float> T get_AsFloat() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x1735374))(this);
	}
	template <typename T = void> T set_AsFloat(float value) {
		return ((T (*)(JSONLazyCreator*, float))(Il2CppBase() + 0x1735504))(this, value);
	}
	template <typename T = double> T get_AsDouble() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x17356AC))(this);
	}
	template <typename T = void> T set_AsDouble(double value) {
		return ((T (*)(JSONLazyCreator*, double))(Il2CppBase() + 0x173583C))(this, value);
	}
	template <typename T = bool> T get_AsBool() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x17359E4))(this);
	}
	template <typename T = void> T set_AsBool(bool value) {
		return ((T (*)(JSONLazyCreator*, bool))(Il2CppBase() + 0x1735B78))(this, value);
	}
	template <typename T = uintptr_t> T get_AsArray() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x1735D18))(this);
	}
	template <typename T = uintptr_t> T get_AsObject() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x1735EBC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_Item(int32_t P0) {
		return ((T (*)(JSONLazyCreator*, int32_t))(Il2CppBase() + 0x173605C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_set_Item(int32_t P0, uintptr_t P1) {
		return ((T (*)(JSONLazyCreator*, int32_t, uintptr_t))(Il2CppBase() + 0x1736060))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_Item_1(Il2CppString* P0) {
		return ((T (*)(JSONLazyCreator*, Il2CppString*))(Il2CppBase() + 0x1736064))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_set_Item_1(Il2CppString* P0, uintptr_t P1) {
		return ((T (*)(JSONLazyCreator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1736068))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Add(uintptr_t P0) {
		return ((T (*)(JSONLazyCreator*, uintptr_t))(Il2CppBase() + 0x173606C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Add_1(Il2CppString* P0, uintptr_t P1) {
		return ((T (*)(JSONLazyCreator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x173611C))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(JSONLazyCreator*, uintptr_t))(Il2CppBase() + 0x1736120))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetHashCode() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x1736198))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x173619C))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString_1(Il2CppString* P0) {
		return ((T (*)(JSONLazyCreator*, Il2CppString*))(Il2CppBase() + 0x17361A0))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_AsInt() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x17361A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_AsInt(int32_t P0) {
		return ((T (*)(JSONLazyCreator*, int32_t))(Il2CppBase() + 0x1736234))(this, P0);
	}
	template <typename T = float> T iFixBaseProxy_get_AsFloat() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x17362C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_AsFloat(float P0) {
		return ((T (*)(JSONLazyCreator*, float))(Il2CppBase() + 0x173635C))(this, P0);
	}
	template <typename T = double> T iFixBaseProxy_get_AsDouble() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x17363F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_AsDouble(double P0) {
		return ((T (*)(JSONLazyCreator*, double))(Il2CppBase() + 0x17364D4))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_get_AsBool() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x1736568))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_AsBool(bool P0) {
		return ((T (*)(JSONLazyCreator*, bool))(Il2CppBase() + 0x1736670))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_AsArray() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x1736740))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_AsObject() {
		return ((T (*)(JSONLazyCreator*))(Il2CppBase() + 0x1736800))(this);
	}

};

}
