#pragma once
#include "Il2Cpp/Il2Cpp.h"

class JSON
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JSON"));
	}

	template <typename T = int32_t> static T& TOKEN_NONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TOKEN_CURLY_OPEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TOKEN_CURLY_CLOSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TOKEN_SQUARED_OPEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TOKEN_SQUARED_CLOSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TOKEN_COLON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TOKEN_COMMA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TOKEN_STRING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TOKEN_NUMBER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TOKEN_TRUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TOKEN_FALSE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TOKEN_NULL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BUILDER_CAPACITY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T JsonDecode(Il2CppArray<uintptr_t>* json) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x21A2E2C))(0, json);
	}
	template <typename T = uintptr_t> static T JsonDecode_1(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x21A2EB4))(0, json);
	}
	template <typename T = uintptr_t> static T JsonDecode_2(Il2CppString* json, uintptr_t success) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21A2F2C))(0, json, success);
	}
	template <typename T = Il2CppString*> static T JsonEncode(uintptr_t json) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21A3164))(0, json);
	}
	template <typename T = uintptr_t> static T ParseObject(Il2CppArray<uintptr_t>* json, uintptr_t index, uintptr_t success) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A351C))(0, json, index, success);
	}
	template <typename T = uintptr_t> static T ParseArray(Il2CppArray<uintptr_t>* json, uintptr_t index, uintptr_t success) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A3F54))(0, json, index, success);
	}
	template <typename T = uintptr_t> static T ParseValue(Il2CppArray<uintptr_t>* json, uintptr_t index, uintptr_t success) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A2FC8))(0, json, index, success);
	}
	template <typename T = Il2CppString*> static T ParseString(Il2CppArray<uintptr_t>* json, uintptr_t index, uintptr_t success) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A3B84))(0, json, index, success);
	}
	template <typename T = uintptr_t> static T ParseNumber(Il2CppArray<uintptr_t>* json, uintptr_t index, uintptr_t success) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A40B0))(0, json, index, success);
	}
	template <typename T = int32_t> static T GetLastIndexOfNumber(Il2CppArray<uintptr_t>* json, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x21A439C))(0, json, index);
	}
	template <typename T = void> static T EatWhitespace(Il2CppArray<uintptr_t>* json, uintptr_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x21A428C))(0, json, index);
	}
	template <typename T = int32_t> static T LookAhead(Il2CppArray<uintptr_t>* json, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x21A3B08))(0, json, index);
	}
	template <typename T = int32_t> static T NextToken(Il2CppArray<uintptr_t>* json, uintptr_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x21A36A4))(0, json, index);
	}
	template <typename T = bool> static T SerializeValue(uintptr_t value, uintptr_t builder) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A323C))(0, value, builder);
	}
	template <typename T = bool> static T SerializeObject(uintptr_t anObject, uintptr_t builder) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A47DC))(0, anObject, builder);
	}
	template <typename T = bool> static T SerializeArray(uintptr_t anArray, uintptr_t builder) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A4B00))(0, anArray, builder);
	}
	template <typename T = bool> static T SerializeArray_1(Il2CppArray<uintptr_t>* anArray, uintptr_t builder) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x21A4E7C))(0, anArray, builder);
	}
	template <typename T = bool> static T SerializeString(Il2CppString* aString, uintptr_t builder) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21A44A4))(0, aString, builder);
	}
	template <typename T = bool> static T SerializeNumber(double number, uintptr_t builder) {
		return ((T (*)(void *, double, uintptr_t))(Il2CppBase() + 0x21A4D64))(0, number, builder);
	}
	template <typename T = bool> static T IsNumeric(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21A4C84))(0, o);
	}

};

}
