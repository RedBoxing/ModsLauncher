#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc.SimpleJSON {

class JSONNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc.SimpleJSON", "JSONNode"));
	}


	template <typename T = void> T Add(Il2CppString* aKey, uintptr_t aItem) {
		return ((T (*)(JSONNode*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x17333F8))(this, aKey, aItem);
	}
	template <typename T = uintptr_t> T get_Item(int32_t aIndex) {
		return ((T (*)(JSONNode*, int32_t))(Il2CppBase() + 0x17332AC))(this, aIndex);
	}
	template <typename T = void> T set_Item(int32_t aIndex, uintptr_t value) {
		return ((T (*)(JSONNode*, int32_t, uintptr_t))(Il2CppBase() + 0x1733320))(this, aIndex, value);
	}
	template <typename T = uintptr_t> T get_Item_1(Il2CppString* aKey) {
		return ((T (*)(JSONNode*, Il2CppString*))(Il2CppBase() + 0x17331C0))(this, aKey);
	}
	template <typename T = void> T set_Item_1(Il2CppString* aKey, uintptr_t value) {
		return ((T (*)(JSONNode*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1733234))(this, aKey, value);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x173460C))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(JSONNode*, Il2CppString*))(Il2CppBase() + 0x1734698))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x1733398))(this);
	}
	template <typename T = void> T Add_1(uintptr_t aItem) {
		return ((T (*)(JSONNode*, uintptr_t))(Il2CppBase() + 0x1736070))(this, aItem);
	}
	template <typename T = uintptr_t> T Remove(Il2CppString* aKey) {
		return ((T (*)(JSONNode*, Il2CppString*))(Il2CppBase() + 0x1733470))(this, aKey);
	}
	template <typename T = uintptr_t> T Remove_1(int32_t aIndex) {
		return ((T (*)(JSONNode*, int32_t))(Il2CppBase() + 0x17334E4))(this, aIndex);
	}
	template <typename T = uintptr_t> T Remove_2(uintptr_t aNode) {
		return ((T (*)(JSONNode*, uintptr_t))(Il2CppBase() + 0x1733558))(this, aNode);
	}
	template <typename T = void*> T get_Childs() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x17335CC))(this);
	}
	template <typename T = void*> T get_DeepChilds() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x17368F8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x1733680))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(Il2CppString* aPrefix) {
		return ((T (*)(JSONNode*, Il2CppString*))(Il2CppBase() + 0x173370C))(this, aPrefix);
	}
	template <typename T = int32_t> T get_AsInt() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x17361A8))(this);
	}
	template <typename T = void> T set_AsInt(int32_t value) {
		return ((T (*)(JSONNode*, int32_t))(Il2CppBase() + 0x1736238))(this, value);
	}
	template <typename T = float> T get_AsFloat() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x17362CC))(this);
	}
	template <typename T = void> T set_AsFloat(float value) {
		return ((T (*)(JSONNode*, float))(Il2CppBase() + 0x1736360))(this, value);
	}
	template <typename T = double> T get_AsDouble() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x17363F4))(this);
	}
	template <typename T = void> T set_AsDouble(double value) {
		return ((T (*)(JSONNode*, double))(Il2CppBase() + 0x17364D8))(this, value);
	}
	template <typename T = bool> T get_AsBool() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x173656C))(this);
	}
	template <typename T = void> T set_AsBool(bool value) {
		return ((T (*)(JSONNode*, bool))(Il2CppBase() + 0x1736678))(this, value);
	}
	template <typename T = uintptr_t> T get_AsArray() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x1736744))(this);
	}
	template <typename T = uintptr_t> T get_AsObject() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x1736804))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x17369F0))(0, s);
	}
	template <typename T = Il2CppString*> static T op_Implicit_1(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1736B8C))(0, d);
	}
	template <typename T = bool> static T op_Equality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1733884))(0, a, b);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1736C1C))(0, a, b);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(JSONNode*, uintptr_t))(Il2CppBase() + 0x1736124))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x1734F90))(this);
	}
	template <typename T = Il2CppString*> static T Escape(Il2CppString* aText) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1732660))(0, aText);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* aJSON) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1736C9C))(0, aJSON);
	}
	template <typename T = void> T Serialize(uintptr_t aWriter) {
		return ((T (*)(JSONNode*, uintptr_t))(Il2CppBase() + 0x17337AC))(this, aWriter);
	}
	template <typename T = void> T SaveToStream(uintptr_t aData) {
		return ((T (*)(JSONNode*, uintptr_t))(Il2CppBase() + 0x1737448))(this, aData);
	}
	template <typename T = void> T SaveToCompressedStream(uintptr_t aData) {
		return ((T (*)(JSONNode*, uintptr_t))(Il2CppBase() + 0x173750C))(this, aData);
	}
	template <typename T = void> T SaveToCompressedFile(Il2CppString* aFileName) {
		return ((T (*)(JSONNode*, Il2CppString*))(Il2CppBase() + 0x17375D0))(this, aFileName);
	}
	template <typename T = Il2CppString*> T SaveToCompressedBase64() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x1737694))(this);
	}
	template <typename T = void> T SaveToFile(Il2CppString* aFileName) {
		return ((T (*)(JSONNode*, Il2CppString*))(Il2CppBase() + 0x1737748))(this, aFileName);
	}
	template <typename T = Il2CppString*> T SaveToBase64() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x1737910))(this);
	}
	template <typename T = uintptr_t> static T Deserialize(uintptr_t aReader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1737AEC))(0, aReader);
	}
	template <typename T = uintptr_t> static T LoadFromCompressedFile(Il2CppString* aFileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1737EDC))(0, aFileName);
	}
	template <typename T = uintptr_t> static T LoadFromCompressedStream(uintptr_t aData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1737F90))(0, aData);
	}
	template <typename T = uintptr_t> static T LoadFromCompressedBase64(Il2CppString* aBase64) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1738044))(0, aBase64);
	}
	template <typename T = uintptr_t> static T LoadFromStream(uintptr_t aData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x17380F8))(0, aData);
	}
	template <typename T = uintptr_t> static T LoadFromFile(Il2CppString* aFileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1738268))(0, aFileName);
	}
	template <typename T = uintptr_t> static T LoadFromBase64(Il2CppString* aBase64) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x17383C4))(0, aBase64);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x17384B8))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(JSONNode*, uintptr_t))(Il2CppBase() + 0x17384C0))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetHashCode() {
		return ((T (*)(JSONNode*))(Il2CppBase() + 0x17384C8))(this);
	}

};

}
