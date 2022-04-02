#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace KTPlaySDKJson {

class KTJSON
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "KTPlaySDKJson", "KTJSON"));
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
	template <typename T = int32_t> static T& lastErrorIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& lastDecode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T jsonDecode(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4252C80))(0, json);
	}
	template <typename T = Il2CppString*> static T jsonEncode(uintptr_t json) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42530BC))(0, json);
	}
	template <typename T = bool> static T lastDecodeSuccessful() {
		return ((T (*)(void *))(Il2CppBase() + 0x42537F4))(0);
	}
	template <typename T = int32_t> static T getLastErrorIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x42538A0))(0);
	}
	template <typename T = Il2CppString*> static T getLastErrorSnippet() {
		return ((T (*)(void *))(Il2CppBase() + 0x4253944))(0);
	}
	template <typename T = uintptr_t> static T parseObject(Il2CppArray<uintptr_t>* json, uintptr_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4253B0C))(0, json, index);
	}
	template <typename T = uintptr_t> static T parseArray(Il2CppArray<uintptr_t>* json, uintptr_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4254600))(0, json, index);
	}
	template <typename T = uintptr_t> static T parseValue(Il2CppArray<uintptr_t>* json, uintptr_t index, uintptr_t success) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4252DEC))(0, json, index, success);
	}
	template <typename T = Il2CppString*> static T parseString(Il2CppArray<uintptr_t>* json, uintptr_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x42542B4))(0, json, index);
	}
	template <typename T = double> static T parseNumber(Il2CppArray<uintptr_t>* json, uintptr_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x42547E4))(0, json, index);
	}
	template <typename T = int32_t> static T getLastIndexOfNumber(Il2CppArray<uintptr_t>* json, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4254A5C))(0, json, index);
	}
	template <typename T = void> static T eatWhitespace(Il2CppArray<uintptr_t>* json, uintptr_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x425494C))(0, json, index);
	}
	template <typename T = int32_t> static T lookAhead(Il2CppArray<uintptr_t>* json, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x42541F4))(0, json, index);
	}
	template <typename T = int32_t> static T nextToken(Il2CppArray<uintptr_t>* json, uintptr_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4253D4C))(0, json, index);
	}
	template <typename T = bool> static T serializeObjectOrArray(uintptr_t objectOrArray, uintptr_t builder) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4254B64))(0, objectOrArray, builder);
	}
	template <typename T = bool> static T serializeObject(uintptr_t anObject, uintptr_t builder) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4254DA8))(0, anObject, builder);
	}
	template <typename T = bool> static T serializeDictionary(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict, uintptr_t builder) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x42555CC))(0, dict, builder);
	}
	template <typename T = bool> static T serializeArray(uintptr_t anArray, uintptr_t builder) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42550EC))(0, anArray, builder);
	}
	template <typename T = bool> static T serializeValue(uintptr_t value, uintptr_t builder) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42531B4))(0, value, builder);
	}
	template <typename T = void> static T serializeString(Il2CppString* aString, uintptr_t builder) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x425529C))(0, aString, builder);
	}
	template <typename T = void> static T serializeNumber(double number, uintptr_t builder) {
		return ((T (*)(void *, double, uintptr_t))(Il2CppBase() + 0x4255854))(0, number, builder);
	}

};

}
